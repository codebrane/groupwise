#include "stdafx.h"
#include "gwadapi.h"
#include "email.h"

// Return codes
#define OK                                0
#define OK_WITH_UPDATED_VISIBILITY        1
#define ERROR_COM_INIT                    -1
#define ERROR_CANT_CONNECT_TO_SERVER      -2
#define ERROR_CANT_GET_USERS_INTERFACE    -3
#define ERROR_CANT_ADD_USER               -4
#define ERROR_CANT_SET_DOMAIN_VISIBILITY  -5
#define ERROR_CANT_GET_USER_INTERFACE     -6
#define ERROR_CANT_COMMIT_USER_OBJECT     -7
#define ERROR_USER_ALREADY_EXISTS         -8
#define ERROR_CANT_COMMIT_SYSTEM_OBJECT   -9
#define ERROR_USER_NOT_FOUND              -10
#define ERROR_CANT_GET_USER_OBJECT        -11

// Mode definitions for the commandline
#define MODE_ADD_USER           "adduser"
#define MODE_DELETE_USER_GW     "delgw"
#define MODE_DELETE_USER_NDS    "delnds"
#define MODE_DELETE_USER_GWNDS  "delgwnds"

// Command line parameters - argv[0] is always the program name
#define INDEX_GWSERVER    1 // UNC path to the server that holds the domain/post offices
#define INDEX_GWID        2 // ID to log into Groupwise with. Should be the same as the Novell ID
#define INDEX_NDSDN       3 // DN of the user in NDS (e.g. 666666.students.here.there.someorg)
#define INDEX_PASSWORD    4 // Password for the Groupwise account. Should be the same as the Novell password
#define INDEX_DOMAIN      5 // Domain where the post office is
#define INDEX_POSTOFFICE  6 // Post office to create the user in
#define INDEX_VISIBILITY  7 // Visibility of the user. Can be "po", "domain", "none" or "system"
#define INDEX_MODE        8 // Can be MODE_DELETE_USER_GW, MODE_DELETE_USER_NDS, MODE_DELETE_USER_GWNDS, MODE_ADD_USER
#define INDEX_RETRY_WAIT  9 // Number of seconds to wait before trying to commit the user object

// User visibility
#define VISIBILITY_SYSTEM "system"
#define VISIBILITY_DOMAIN "domain"
#define VISIBILITY_PO     "po"
#define VISIBILITY_NONE   "none"

// For the log file
#define NEWLINE             "\n"
#define DATE_SEPARATOR      ","
#define TIME_SEPARATOR      ":"
#define FILENAME_SEPARATOR  "-"
#define FILENAME_EXT        ".txt"

// For GetTime()
#define FILENAME          1
#define LOGFILE           2

// Dummy Groupwise mailbox ID. Groupwise will create it's own one
#define DUMMY_MAILBOX_ID  "o0o"

// Number of times we'll try to add the user - to account for NDS delays
#define NO_OF_ATTEMPTS  60

TCHAR* ConvertToAnsi(OLECHAR* szW)
{
	static char achA[STRCONVERT_MAXLEN]; 
	WideCharToMultiByte(CP_ACP, 0, szW, -1, achA, STRCONVERT_MAXLEN, NULL, NULL);  
	return achA; 
}

OLECHAR* ConvertToUnicode(TCHAR* szA)
{
	static OLECHAR achW[STRCONVERT_MAXLEN]; 
	MultiByteToWideChar(CP_ACP, 0, szA, -1, achW, STRCONVERT_MAXLEN);  
	return achW; 
}

/* GWInit
 *
 * This function will set up COM and the groupwise client
 *
 * Params:
 * lpszDomain - Pointer to the name of the domain to connect to, e.g. \\sm_srv1\mail\grpwise\sm_dom
 *
 * Returns:
 * If the function succeeds it returns OK, otherwise an error value less than 0
 */
int GWInit (char* lpszDomain)
{
	VARIANT 	txtPath;

	// Initialize COM
	CoInitialize (NULL);

	// Create an instance of the Groupwise System object
	if (FAILED (CoCreateInstance (CLSID_System,
								                NULL,
								                CLSCTX_INPROC_SERVER | CLSCTX_INPROC_HANDLER | CLSCTX_LOCAL_SERVER,
								                IID_IADSystem,
								                (void**)&pIGWSystem)))
		return ERROR_COM_INIT;

  // Initialize and handle OLE strings
	VariantInit (&txtPath);
	V_VT(&txtPath) = VT_BSTR;
	V_BSTR(&txtPath) = SysAllocString (TO_OLE_STRING (lpszDomain));

	// Connect to the Groupwise server
	if(!SUCCEEDED (pIGWSystem->Connect (txtPath)))
  {
    GWExit();
		return ERROR_CANT_CONNECT_TO_SERVER;
  }

	return OK;
}



/* GWExit
 *
 * This function cleans everything up - COM, Groupwise client, memory etc.
 *
 * Params:
 * NONE
 *
 * Returns:
 * NOTHING
 */
void GWExit()
{
	// Release the System object...
	if (pIGWSystem)
		pIGWSystem->Release();

  // ...the Users object
	if (pIGWUsers)
		pIGWUsers->Release();

  // ...and the User object
	if (pIGWUser)
		pIGWUser->Release();

	// Unintialize COM
	CoUninitialize();
}




/* UserExistsInPostoffice
 *
 * This function will check to see if the specified user exists in the system
 *
 * Params:
 * gwID - The Groupwise ID of the user, e.g. SM000009
 * vPostoffice - The name of the postoffice to search, e.g. stu1
 * vDomain - The name of the domain to search, e.g. student
 *
 * Returns:
 * TRUE = user exists
 * FALSE = user doesn't exist
 */
BOOL UserExistsInPostoffice (BSTR gwID, VARIANT vPostoffice, VARIANT vDomain)
{
  DIADUser *pDIADUser = NULL;
  BOOL bReturn;

  // Search for the user
  if (SUCCEEDED (pIGWUsers->Item (gwID, vPostoffice, vDomain, &pDIADUser)))
    bReturn = true;
  else
    bReturn = false;

  return bReturn;
}

int StringToInt (char* pString)
{
  int result = 0;

  while (*pString >= '0' && *pString <= '9')
  {
    result = (result * 10) + (*pString - '0');
    pString++;
  }

  return result;
}

/* _tmain
 *
 * Main program entry point. Action starts here!
 *
 * Params:
 * argv - our commandline parameters in an array
 *
 * Returns:
 * The program returns one of the return codes listed at the top of this file
 */
int _tmain (int argc, _TCHAR* argv[])
{
	int         result;
	DIADUsers   *pDIADUsers = NULL;
	DIADUser    *pDIADUser = NULL;
	VARIANT     password;
	VARIANT     postOffice;
	VARIANT     domain;
	VARIANT     mailboxID;
  VARIANT     tree;
  BOOL        userAdded = false;
  BOOL        userValid = false;
  int         attempts = 0;
  int         retry_interval = (1000 * StringToInt (argv[INDEX_RETRY_WAIT]));
  char        szDateAndTime[255];

  // Initialise and connect to the Groupwise server
  result = GWInit (argv[INDEX_GWSERVER]);

  // If we didn't initialise report the error and shutdown
  if (result < OK)
  {
    return result;
  }

  // Initialise the params for sending to Groupwise
	VariantInit (&password);
	VariantInit (&postOffice);
	VariantInit (&domain);
	VariantInit (&mailboxID);
  VariantInit (&tree);
	V_VT(&password) = VT_BSTR;
	V_VT(&postOffice) = VT_BSTR;
	V_VT(&domain) = VT_BSTR;
	V_VT(&mailboxID) = VT_BSTR;
  V_VT(&tree) = VT_BSTR;

  // Get a pointer to the Users Dispatch interface...
	pIGWSystem->get_Users (&pDIADUsers);
  // ...to get a pointer to the Users interface
	if (SUCCEEDED (pDIADUsers->QueryInterface (IID_IADUsers, (void**)&pIGWUsers)))
		pDIADUsers->Release();
	else
  {
    //logFile << "Failed to get a pointer to the Users Dispatch interface";
		GWExit();
		return ERROR_CANT_GET_USERS_INTERFACE;
	}

  // Get ready to talk to Groupwise
	V_BSTR(&password) = SysAllocString (TO_OLE_STRING (argv[INDEX_PASSWORD]));
	V_BSTR(&postOffice) = SysAllocString (TO_OLE_STRING (argv[INDEX_POSTOFFICE]));
	V_BSTR(&domain) = SysAllocString (TO_OLE_STRING (argv[INDEX_DOMAIN]));
	V_BSTR(&mailboxID) = SysAllocString (TO_OLE_STRING (DUMMY_MAILBOX_ID));
  V_BSTR(&tree) = SysAllocString (TO_OLE_STRING ("YOUR_NDS_TREE"));
	BSTR gwUserID = SysAllocString (TO_OLE_STRING (argv[INDEX_GWID]));
	BSTR ndsDN = SysAllocString (TO_OLE_STRING (argv[INDEX_NDSDN]));
  BSTR gwID = SysAllocString (TO_OLE_STRING (argv[INDEX_GWID]));

  // Do we just need to delete the user?
  if ( (!(strcmp (argv[INDEX_MODE], MODE_DELETE_USER_GW)))  ||
       (!(strcmp (argv[INDEX_MODE], MODE_DELETE_USER_NDS))) ||
       (!(strcmp (argv[INDEX_MODE], MODE_DELETE_USER_GWNDS))) )
  {
    StoreTypeConstants deleteMode;
    BSTR givenname;
    BSTR sn;

    // Find the user in the postoffice
    if (SUCCEEDED (pIGWUsers->ItemByDN (ndsDN, tree, &pDIADUser)))
    {
      // If we found them, get a pointer to the user object for them
	    if (SUCCEEDED (pDIADUser->QueryInterface (IID_IADUser, (void**)&pIGWUser)))
      {
        // Release the interface - don't need it now
		    pDIADUser->Release();

        // Get their details
        pIGWUser->get_GivenName (&givenname);
        pIGWUser->get_Surname (&sn);

        // Delete the user... eadNDS eadGW eadBothNDSandGW
        if (!(strcmp (argv[INDEX_MODE], MODE_DELETE_USER_GW))) deleteMode = eadGW;
        if (!(strcmp (argv[INDEX_MODE], MODE_DELETE_USER_NDS))) deleteMode = eadNDS;
        if (!(strcmp (argv[INDEX_MODE], MODE_DELETE_USER_GWNDS))) deleteMode = eadBothNDSandGW;
        if (SUCCEEDED (pIGWUser->Delete (deleteMode)))
        {
          // ...and update the system
          if (SUCCEEDED (pIGWSystem->Commit()))
          {
            result = OK;
          }
          else
          {
            result = ERROR_CANT_COMMIT_SYSTEM_OBJECT;
          }
        }
      }
      else
      {
        result = ERROR_CANT_GET_USER_OBJECT;
      }
    }
    else
    {
      result = ERROR_USER_NOT_FOUND;
    }

    // Clean up...
	  GWExit();

    // ...and return the result
	  return result;

  } // if ( (argv[INDEX_MODE] == MODE_DELETE_USER_GW) ...

  // Default mode is adding a user so first check if the user already exists in all possible postoffices
  if (UserExistsInPostoffice (gwID, postOffice, domain))
  {
    GWExit();
    return ERROR_USER_ALREADY_EXISTS;
  }

  // Create the account. We'll try up to 100 times to take care of NDS delays
  while ((!userAdded) && (attempts < NO_OF_ATTEMPTS))
  {
    HRESULT hResult = pIGWUsers->AddExistingUser (gwUserID, ndsDN, password, postOffice, domain, mailboxID, &pDIADUser);
    if (SUCCEEDED(hResult))
    {
      userAdded = true;

      /* There is apparently a delay between Groupwise accepting the user and the user becoming a
       * valid entity with attributes that can be manipulated. We'll know if it's become valid as the
       * commit function will work. We'll try a few times to call commit. If it works then we can set
       * various attributes of the user.
       * We only need to do this if we've been told to set the user to a visibility other than system,
       * which is the default visibility.
       */
      if (strcmp (argv[INDEX_VISIBILITY], VISIBILITY_SYSTEM))
      {
        // Get a handle on the User interface - this represents the user we've just added...
        if (SUCCEEDED (pDIADUser->QueryInterface (IID_IADUser, (void**)&pIGWUser)))
        {
          // ...and release the dispatch interface. Don't need it any more
		      pDIADUser->Release();

          VisibilityTypeConstants vis;

          attempts = 0;

          // What visibility is required?
          if (argv[INDEX_VISIBILITY] == VISIBILITY_DOMAIN)
            vis = eadVisDomain;
          if (argv[INDEX_VISIBILITY] == VISIBILITY_PO)
            vis = eadVisPostOffice;
          if (argv[INDEX_VISIBILITY] == VISIBILITY_NONE)
            vis = eadVisNone;

          // Keep trying...
          while ((!userValid) && (attempts < NO_OF_ATTEMPTS))
          {
            // ...to commit the User object...
            if (SUCCEEDED (pIGWUser->Commit()))
            {
              if (SUCCEEDED (pIGWUser->put_Visibility (eadVisDomain)))
              {
                // ...then commit the user again
                if (SUCCEEDED (pIGWUser->Commit()))
                {
                  userValid = true;
                  result = OK_WITH_UPDATED_VISIBILITY;
                }
              }
            }

            // Try to commit the User object again
            attempts++;
            Sleep (retry_interval);
          }

          if (!userValid)
            result = ERROR_CANT_COMMIT_USER_OBJECT;
        } // if (SUCCEEDED (pDIADUser->QueryInterface (IID_IADUser, (void**)&pIGWUser)))
        else
          result = ERROR_CANT_GET_USER_INTERFACE;
      } // if (argv[INDEX_VISIBILITY] != VISIBILITY_SYSTEM)
      else
        result = OK;
    } // if (SUCCEEDED (pIGWUsers->AddExistingUser ...
    else
    {
      attempts++;
      result = ERROR_CANT_ADD_USER;
      Sleep (retry_interval);
    }
  } // while ((!userAdded) && (attempts < NO_OF_ATTEMPTS))

  // Update the system. Failure to do this will result in a delay before Groupwise displays the user in Console1
  pIGWSystem->Commit();

  // Clean up
	GWExit();

  // Return the result code
	return result;
}


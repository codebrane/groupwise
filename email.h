#ifndef email_h
#define email_h

#include "gwadapi.h"

const int STRCONVERT_MAXLEN = 500;
const int FOLDERNAME_MAXLEN = 50;

// Globals
IADSystem *pIGWSystem = NULL;
IADUsers  *pIGWUsers = NULL;
IADUser   *pIGWUser = NULL;

//==== PROTOTYPES ====
#ifdef UNICODE
	#define FROM_OLE_STRING(str) str
	#define TO_OLE_STRING(str) str
#else
	#define FROM_OLE_STRING(str) ConvertToAnsi(str)
	#define TO_OLE_STRING(str) ConvertToUnicode(str)

	char* ConvertToAnsi(OLECHAR FAR* szW);
	OLECHAR* ConvertToUnicode(char* szA);
#endif

int GWInit();
void GWExit();

#endif  // email_h


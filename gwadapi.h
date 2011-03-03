/***************************************************************************
$name: Gwadapi.h
$version: 1.0 
$date_modified: 121298 
$description: Header file
$owner: GroupWise SDK Team Lead
Copyright (c) 1998 Novell, Inc. All Rights Reserved.

THIS WORK IS SUBJECT TO U.S. AND INTERNATIONAL COPYRIGHT LAWS AND TREATIES.
USE AND REDISTRIBUTION OF THIS WORK IS SUBJECT TO THE LICENSE AGREEMENT
ACCOMPANYING THE SOFTWARE DEVELOPMENT KIT (SDK) THAT CONTAINS THIS WORK.
PURSUANT TO THE SDK LICENSE AGREEMENT, NOVELL HEREBY GRANTS TO DEVELOPER A
ROYALTY-FREE, NON-EXCLUSIVE LICENSE TO INCLUDE NOVELL'S SAMPLE CODE IN ITS
PRODUCT. NOVELL GRANTS DEVELOPER WORLDWIDE DISTRIBUTION RIGHTS TO MARKET,
DISTRIBUTE, OR SELL NOVELL'S SAMPLE CODE AS A COMPONENT OF DEVELOPER'S
PRODUCTS. NOVELL SHALL HAVE NO OBLIGATIONS TO DEVELOPER OR DEVELOPER'S
CUSTOMERS WITH RESPECT TO THIS CODE.
****************************************************************************/

#ifndef _AdminTypeLibrary_H_
#define _AdminTypeLibrary_H_

DEFINE_GUID(LIBID_AdminTypeLibrary,0x35FC235CL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);
#ifndef BEGIN_INTERFACE
#define BEGIN_INTERFACE
#endif

interface DIADSystem;

interface DIADDomain;

interface DIADDomains;

interface DIADDomainsIterator;

interface DIADPostOffice;

interface DIADPostOffices;

interface DIADPostOfficesIterator;

interface DIADDistributionList;

interface DIADDistributionLists;

interface DIADResources;

interface DIADResourcesIterator;

interface DIADUsers;

interface DIADUsersIterator;

interface DIADAdminObject;

interface DIADDLMembers;

interface DIADDLMembersIterator;

interface DIADDistributionListsIterator;

interface DIADFields;

interface DIADFieldDefinition;

interface DIADFieldDefinitions;

interface DIADNicknames;

interface DIADNicknamesIterator;

interface DIADDMSAccessRightsCollection;

interface DIADDMSAccessRightsCollectionIterator;

interface DIADDMSFieldDefinition;

interface DIADDMSLibrary;

interface DIADDMSLibraries;

interface DIADDMSLibrariesIterator;

interface DIADLookupTable;

interface DIADLookupTables;

interface DIADLookupTableEntries;

interface DIADLookupTableEntriesIterator;

interface DIADStorageAreas;

typedef enum {
    eadAddRight = 1,
    eadDeleteRight = 2,
    eadDesignateOfficialRight = 4,
    eadEditRight = 8,
    eadLibrarianRight = 16,
    eadResetInUseFlagRight = 32,
    eadViewRight = 64
} DMSAccessRightsConstants;

typedef enum {
    eadDataString = 0,
    eadDataNumeric,
    eadDataDate,
    eadDataBinary
} DataTypeConstants;

typedef enum {
    eadPrimary = 2,
    eadSecondary = 1,
    eadExternal = 3
} DomainTypeConstants;

typedef enum {
    eadArchive = 0,
    eadDelete,
    eadRetain
} ExpirationTypeConstants;

typedef enum {
    eadCustomFieldDefinition = 0,
    eadSystemFieldDefinition
} FieldDefinitionTypeConstants;

typedef enum {
    eadDistributionListMember = 0,
    eadUserMember,
    eadNoMember
} MemberTypeConstants;

typedef enum {
    eadNDS = 0,
    eadGW,
    eadBothNDSandGW
} StoreTypeConstants;

typedef enum {
    eadUpper = 1,
    eadLower,
    eadMixed
} StringCaseTypeConstants;

typedef enum {
    eadResPlace = 4,
    eadResResource = 5
} ResourceTypeConstants;

typedef enum {
    eadObjDistributionList = 2,
    eadObjNickname = 3,
    eadObjResource = 5,
    eadObjUser = 6,
    eadObjDistributionLists,
    eadObjDistributionListsIterator,
    eadObjDLMember,
    eadObjDLMembers,
    eadObjDLMembersIterator,
    eadObjDomain,
    eadObjDomains,
    eadObjDomainsIterator,
    eadObjField,
    eadObjFields,
    eadObjFieldDefinition,
    eadObjFieldDefinitions,
    eadObjNicknames,
    eadObjNicknamesIterator,
    eadObjPostOffice,
    eadObjPostOffices,
    eadObjPostOfficesIterator,
    eadObjResources,
    eadObjResourcesIterator,
    eadObjSystem,
    eadObjUsers,
    eadObjUsersIterator,
    eadObjDMSFieldDefinition,
    eadObjDMSFieldDefinitions,
    eadObjDMSLibrary,
    eadObjDMSLibraries,
    eadObjDMSLibrariesIterator,
    eadObjDMSAccessRights,
    eadObjDMSAccessRightsCollection,
    eadObjDMSAccessRightsCollectionIterator,
    eadObjDocumentTypeEntry,
    eadObjLookupEntry,
    eadObjLookupTable,
    eadObjLookupTables,
    eadObjLookupTableEntry,
    eadObjLookupTableEntries,
    eadObjLookupTableEntriesIterator
} ObjTypeConstants;

typedef enum {
    eadVisPostOffice = 1,
    eadVisSystem,
    eadVisDomain,
    eadVisNone
} VisibilityTypeConstants;

typedef enum {
    eadCSOnly = 0,
    eadCSDirect,
    eadDirectOnly
} AccessModeTypeConstants;

typedef enum {
    eadLow = 0,
    eadHigh = 1
} SecurityTypeConstants;

typedef enum {
    eadAppThresholds = 0,
    eadAgentAlways,
    eadClientLocal
} DeliveryTypeConstants;

typedef enum {
    eadTo = 0,
    eadCC,
    eadBC
} ParticipationTypeConstants;

typedef enum {
    eadString = 0,
    eadNumeric,
    eadDate,
    eadBinary
} FieldTypeConstants;

typedef enum {
    eadAddressBook = 0,
    eadDocumentTypeTable,
    eadLibraryRegistry,
    eadLookupTable,
    eadSystem
} TableTypeConstants;

DEFINE_GUID(IID_IADSystem,0x35FC2356L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADSystem */
#undef INTERFACE
#define INTERFACE IADSystem

DECLARE_INTERFACE_(IADSystem, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADSystem methods */
    STDMETHOD(get_APIMajorVersion)(THIS_ long FAR* retval) PURE;
    STDMETHOD(get_APIMinorVersion)(THIS_ long FAR* retval) PURE;
    STDMETHOD(get_ConnectedDomain)(THIS_ DIADDomain FAR* FAR* retval) PURE;
    STDMETHOD(get_Description)(THIS_ BSTR FAR* desc) PURE;
    STDMETHOD(put_Description)(THIS_ BSTR Description) PURE;
    STDMETHOD(get_DistributionLists)(THIS_ DIADDistributionLists FAR* FAR* retval) PURE;
    STDMETHOD(get_Domains)(THIS_ DIADDomains FAR* FAR* retval) PURE;
    STDMETHOD(get_LastModifiedBy)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_Name)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_Nicknames)(THIS_ DIADNicknames FAR* FAR* retval) PURE;
    STDMETHOD(get_NWLogin)(THIS_ VARIANT_BOOL FAR* retval) PURE;
    STDMETHOD(put_NWLogin)(THIS_ VARIANT_BOOL DoLogin) PURE;
    STDMETHOD(get_PostOffices)(THIS_ DIADPostOffices FAR* FAR* retval) PURE;
    STDMETHOD(get_Resources)(THIS_ DIADResources FAR* FAR* retval) PURE;
    STDMETHOD(get_Users)(THIS_ DIADUsers FAR* FAR* retval) PURE;
    STDMETHOD(Commit)(THIS) PURE;
    STDMETHOD(Connect)(THIS_ VARIANT PathToDomain) PURE;
    STDMETHOD(ConnectByDN)(THIS_ BSTR DistinguishedName, VARIANT Tree) PURE;
    STDMETHOD(IsUserNameUnique)(THIS_ BSTR Name, VARIANT_BOOL FAR* retval) PURE;
    STDMETHOD(ItemByObjectID)(THIS_ BSTR ObjectID, IDispatch * FAR* retval) PURE;
    STDMETHOD(Refresh)(THIS) PURE;
};

DEFINE_GUID(DIID_DIADSystem,0x35FC2357L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADSystem */
#undef INTERFACE
#define INTERFACE DIADSystem

DECLARE_INTERFACE_(DIADSystem, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADSystem */
};

DEFINE_GUID(CLSID_System,0x35FC2358L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class System;
#endif

DEFINE_GUID(IID_IADDomain,0x35FC2359L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADDomain */
#undef INTERFACE
#define INTERFACE IADDomain

DECLARE_INTERFACE_(IADDomain, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADDomain methods */
    STDMETHOD(get_AdminDefLabels)(THIS_ DIADFieldDefinitions FAR* FAR* retval) PURE;
    STDMETHOD(get_Description)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(put_Description)(THIS_ BSTR Description) PURE;
    STDMETHOD(get_DistinguishedName)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_DistributionLists)(THIS_ DIADDistributionLists FAR* FAR* retval) PURE;
    STDMETHOD(get_DomainType)(THIS_ DomainTypeConstants FAR* retval) PURE;
    STDMETHOD(get_LastModifiedBy)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_Name)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_NDSTree)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_Nicknames)(THIS_ DIADNicknames FAR* FAR* retval) PURE;
    STDMETHOD(get_ObjectID)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_Path)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_PostOffices)(THIS_ DIADPostOffices FAR* FAR* retval) PURE;
    STDMETHOD(get_Resources)(THIS_ DIADResources FAR* FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(get_Users)(THIS_ DIADUsers FAR* FAR* retval) PURE;
    STDMETHOD(get_Version)(THIS_ long FAR* retval) PURE;
    STDMETHOD(Commit)(THIS) PURE;
    STDMETHOD(IsUserNameUnique)(THIS_ BSTR Name, VARIANT_BOOL FAR* retval) PURE;
    STDMETHOD(Refresh)(THIS) PURE;
};

DEFINE_GUID(DIID_DIADDomain,0x35FC235AL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADDomain */
#undef INTERFACE
#define INTERFACE DIADDomain

DECLARE_INTERFACE_(DIADDomain, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADDomain */
};

DEFINE_GUID(CLSID_Domain,0x35FC235BL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class Domain;
#endif

DEFINE_GUID(IID_IADDomains,0x35FC235DL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADDomains */
#undef INTERFACE
#define INTERFACE IADDomains

DECLARE_INTERFACE_(IADDomains, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADDomains methods */
    STDMETHOD(get__NewEnum)(THIS_ IUnknown * FAR* ppv) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(CreateIterator)(THIS_ DIADDomainsIterator FAR* FAR* retval) PURE;
    STDMETHOD(Find)(THIS_ DomainTypeConstants eDomainType, DIADDomains FAR* FAR* retval) PURE;
    STDMETHOD(Item)(THIS_ BSTR Name, DIADDomain FAR* FAR* retval) PURE;
    STDMETHOD(ItemByDN)(THIS_ BSTR DistinguishedName, VARIANT Tree, DIADDomain FAR* FAR* retval) PURE;
    STDMETHOD(ItemByObjectID)(THIS_ BSTR ObjectID, DIADDomain FAR* FAR* retval) PURE;
};

DEFINE_GUID(DIID_DIADDomains,0x35FC235EL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADDomains */
#undef INTERFACE
#define INTERFACE DIADDomains

DECLARE_INTERFACE_(DIADDomains, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADDomains */
};

DEFINE_GUID(CLSID_Domains,0x35FC235FL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class Domains;
#endif

DEFINE_GUID(IID_IADDomainsIterator,0x35FC2360L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADDomainsIterator */
#undef INTERFACE
#define INTERFACE IADDomainsIterator

DECLARE_INTERFACE_(IADDomainsIterator, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADDomainsIterator methods */
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(Clone)(THIS_ DIADDomainsIterator FAR* FAR* retval) PURE;
    STDMETHOD(Next)(THIS_ DIADDomain FAR* FAR* retval) PURE;
    STDMETHOD(Previous)(THIS_ DIADDomain FAR* FAR* retval) PURE;
    STDMETHOD(Reset)(THIS) PURE;
    STDMETHOD(Skip)(THIS_ long lNumberToSkip) PURE;
};

DEFINE_GUID(DIID_DIADDomainsIterator,0x35FC2361L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADDomainsIterator */
#undef INTERFACE
#define INTERFACE DIADDomainsIterator

DECLARE_INTERFACE_(DIADDomainsIterator, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADDomainsIterator */
};

DEFINE_GUID(CLSID_DomainsIterator,0x35FC2362L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class DomainsIterator;
#endif

DEFINE_GUID(IID_IADPostOfficeOld1,0x35FC2363L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADPostOfficeOld1 */
#undef INTERFACE
#define INTERFACE IADPostOfficeOld1

DECLARE_INTERFACE_(IADPostOfficeOld1, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADPostOfficeOld1 methods */
};

DEFINE_GUID(IID_IADPostOffice,0x8660D093L,0x25F9,0x11D1,0x8B,0x22,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of interface: IADPostOffice */
#undef INTERFACE
#define INTERFACE IADPostOffice

DECLARE_INTERFACE_(IADPostOffice, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADPostOffice methods */
    STDMETHOD(get_AccessMode)(THIS_ AccessModeTypeConstants FAR* accessMode) PURE;
    STDMETHOD(put_AccessMode)(THIS_ AccessModeTypeConstants eAccessMode) PURE;
    STDMETHOD(get_DefaultSecurityLevel)(THIS_ SecurityTypeConstants FAR* secLevel) PURE;
    STDMETHOD(put_DefaultSecurityLevel)(THIS_ SecurityTypeConstants eSecurityLevel) PURE;
    STDMETHOD(get_DeliveryMode)(THIS_ DeliveryTypeConstants FAR* mode) PURE;
    STDMETHOD(put_DeliveryMode)(THIS_ DeliveryTypeConstants eDeliveryMode) PURE;
    STDMETHOD(get_Description)(THIS_ BSTR FAR* desc) PURE;
    STDMETHOD(put_Description)(THIS_ BSTR Description) PURE;
    STDMETHOD(get_DisableLogins)(THIS_ VARIANT_BOOL FAR* retval) PURE;
    STDMETHOD(put_DisableLogins)(THIS_ VARIANT_BOOL Disable) PURE;
    STDMETHOD(get_DistinguishedName)(THIS_ BSTR FAR* name) PURE;
    STDMETHOD(get_DistributionLists)(THIS_ DIADDistributionLists FAR* FAR* retval) PURE;
    STDMETHOD(get_Domain)(THIS_ DIADDomain FAR* FAR* retval) PURE;
    STDMETHOD(get_External)(THIS_ VARIANT_BOOL FAR* retval) PURE;
    STDMETHOD(get_LastModifiedBy)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_Name)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_Nicknames)(THIS_ DIADNicknames FAR* FAR* retval) PURE;
    STDMETHOD(get_ObjectID)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_Path)(THIS_ BSTR FAR* path) PURE;
    STDMETHOD(get_Resources)(THIS_ DIADResources FAR* FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(get_Users)(THIS_ DIADUsers FAR* FAR* retval) PURE;
    STDMETHOD(get_Version)(THIS_ long FAR* retval) PURE;
    STDMETHOD(Commit)(THIS) PURE;
    STDMETHOD(FindObject)(THIS_ BSTR MailboxID, DIADAdminObject FAR* FAR* retval) PURE;
    STDMETHOD(IsUserNameUnique)(THIS_ BSTR Name, VARIANT_BOOL FAR* retval) PURE;
    STDMETHOD(Refresh)(THIS) PURE;
    STDMETHOD(get_Libraries)(THIS_ DIADDMSLibraries FAR* FAR* retval) PURE;
    STDMETHOD(get_LookupTables)(THIS_ DIADLookupTables FAR* FAR* retval) PURE;
};

DEFINE_GUID(DIID_DIADPostOffice,0x35FC2364L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADPostOffice */
#undef INTERFACE
#define INTERFACE DIADPostOffice

DECLARE_INTERFACE_(DIADPostOffice, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADPostOffice */
};

DEFINE_GUID(CLSID_PostOffice,0x35FC2365L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class PostOffice;
#endif

DEFINE_GUID(IID_IADPostOffices,0x35FC2366L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADPostOffices */
#undef INTERFACE
#define INTERFACE IADPostOffices

DECLARE_INTERFACE_(IADPostOffices, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADPostOffices methods */
    STDMETHOD(get__NewEnum)(THIS_ IUnknown * FAR* ppv) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(CreateIterator)(THIS_ DIADPostOfficesIterator FAR* FAR* retval) PURE;
    STDMETHOD(Item)(THIS_ BSTR Name, VARIANT Domain, DIADPostOffice FAR* FAR* retval) PURE;
    STDMETHOD(ItemByDN)(THIS_ BSTR DistinguishedName, VARIANT Tree, DIADPostOffice FAR* FAR* retval) PURE;
    STDMETHOD(ItemByObjectID)(THIS_ BSTR ObjectID, DIADPostOffice FAR* FAR* retval) PURE;
};

DEFINE_GUID(DIID_DIADPostOffices,0x35FC2367L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADPostOffices */
#undef INTERFACE
#define INTERFACE DIADPostOffices

DECLARE_INTERFACE_(DIADPostOffices, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADPostOffices */
};

DEFINE_GUID(CLSID_PostOffices,0x35FC2368L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class PostOffices;
#endif

DEFINE_GUID(IID_IADPostOfficesIterator,0x35FC2369L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADPostOfficesIterator */
#undef INTERFACE
#define INTERFACE IADPostOfficesIterator

DECLARE_INTERFACE_(IADPostOfficesIterator, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADPostOfficesIterator methods */
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(Clone)(THIS_ DIADPostOfficesIterator FAR* FAR* ppEnum) PURE;
    STDMETHOD(Next)(THIS_ DIADPostOffice FAR* FAR* ppv) PURE;
    STDMETHOD(Previous)(THIS_ DIADPostOffice FAR* FAR* ppv) PURE;
    STDMETHOD(Reset)(THIS) PURE;
    STDMETHOD(Skip)(THIS_ long lNumberToSkip) PURE;
};

DEFINE_GUID(DIID_DIADPostOfficesIterator,0x35FC236AL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADPostOfficesIterator */
#undef INTERFACE
#define INTERFACE DIADPostOfficesIterator

DECLARE_INTERFACE_(DIADPostOfficesIterator, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADPostOfficesIterator */
};

DEFINE_GUID(CLSID_PostOfficesIterator,0x35FC236BL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class PostOfficesIterator;
#endif

DEFINE_GUID(IID_IADAdminObject,0x35FC237EL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADAdminObject */
#undef INTERFACE
#define INTERFACE IADAdminObject

DECLARE_INTERFACE_(IADAdminObject, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADAdminObject methods */
    STDMETHOD(get_Description)(THIS_ BSTR FAR* desc) PURE;
    STDMETHOD(put_Description)(THIS_ BSTR Description) PURE;
    STDMETHOD(get_DistinguishedName)(THIS_ BSTR FAR* name) PURE;
    STDMETHOD(get_Domain)(THIS_ DIADDomain FAR* FAR* retval) PURE;
    STDMETHOD(get_LastModifiedBy)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_MemberOf)(THIS_ DIADDLMembers FAR* FAR* retval) PURE;
    STDMETHOD(get_Name)(THIS_ BSTR FAR* name) PURE;
    STDMETHOD(put_Name)(THIS_ BSTR Name) PURE;
    STDMETHOD(get_ObjectID)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* type) PURE;
    STDMETHOD(get_PostOffice)(THIS_ DIADPostOffice FAR* FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(get_Visibility)(THIS_ VisibilityTypeConstants FAR* visibility) PURE;
    STDMETHOD(put_Visibility)(THIS_ VisibilityTypeConstants eVisibilityType) PURE;
    STDMETHOD(Commit)(THIS) PURE;
    STDMETHOD(Delete)(THIS_ StoreTypeConstants eStoreType) PURE;
    STDMETHOD(Refresh)(THIS) PURE;
};

DEFINE_GUID(DIID_DIADAdminObject,0x35FC237FL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADAdminObject */
#undef INTERFACE
#define INTERFACE DIADAdminObject

DECLARE_INTERFACE_(DIADAdminObject, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADAdminObject */
};

DEFINE_GUID(CLSID_AdminObject,0x35FC2380L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class AdminObject;
#endif

DEFINE_GUID(IID_IADUserOld1,0x35FC236CL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADUserOld1 */
#undef INTERFACE
#define INTERFACE IADUserOld1

DECLARE_INTERFACE_(IADUserOld1, IADAdminObject)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IADAdminObject methods */
    STDMETHOD(get_Description)(THIS_ BSTR FAR* desc) PURE;
    STDMETHOD(put_Description)(THIS_ BSTR Description) PURE;
    STDMETHOD(get_DistinguishedName)(THIS_ BSTR FAR* name) PURE;
    STDMETHOD(get_Domain)(THIS_ DIADDomain FAR* FAR* retval) PURE;
    STDMETHOD(get_LastModifiedBy)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_MemberOf)(THIS_ DIADDLMembers FAR* FAR* retval) PURE;
    STDMETHOD(get_Name)(THIS_ BSTR FAR* name) PURE;
    STDMETHOD(put_Name)(THIS_ BSTR Name) PURE;
    STDMETHOD(get_ObjectID)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* type) PURE;
    STDMETHOD(get_PostOffice)(THIS_ DIADPostOffice FAR* FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(get_Visibility)(THIS_ VisibilityTypeConstants FAR* visibility) PURE;
    STDMETHOD(put_Visibility)(THIS_ VisibilityTypeConstants eVisibilityType) PURE;
    STDMETHOD(Commit)(THIS) PURE;
    STDMETHOD(Delete)(THIS_ StoreTypeConstants eStoreType) PURE;
    STDMETHOD(Refresh)(THIS) PURE;
#endif

    /* IADUserOld1 methods */
};

DEFINE_GUID(IID_IADUser,0x8660D094L,0x25F9,0x11D1,0x8B,0x22,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of interface: IADUser */
#undef INTERFACE
#define INTERFACE IADUser

DECLARE_INTERFACE_(IADUser, IADAdminObject)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IADAdminObject methods */
    STDMETHOD(get_Description)(THIS_ BSTR FAR* desc) PURE;
    STDMETHOD(put_Description)(THIS_ BSTR Description) PURE;
    STDMETHOD(get_DistinguishedName)(THIS_ BSTR FAR* name) PURE;
    STDMETHOD(get_Domain)(THIS_ DIADDomain FAR* FAR* retval) PURE;
    STDMETHOD(get_LastModifiedBy)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_MemberOf)(THIS_ DIADDLMembers FAR* FAR* retval) PURE;
    STDMETHOD(get_Name)(THIS_ BSTR FAR* name) PURE;
    STDMETHOD(put_Name)(THIS_ BSTR Name) PURE;
    STDMETHOD(get_ObjectID)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* type) PURE;
    STDMETHOD(get_PostOffice)(THIS_ DIADPostOffice FAR* FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(get_Visibility)(THIS_ VisibilityTypeConstants FAR* visibility) PURE;
    STDMETHOD(put_Visibility)(THIS_ VisibilityTypeConstants eVisibilityType) PURE;
    STDMETHOD(Commit)(THIS) PURE;
    STDMETHOD(Delete)(THIS_ StoreTypeConstants eStoreType) PURE;
    STDMETHOD(Refresh)(THIS) PURE;
#endif

    /* IADUser methods */
    STDMETHOD(get_AccountID)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(put_AccountID)(THIS_ BSTR AccountID) PURE;
    STDMETHOD(get_AdminDefined)(THIS_ DIADFields FAR* FAR* retval) PURE;
    STDMETHOD(get_Department)(THIS_ BSTR FAR* department) PURE;
    STDMETHOD(put_Department)(THIS_ BSTR Department) PURE;
    STDMETHOD(get_ExternalEntity)(THIS_ VARIANT_BOOL FAR* retval) PURE;
    STDMETHOD(get_External)(THIS_ VARIANT_BOOL FAR* retval) PURE;
    STDMETHOD(get_FaxNumber)(THIS_ BSTR FAR* faxNumber) PURE;
    STDMETHOD(put_FaxNumber)(THIS_ BSTR FaxNumber) PURE;
    STDMETHOD(get_GatewayAccess)(THIS_ BSTR FAR* gatewayAccess) PURE;
    STDMETHOD(put_GatewayAccess)(THIS_ BSTR GatewayAccess) PURE;
    STDMETHOD(get_GivenName)(THIS_ BSTR FAR* givenName) PURE;
    STDMETHOD(put_GivenName)(THIS_ BSTR GivenName) PURE;
    STDMETHOD(get_MailboxExpDate)(THIS_ VARIANT FAR* expDate) PURE;
    STDMETHOD(put_MailboxExpDate)(THIS_ VARIANT ExpirationDate) PURE;
    STDMETHOD(get_MailboxID)(THIS_ BSTR FAR* id) PURE;
    STDMETHOD(get_NetID)(THIS_ BSTR FAR* netID) PURE;
    STDMETHOD(put_NetID)(THIS_ BSTR NetID) PURE;
    STDMETHOD(get_Nicknames)(THIS_ DIADNicknames FAR* FAR* retval) PURE;
    STDMETHOD(get_PhoneNumber)(THIS_ BSTR FAR* phoneNumber) PURE;
    STDMETHOD(put_PhoneNumber)(THIS_ BSTR PhoneNumber) PURE;
    STDMETHOD(get_Resources)(THIS_ DIADResources FAR* FAR* retval) PURE;
    STDMETHOD(get_Surname)(THIS_ BSTR FAR* surname) PURE;
    STDMETHOD(put_Surname)(THIS_ BSTR Surname) PURE;
    STDMETHOD(get_Title)(THIS_ BSTR FAR* title) PURE;
    STDMETHOD(put_Title)(THIS_ BSTR Title) PURE;
    STDMETHOD(ClearPassword)(THIS_ VARIANT eStoreType, VARIANT CurrentPassword) PURE;
    STDMETHOD(Move)(THIS_ DIADPostOffice FAR* PostOffice) PURE;
    STDMETHOD(MoveWithinTree)(THIS_ BSTR DistinguishedName) PURE;
    STDMETHOD(SetPassword)(THIS_ BSTR NewPassword, VARIANT eStoreType, VARIANT CurrentPassword) PURE;
    STDMETHOD(get_DMSAccessRights)(THIS_ DIADDMSAccessRightsCollection FAR* FAR* retval) PURE;
};

DEFINE_GUID(DIID_DIADUser,0x35FC236DL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADUser */
#undef INTERFACE
#define INTERFACE DIADUser

DECLARE_INTERFACE_(DIADUser, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADUser */
};

DEFINE_GUID(CLSID_User,0x35FC236EL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class User;
#endif

DEFINE_GUID(IID_IADUsers,0x35FC236FL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADUsers */
#undef INTERFACE
#define INTERFACE IADUsers

DECLARE_INTERFACE_(IADUsers, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADUsers methods */
    STDMETHOD(get__NewEnum)(THIS_ IUnknown * FAR* ppv) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(Add)(THIS_ BSTR GWUserID, BSTR Surname, BSTR DistinguishedName, VARIANT Password, VARIANT PostOffice, VARIANT Domain, VARIANT MailboxID, DIADUser FAR* FAR* retval) PURE;
    STDMETHOD(AddExistingUser)(THIS_ BSTR GWUserID, BSTR DistinguishedName, VARIANT Password, VARIANT PostOffice, VARIANT Domain, VARIANT MailboxID, DIADUser FAR* FAR* retval) PURE;
    STDMETHOD(AddExternalEntity)(THIS_ BSTR GWUserID, BSTR Surname, BSTR DistinguishedName, VARIANT NetID, VARIANT Password, VARIANT PostOffice, VARIANT Domain, VARIANT MailboxID, DIADUser FAR* FAR* retval) PURE;
    STDMETHOD(AddExternalUser)(THIS_ BSTR GWUserID, VARIANT PostOffice, VARIANT Domain, DIADUser FAR* FAR* retval) PURE;
    STDMETHOD(CreateIterator)(THIS_ DIADUsersIterator FAR* FAR* retval) PURE;
    STDMETHOD(Find)(THIS_ BSTR GivenName, BSTR SurName, DIADUsers FAR* FAR* retval) PURE;
    STDMETHOD(Item)(THIS_ BSTR GWUserID, VARIANT PostOffice, VARIANT Domain, DIADUser FAR* FAR* retval) PURE;
    STDMETHOD(ItemByDN)(THIS_ BSTR DistinguishedName, VARIANT Tree, DIADUser FAR* FAR* retval) PURE;
    STDMETHOD(ItemByObjectID)(THIS_ BSTR ObjectID, DIADUser FAR* FAR* retval) PURE;
};

DEFINE_GUID(DIID_DIADUsers,0x35FC2370L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADUsers */
#undef INTERFACE
#define INTERFACE DIADUsers

DECLARE_INTERFACE_(DIADUsers, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADUsers */
};

DEFINE_GUID(CLSID_Users,0x35FC2371L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class Users;
#endif

DEFINE_GUID(IID_IADUsersIterator,0x35FC2372L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADUsersIterator */
#undef INTERFACE
#define INTERFACE IADUsersIterator

DECLARE_INTERFACE_(IADUsersIterator, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADUsersIterator methods */
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(Clone)(THIS_ DIADUsersIterator FAR* FAR* ppEnum) PURE;
    STDMETHOD(Next)(THIS_ DIADUser FAR* FAR* ppv) PURE;
    STDMETHOD(Previous)(THIS_ DIADUser FAR* FAR* ppv) PURE;
    STDMETHOD(Reset)(THIS) PURE;
    STDMETHOD(Skip)(THIS_ long lNumberToSkip) PURE;
};

DEFINE_GUID(DIID_DIADUsersIterator,0x35FC2373L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADUsersIterator */
#undef INTERFACE
#define INTERFACE DIADUsersIterator

DECLARE_INTERFACE_(DIADUsersIterator, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADUsersIterator */
};

DEFINE_GUID(CLSID_UsersIterator,0x35FC2374L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class UsersIterator;
#endif

DEFINE_GUID(IID_IADResource,0x35FC2375L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADResource */
#undef INTERFACE
#define INTERFACE IADResource

DECLARE_INTERFACE_(IADResource, IADAdminObject)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IADAdminObject methods */
    STDMETHOD(get_Description)(THIS_ BSTR FAR* desc) PURE;
    STDMETHOD(put_Description)(THIS_ BSTR Description) PURE;
    STDMETHOD(get_DistinguishedName)(THIS_ BSTR FAR* name) PURE;
    STDMETHOD(get_Domain)(THIS_ DIADDomain FAR* FAR* retval) PURE;
    STDMETHOD(get_LastModifiedBy)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_MemberOf)(THIS_ DIADDLMembers FAR* FAR* retval) PURE;
    STDMETHOD(get_Name)(THIS_ BSTR FAR* name) PURE;
	/* This function has not been implemented, and will return an error! */
    STDMETHOD(put_Name)(THIS_ BSTR Name) PURE;
    STDMETHOD(get_ObjectID)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* type) PURE;
    STDMETHOD(get_PostOffice)(THIS_ DIADPostOffice FAR* FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(get_Visibility)(THIS_ VisibilityTypeConstants FAR* visibility) PURE;
    STDMETHOD(put_Visibility)(THIS_ VisibilityTypeConstants eVisibilityType) PURE;
    STDMETHOD(Commit)(THIS) PURE;
    STDMETHOD(Delete)(THIS_ StoreTypeConstants eStoreType) PURE;
    STDMETHOD(Refresh)(THIS) PURE;
#endif

    /* IADResource methods */
    STDMETHOD(get_MailboxID)(THIS_ BSTR FAR* id) PURE;
    STDMETHOD(get_Nicknames)(THIS_ DIADNicknames FAR* FAR* retval) PURE;
    STDMETHOD(get_Owner)(THIS_ DIADUser FAR* FAR* retval) PURE;
    STDMETHOD(put_Owner)(THIS_ DIADUser FAR* Owner) PURE;
    STDMETHOD(get_ResourceType)(THIS_ ResourceTypeConstants FAR* retval) PURE;
    STDMETHOD(put_ResourceType)(THIS_ ResourceTypeConstants eResourceType) PURE;
    STDMETHOD(MoveWithinTree)(THIS_ BSTR DistinguishedName) PURE;
};

DEFINE_GUID(DIID_DIADResource,0x35FC2376L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADResource */
#undef INTERFACE
#define INTERFACE DIADResource

DECLARE_INTERFACE_(DIADResource, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADResource */
};

DEFINE_GUID(CLSID_Resource,0x35FC2377L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class Resource;
#endif

DEFINE_GUID(IID_IADResources,0x35FC2378L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADResources */
#undef INTERFACE
#define INTERFACE IADResources

DECLARE_INTERFACE_(IADResources, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADResources methods */
    STDMETHOD(get__NewEnum)(THIS_ IUnknown * FAR* ppv) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(Add)(THIS_ BSTR GWResourceID, BSTR DistinguishedName, DIADUser FAR* Owner, VARIANT MailboxID, VARIANT PostOffice, VARIANT Domain, DIADResource FAR* FAR* pResource) PURE;
    STDMETHOD(CreateIterator)(THIS_ DIADResourcesIterator FAR* FAR* ppv) PURE;
    STDMETHOD(Item)(THIS_ BSTR GWResourceID, VARIANT PostOffice, VARIANT Domain, DIADResource FAR* FAR* retval) PURE;
    STDMETHOD(ItemByDN)(THIS_ BSTR DistinguishedName, VARIANT Tree, DIADResource FAR* FAR* retval) PURE;
    STDMETHOD(ItemByObjectID)(THIS_ BSTR ObjectID, DIADResource FAR* FAR* retval) PURE;
};

DEFINE_GUID(DIID_DIADResources,0x35FC2379L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADResources */
#undef INTERFACE
#define INTERFACE DIADResources

DECLARE_INTERFACE_(DIADResources, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADResources */
};

DEFINE_GUID(CLSID_Resources,0x35FC237AL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class Resources;
#endif

DEFINE_GUID(IID_IADResourcesIterator,0x35FC237BL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADResourcesIterator */
#undef INTERFACE
#define INTERFACE IADResourcesIterator

DECLARE_INTERFACE_(IADResourcesIterator, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADResourcesIterator methods */
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(Clone)(THIS_ DIADResourcesIterator FAR* FAR* ppEnum) PURE;
    STDMETHOD(Next)(THIS_ DIADResource FAR* FAR* ppv) PURE;
    STDMETHOD(Previous)(THIS_ DIADResource FAR* FAR* ppv) PURE;
    STDMETHOD(Reset)(THIS) PURE;
    STDMETHOD(Skip)(THIS_ long lNumberToSkip) PURE;
};

DEFINE_GUID(DIID_DIADResourcesIterator,0x35FC237CL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADResourcesIterator */
#undef INTERFACE
#define INTERFACE DIADResourcesIterator

DECLARE_INTERFACE_(DIADResourcesIterator, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADResourcesIterator */
};

DEFINE_GUID(CLSID_ResourcesIterator,0x35FC237DL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class ResourcesIterator;
#endif

DEFINE_GUID(IID_IADDistributionListOld1,0x35FC2384L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADDistributionListOld1 */
#undef INTERFACE
#define INTERFACE IADDistributionListOld1

DECLARE_INTERFACE_(IADDistributionListOld1, IADAdminObject)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IADAdminObject methods */
    STDMETHOD(get_Description)(THIS_ BSTR FAR* desc) PURE;
    STDMETHOD(put_Description)(THIS_ BSTR Description) PURE;
    STDMETHOD(get_DistinguishedName)(THIS_ BSTR FAR* name) PURE;
    STDMETHOD(get_Domain)(THIS_ DIADDomain FAR* FAR* retval) PURE;
    STDMETHOD(get_LastModifiedBy)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_MemberOf)(THIS_ DIADDLMembers FAR* FAR* retval) PURE;
    STDMETHOD(get_Name)(THIS_ BSTR FAR* name) PURE;
    STDMETHOD(put_Name)(THIS_ BSTR Name) PURE;
    STDMETHOD(get_ObjectID)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* type) PURE;
    STDMETHOD(get_PostOffice)(THIS_ DIADPostOffice FAR* FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(get_Visibility)(THIS_ VisibilityTypeConstants FAR* visibility) PURE;
    STDMETHOD(put_Visibility)(THIS_ VisibilityTypeConstants eVisibilityType) PURE;
    STDMETHOD(Commit)(THIS) PURE;
    STDMETHOD(Delete)(THIS_ StoreTypeConstants eStoreType) PURE;
    STDMETHOD(Refresh)(THIS) PURE;
#endif

    /* IADDistributionListOld1 methods */
};

DEFINE_GUID(IID_IADDistributionList,0x8660D092L,0x25F9,0x11D1,0x8B,0x22,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of interface: IADDistributionList */
#undef INTERFACE
#define INTERFACE IADDistributionList

DECLARE_INTERFACE_(IADDistributionList, IADAdminObject)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IADAdminObject methods */
    STDMETHOD(get_Description)(THIS_ BSTR FAR* desc) PURE;
    STDMETHOD(put_Description)(THIS_ BSTR Description) PURE;
    STDMETHOD(get_DistinguishedName)(THIS_ BSTR FAR* name) PURE;
    STDMETHOD(get_Domain)(THIS_ DIADDomain FAR* FAR* retval) PURE;
    STDMETHOD(get_LastModifiedBy)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_MemberOf)(THIS_ DIADDLMembers FAR* FAR* retval) PURE;
    STDMETHOD(get_Name)(THIS_ BSTR FAR* name) PURE;
    STDMETHOD(put_Name)(THIS_ BSTR Name) PURE;
    STDMETHOD(get_ObjectID)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* type) PURE;
    STDMETHOD(get_PostOffice)(THIS_ DIADPostOffice FAR* FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(get_Visibility)(THIS_ VisibilityTypeConstants FAR* visibility) PURE;
    STDMETHOD(put_Visibility)(THIS_ VisibilityTypeConstants eVisibilityType) PURE;
    STDMETHOD(Commit)(THIS) PURE;
    STDMETHOD(Delete)(THIS_ StoreTypeConstants eStoreType) PURE;
    STDMETHOD(Refresh)(THIS) PURE;
#endif

    /* IADDistributionList methods */
    STDMETHOD(get_Membership)(THIS_ DIADDLMembers FAR* FAR* retval) PURE;
    STDMETHOD(get_Nicknames)(THIS_ DIADNicknames FAR* FAR* retval) PURE;
    STDMETHOD(MoveWithinTree)(THIS_ BSTR DistinguishedName) PURE;
    STDMETHOD(get_DMSAccessRights)(THIS_ DIADDMSAccessRightsCollection FAR* FAR* retval) PURE;
};

DEFINE_GUID(DIID_DIADDistributionList,0x35FC2385L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADDistributionList */
#undef INTERFACE
#define INTERFACE DIADDistributionList

DECLARE_INTERFACE_(DIADDistributionList, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADDistributionList */
};

DEFINE_GUID(CLSID_DistributionList,0x35FC2386L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class DistributionList;
#endif

DEFINE_GUID(IID_IADDistributionLists,0x35FC2387L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADDistributionLists */
#undef INTERFACE
#define INTERFACE IADDistributionLists

DECLARE_INTERFACE_(IADDistributionLists, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADDistributionLists methods */
    STDMETHOD(get__NewEnum)(THIS_ IUnknown * FAR* ppv) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(Add)(THIS_ BSTR GWDistributionListID, BSTR DistinguishedName, VARIANT PostOffice, VARIANT Domain, DIADDistributionList FAR* FAR* retval) PURE;
    STDMETHOD(CreateIterator)(THIS_ DIADDistributionListsIterator FAR* FAR* ppv) PURE;
    STDMETHOD(Item)(THIS_ BSTR GWDistributionListID, VARIANT PostOffice, VARIANT Domain, DIADDistributionList FAR* FAR* retval) PURE;
    STDMETHOD(ItemByDN)(THIS_ BSTR DistinguishedName, VARIANT Tree, DIADDistributionList FAR* FAR* retval) PURE;
    STDMETHOD(ItemByObjectID)(THIS_ BSTR ObjectID, DIADDistributionList FAR* FAR* retval) PURE;
};

DEFINE_GUID(DIID_DIADDistributionLists,0x35FC2388L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADDistributionLists */
#undef INTERFACE
#define INTERFACE DIADDistributionLists

DECLARE_INTERFACE_(DIADDistributionLists, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADDistributionLists */
};

DEFINE_GUID(CLSID_DistributionLists,0x35FC2389L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class DistributionLists;
#endif

DEFINE_GUID(IID_IADDistributionListsIterator,0x35FC238AL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADDistributionListsIterator */
#undef INTERFACE
#define INTERFACE IADDistributionListsIterator

DECLARE_INTERFACE_(IADDistributionListsIterator, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADDistributionListsIterator methods */
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(Clone)(THIS_ DIADDistributionListsIterator FAR* FAR* ppEnum) PURE;
    STDMETHOD(Next)(THIS_ DIADDistributionList FAR* FAR* ppv) PURE;
    STDMETHOD(Previous)(THIS_ DIADDistributionList FAR* FAR* ppv) PURE;
    STDMETHOD(Reset)(THIS) PURE;
    STDMETHOD(Skip)(THIS_ long lNumberToSkip) PURE;
};

DEFINE_GUID(DIID_DIADDistributionListsIterator,0x35FC238BL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADDistributionListsIterator */
#undef INTERFACE
#define INTERFACE DIADDistributionListsIterator

DECLARE_INTERFACE_(DIADDistributionListsIterator, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADDistributionListsIterator */
};

DEFINE_GUID(CLSID_DistributionListsIterator,0x35FC238CL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class DistributionListsIterator;
#endif

DEFINE_GUID(IID_IADDLMember,0x35FC238DL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADDLMember */
#undef INTERFACE
#define INTERFACE IADDLMember

DECLARE_INTERFACE_(IADDLMember, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADDLMember methods */
    STDMETHOD(get_DistributionList)(THIS_ DIADDistributionList FAR* FAR* retval) PURE;
    STDMETHOD(get_LastModifiedBy)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_Member)(THIS_ DIADAdminObject FAR* FAR* retval) PURE;
    STDMETHOD(get_MemberType)(THIS_ ObjTypeConstants FAR* type) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(get_Participation)(THIS_ ParticipationTypeConstants FAR* participation) PURE;
    STDMETHOD(put_Participation)(THIS_ ParticipationTypeConstants eParticipationType) PURE;
    STDMETHOD(Commit)(THIS) PURE;
    STDMETHOD(Delete)(THIS) PURE;
};

DEFINE_GUID(DIID_DIADDLMember,0x35FC238EL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADDLMember */
#undef INTERFACE
#define INTERFACE DIADDLMember

DECLARE_INTERFACE_(DIADDLMember, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADDLMember */
};

DEFINE_GUID(CLSID_DLMember,0x35FC238FL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class DLMember;
#endif

DEFINE_GUID(IID_IADDLMembers,0x35FC2390L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADDLMembers */
#undef INTERFACE
#define INTERFACE IADDLMembers

DECLARE_INTERFACE_(IADDLMembers, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADDLMembers methods */
    STDMETHOD(get__NewEnum)(THIS_ IUnknown * FAR* ppv) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(Add)(THIS_ DIADAdminObject FAR* Member, VARIANT eParticipationType, VARIANT DistributionList, DIADDLMember FAR* FAR* retval) PURE;
    STDMETHOD(CreateIterator)(THIS_ DIADDLMembersIterator FAR* FAR* ppv) PURE;
    STDMETHOD(Item)(THIS_ DIADAdminObject FAR* Member, VARIANT DistributionList, DIADDLMember FAR* FAR* ppv) PURE;
};

DEFINE_GUID(DIID_DIADDLMembers,0x35FC2391L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADDLMembers */
#undef INTERFACE
#define INTERFACE DIADDLMembers

DECLARE_INTERFACE_(DIADDLMembers, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADDLMembers */
};

DEFINE_GUID(CLSID_DLMembers,0x35FC2392L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class DLMembers;
#endif

DEFINE_GUID(IID_IADDLMembersIterator,0x35FC2393L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADDLMembersIterator */
#undef INTERFACE
#define INTERFACE IADDLMembersIterator

DECLARE_INTERFACE_(IADDLMembersIterator, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADDLMembersIterator methods */
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(Clone)(THIS_ DIADDLMembersIterator FAR* FAR* ppEnum) PURE;
    STDMETHOD(Next)(THIS_ DIADDLMember FAR* FAR* ppv) PURE;
    STDMETHOD(Previous)(THIS_ DIADDLMember FAR* FAR* ppv) PURE;
    STDMETHOD(Reset)(THIS) PURE;
    STDMETHOD(Skip)(THIS_ long lNumberToSkip) PURE;
};

DEFINE_GUID(DIID_DIADDLMembersIterator,0x35FC2394L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADDLMembersIterator */
#undef INTERFACE
#define INTERFACE DIADDLMembersIterator

DECLARE_INTERFACE_(DIADDLMembersIterator, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADDLMembersIterator */
};

DEFINE_GUID(CLSID_DLMembersIterator,0x35FC2395L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class DLMembersIterator;
#endif

DEFINE_GUID(IID_IADField,0x35FC2396L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADField */
#undef INTERFACE
#define INTERFACE IADField

DECLARE_INTERFACE_(IADField, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADField methods */
    STDMETHOD(get_Definition)(THIS_ DIADFieldDefinition FAR* FAR* retval) PURE;
    STDMETHOD(get_Name)(THIS_ BSTR FAR* name) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(get_Value)(THIS_ BSTR FAR* value) PURE;
    STDMETHOD(put_Value)(THIS_ BSTR Value) PURE;
    STDMETHOD(get_ValueType)(THIS_ FieldTypeConstants FAR* type) PURE;
    STDMETHOD(Commit)(THIS) PURE;
    STDMETHOD(Delete)(THIS) PURE;
    STDMETHOD(Refresh)(THIS) PURE;
};

DEFINE_GUID(DIID_DIADField,0x35FC2397L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADField */
#undef INTERFACE
#define INTERFACE DIADField

DECLARE_INTERFACE_(DIADField, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADField */
};

DEFINE_GUID(CLSID_Field,0x35FC2398L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class Field;
#endif

DEFINE_GUID(IID_IADFields,0x35FC2399L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADFields */
#undef INTERFACE
#define INTERFACE IADFields

DECLARE_INTERFACE_(IADFields, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADFields methods */
    STDMETHOD(get__NewEnum)(THIS_ IUnknown * FAR* ppv) PURE;
    STDMETHOD(get_Count)(THIS_ long FAR* count) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* system) PURE;
    STDMETHOD(Add)(THIS_ BSTR Name, VARIANT Value, VARIANT eFieldType, DIADField FAR* FAR* retval) PURE;
    STDMETHOD(Item)(THIS_ VARIANT FieldName, DIADField FAR* FAR* retval) PURE;
};

DEFINE_GUID(DIID_DIADFields,0x35FC239AL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADFields */
#undef INTERFACE
#define INTERFACE DIADFields

DECLARE_INTERFACE_(DIADFields, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADFields */
};

DEFINE_GUID(CLSID_Fields,0x35FC239BL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class Fields;
#endif

DEFINE_GUID(IID_IADFieldDefinition,0x35FC239CL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADFieldDefinition */
#undef INTERFACE
#define INTERFACE IADFieldDefinition

DECLARE_INTERFACE_(IADFieldDefinition, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADFieldDefinition methods */
    STDMETHOD(get_Name)(THIS_ BSTR FAR* name) PURE;
    STDMETHOD(put_Name)(THIS_ BSTR Name) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* system) PURE;
    STDMETHOD(get_FieldType)(THIS_ FieldTypeConstants FAR* type) PURE;
    STDMETHOD(put_FieldType)(THIS_ FieldTypeConstants eFieldType) PURE;
    STDMETHOD(Commit)(THIS) PURE;
    STDMETHOD(Delete)(THIS) PURE;
    STDMETHOD(Refresh)(THIS) PURE;
};

DEFINE_GUID(DIID_DIADFieldDefinition,0x35FC239DL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADFieldDefinition */
#undef INTERFACE
#define INTERFACE DIADFieldDefinition

DECLARE_INTERFACE_(DIADFieldDefinition, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADFieldDefinition */
};

DEFINE_GUID(CLSID_FieldDefinition,0x35FC239EL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class FieldDefinition;
#endif

DEFINE_GUID(IID_IADFieldDefinitions,0x35FC239FL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADFieldDefinitions */
#undef INTERFACE
#define INTERFACE IADFieldDefinitions

DECLARE_INTERFACE_(IADFieldDefinitions, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADFieldDefinitions methods */
    STDMETHOD(get__NewEnum)(THIS_ IUnknown * FAR* retval) PURE;
    STDMETHOD(get_Count)(THIS_ long FAR* count) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* System) PURE;
    STDMETHOD(Add)(THIS_ BSTR Name, VARIANT eFieldType, DIADFieldDefinition FAR* FAR* retval) PURE;
    STDMETHOD(Item)(THIS_ VARIANT Index, DIADFieldDefinition FAR* FAR* retval) PURE;
};

DEFINE_GUID(DIID_DIADFieldDefinitions,0x35FC23A0L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADFieldDefinitions */
#undef INTERFACE
#define INTERFACE DIADFieldDefinitions

DECLARE_INTERFACE_(DIADFieldDefinitions, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADFieldDefinitions */
};

DEFINE_GUID(CLSID_FieldDefinitions,0x35FC23A1L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class FieldDefinitions;
#endif

DEFINE_GUID(IID_IADNickname,0x35FC23A2L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADNickname */
#undef INTERFACE
#define INTERFACE IADNickname

DECLARE_INTERFACE_(IADNickname, IADAdminObject)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IADAdminObject methods */
    STDMETHOD(get_Description)(THIS_ BSTR FAR* desc) PURE;
    STDMETHOD(put_Description)(THIS_ BSTR Description) PURE;
    STDMETHOD(get_DistinguishedName)(THIS_ BSTR FAR* name) PURE;
    STDMETHOD(get_Domain)(THIS_ DIADDomain FAR* FAR* retval) PURE;
    STDMETHOD(get_LastModifiedBy)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_MemberOf)(THIS_ DIADDLMembers FAR* FAR* retval) PURE;
    STDMETHOD(get_Name)(THIS_ BSTR FAR* name) PURE;
    STDMETHOD(put_Name)(THIS_ BSTR Name) PURE;
    STDMETHOD(get_ObjectID)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* type) PURE;
    STDMETHOD(get_PostOffice)(THIS_ DIADPostOffice FAR* FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(get_Visibility)(THIS_ VisibilityTypeConstants FAR* visibility) PURE;
    STDMETHOD(put_Visibility)(THIS_ VisibilityTypeConstants eVisibilityType) PURE;
    STDMETHOD(Commit)(THIS) PURE;
    STDMETHOD(Delete)(THIS_ StoreTypeConstants eStoreType) PURE;
    STDMETHOD(Refresh)(THIS) PURE;
#endif

    /* IADNickname methods */
    STDMETHOD(get_Owner)(THIS_ DIADAdminObject FAR* FAR* retval) PURE;
    STDMETHOD(put_Owner)(THIS_ DIADAdminObject FAR* Owner) PURE;
    STDMETHOD(get_OwnerType)(THIS_ ObjTypeConstants FAR* retval) PURE;
};

DEFINE_GUID(DIID_DIADNickname,0x35FC23A3L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADNickname */
#undef INTERFACE
#define INTERFACE DIADNickname

DECLARE_INTERFACE_(DIADNickname, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADNickname */
};

DEFINE_GUID(CLSID_Nickname,0x35FC23A4L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class Nickname;
#endif

DEFINE_GUID(IID_IADNicknames,0x35FC23A5L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADNicknames */
#undef INTERFACE
#define INTERFACE IADNicknames

DECLARE_INTERFACE_(IADNicknames, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADNicknames methods */
    STDMETHOD(get__NewEnum)(THIS_ IUnknown * FAR* ppv) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(Add)(THIS_ BSTR GWNicknameID, DIADAdminObject FAR* Owner, VARIANT PostOffice, VARIANT Domain, DIADNickname FAR* FAR* retval) PURE;
    STDMETHOD(CreateIterator)(THIS_ DIADNicknamesIterator FAR* FAR* ppv) PURE;
    STDMETHOD(Item)(THIS_ BSTR GWNicknameID, VARIANT PostOffice, VARIANT Domain, DIADNickname FAR* FAR* retval) PURE;
    STDMETHOD(ItemByObjectID)(THIS_ BSTR ObjectID, DIADNickname FAR* FAR* retval) PURE;
};

DEFINE_GUID(DIID_DIADNicknames,0x35FC23A6L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADNicknames */
#undef INTERFACE
#define INTERFACE DIADNicknames

DECLARE_INTERFACE_(DIADNicknames, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADNicknames */
};

DEFINE_GUID(CLSID_Nicknames,0x35FC23A7L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class Nicknames;
#endif

DEFINE_GUID(IID_IADNicknamesIterator,0x35FC23A8L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of interface: IADNicknamesIterator */
#undef INTERFACE
#define INTERFACE IADNicknamesIterator

DECLARE_INTERFACE_(IADNicknamesIterator, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADNicknamesIterator methods */
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(Clone)(THIS_ DIADNicknamesIterator FAR* FAR* retval) PURE;
    STDMETHOD(Next)(THIS_ DIADNickname FAR* FAR* ppv) PURE;
    STDMETHOD(Previous)(THIS_ DIADNickname FAR* FAR* ppv) PURE;
    STDMETHOD(Reset)(THIS) PURE;
    STDMETHOD(Skip)(THIS_ long lNumberToSkip) PURE;
};

DEFINE_GUID(DIID_DIADNicknamesIterator,0x35FC23A9L,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

/* Definition of dispatch interface: DIADNicknamesIterator */
#undef INTERFACE
#define INTERFACE DIADNicknamesIterator

DECLARE_INTERFACE_(DIADNicknamesIterator, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADNicknamesIterator */
};

DEFINE_GUID(CLSID_NicknamesIterator,0x35FC23AAL,0x811A,0x11D0,0x8A,0x96,0x00,0x80,0x5F,0xC1,0x60,0x77);

#ifdef __cplusplus
class NicknamesIterator;
#endif

DEFINE_GUID(IID_IADDMSAccessRights,0x34C7F6CFL,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of interface: IADDMSAccessRights */
#undef INTERFACE
#define INTERFACE IADDMSAccessRights

DECLARE_INTERFACE_(IADDMSAccessRights, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADDMSAccessRights methods */
    STDMETHOD(get_CanAdd)(THIS_ VARIANT_BOOL FAR* retval) PURE;
    STDMETHOD(put_CanAdd)(THIS_ VARIANT_BOOL AddRight) PURE;
    STDMETHOD(get_BitMask)(THIS_ long FAR* retval) PURE;
    STDMETHOD(put_BitMask)(THIS_ long BitMask) PURE;
    STDMETHOD(get_CanDelete)(THIS_ VARIANT_BOOL FAR* retval) PURE;
    STDMETHOD(put_CanDelete)(THIS_ VARIANT_BOOL DeleteRight) PURE;
    STDMETHOD(get_CanDesignateOfficialVersion)(THIS_ VARIANT_BOOL FAR* retval) PURE;
    STDMETHOD(put_CanDesignateOfficialVersion)(THIS_ VARIANT_BOOL DesignateOfficialRight) PURE;
    STDMETHOD(get_DMSLibrary)(THIS_ DIADDMSLibrary FAR* FAR* retval) PURE;
    STDMETHOD(get_CanEdit)(THIS_ VARIANT_BOOL FAR* retval) PURE;
    STDMETHOD(put_CanEdit)(THIS_ VARIANT_BOOL EditRight) PURE;
    STDMETHOD(get_IsLibrarian)(THIS_ VARIANT_BOOL FAR* retval) PURE;
    STDMETHOD(put_IsLibrarian)(THIS_ VARIANT_BOOL LibrarianRight) PURE;
    STDMETHOD(get_Member)(THIS_ DIADAdminObject FAR* FAR* retval) PURE;
    STDMETHOD(get_MemberType)(THIS_ MemberTypeConstants FAR* retval) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_CanResetInUseFlag)(THIS_ VARIANT_BOOL FAR* retval) PURE;
    STDMETHOD(put_CanResetInUseFlag)(THIS_ VARIANT_BOOL ResetInUseRight) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(get_CanView)(THIS_ VARIANT_BOOL FAR* retval) PURE;
    STDMETHOD(put_CanView)(THIS_ VARIANT_BOOL ViewRight) PURE;
    STDMETHOD(Commit)(THIS) PURE;
    STDMETHOD(Delete)(THIS) PURE;
    STDMETHOD(Refresh)(THIS) PURE;
};

DEFINE_GUID(DIID_DIADDMSAccessRights,0x34C7F6D0L,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of dispatch interface: DIADDMSAccessRights */
#undef INTERFACE
#define INTERFACE DIADDMSAccessRights

DECLARE_INTERFACE_(DIADDMSAccessRights, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADDMSAccessRights */
};

DEFINE_GUID(CLSID_DMSAccessRights,0x34C7F6D1L,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

#ifdef __cplusplus
class DMSAccessRights;
#endif

DEFINE_GUID(IID_IADDMSAccessRightsCollection,0x34C7F6D2L,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of interface: IADDMSAccessRightsCollection */
#undef INTERFACE
#define INTERFACE IADDMSAccessRightsCollection

DECLARE_INTERFACE_(IADDMSAccessRightsCollection, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADDMSAccessRightsCollection methods */
    STDMETHOD(get__NewEnum)(THIS_ IUnknown * FAR* ppv) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(Add)(THIS_ long BitMask, VARIANT Object, VARIANT Parameter3, VARIANT Parameter4, VARIANT Parameter5, DIADDMSAccessRights FAR* FAR* retval) PURE;
    STDMETHOD(CreateIterator)(THIS_ DIADDMSAccessRightsCollectionIterator FAR* FAR* retval) PURE;
    STDMETHOD(Item)(THIS_ VARIANT Object, VARIANT ObjectType, DIADDMSAccessRights FAR* FAR* retval) PURE;
};

DEFINE_GUID(DIID_DIADDMSAccessRightsCollection,0x34C7F6D3L,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of dispatch interface: DIADDMSAccessRightsCollection */
#undef INTERFACE
#define INTERFACE DIADDMSAccessRightsCollection

DECLARE_INTERFACE_(DIADDMSAccessRightsCollection, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADDMSAccessRightsCollection */
};

DEFINE_GUID(CLSID_DMSAccessRightsCollection,0x34C7F6D4L,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

#ifdef __cplusplus
class DMSAccessRightsCollection;
#endif

DEFINE_GUID(IID_IADDMSAccessRightsCollectionIterator,0x34C7F6D5L,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of interface: IADDMSAccessRightsCollectionIterator */
#undef INTERFACE
#define INTERFACE IADDMSAccessRightsCollectionIterator

DECLARE_INTERFACE_(IADDMSAccessRightsCollectionIterator, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADDMSAccessRightsCollectionIterator methods */
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(Clone)(THIS_ DIADDMSAccessRightsCollectionIterator FAR* FAR* retval) PURE;
    STDMETHOD(Next)(THIS_ DIADDMSAccessRights FAR* FAR* retval) PURE;
    STDMETHOD(Previous)(THIS_ DIADDMSAccessRights FAR* FAR* retval) PURE;
    STDMETHOD(Reset)(THIS) PURE;
    STDMETHOD(Skip)(THIS_ long lNumberToSkip) PURE;
};

DEFINE_GUID(DIID_DIADDMSAccessRightsCollectionIterator,0x34C7F6D6L,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of dispatch interface: DIADDMSAccessRightsCollectionIterator */
#undef INTERFACE
#define INTERFACE DIADDMSAccessRightsCollectionIterator

DECLARE_INTERFACE_(DIADDMSAccessRightsCollectionIterator, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADDMSAccessRightsCollectionIterator */
};

DEFINE_GUID(CLSID_DMSAccessRightsCollectionIterator,0x34C7F6D7L,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

#ifdef __cplusplus
class DMSAccessRightsCollectionIterator;
#endif

DEFINE_GUID(IID_IADDMSFieldDefinition,0x34C7F6D8L,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of interface: IADDMSFieldDefinition */
#undef INTERFACE
#define INTERFACE IADDMSFieldDefinition

DECLARE_INTERFACE_(IADDMSFieldDefinition, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADDMSFieldDefinition methods */
    STDMETHOD(get_DataType)(THIS_ DataTypeConstants FAR* retval) PURE;
    STDMETHOD(put_DataType)(THIS_ DataTypeConstants Type) PURE;
    STDMETHOD(get_Description)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(put_Description)(THIS_ BSTR Description) PURE;
    STDMETHOD(get_DMSLibrary)(THIS_ DIADDMSLibrary FAR* FAR* retval) PURE;
    STDMETHOD(get_HasLookupTable)(THIS_ VARIANT_BOOL FAR* retval) PURE;
    STDMETHOD(get_Hidden)(THIS_ VARIANT_BOOL FAR* retval) PURE;
    STDMETHOD(put_Hidden)(THIS_ VARIANT_BOOL Hidden) PURE;
    STDMETHOD(get_LookupTable)(THIS_ DIADLookupTable FAR* FAR* retval) PURE;
    STDMETHOD(put_LookupTable)(THIS_ DIADLookupTable FAR* Table) PURE;
    STDMETHOD(get_MaximumLength)(THIS_ long FAR* retval) PURE;
    STDMETHOD(put_MaximumLength)(THIS_ long Length) PURE;
    STDMETHOD(get_MaximumValue)(THIS_ long FAR* retval) PURE;
    STDMETHOD(put_MaximumValue)(THIS_ long MaxValue) PURE;
    STDMETHOD(get_MinimumValue)(THIS_ long FAR* retval) PURE;
    STDMETHOD(put_MinimumValue)(THIS_ long MinValue) PURE;
    STDMETHOD(get_Name)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(put_Name)(THIS_ BSTR Name) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_ParentFieldDefinition)(THIS_ DIADDMSFieldDefinition FAR* FAR* retval) PURE;
    STDMETHOD(put_ParentFieldDefinition)(THIS_ DIADDMSFieldDefinition FAR* ParentFieldDef) PURE;
    STDMETHOD(get_ReadOnly)(THIS_ VARIANT_BOOL FAR* retval) PURE;
    STDMETHOD(put_ReadOnly)(THIS_ VARIANT_BOOL ReadOnly) PURE;
    STDMETHOD(get_Required)(THIS_ VARIANT_BOOL FAR* retval) PURE;
    STDMETHOD(put_Required)(THIS_ VARIANT_BOOL Required) PURE;
    STDMETHOD(get_StringCase)(THIS_ StringCaseTypeConstants FAR* retval) PURE;
    STDMETHOD(put_StringCase)(THIS_ StringCaseTypeConstants Case) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(get_Type)(THIS_ FieldDefinitionTypeConstants FAR* retval) PURE;
    STDMETHOD(Commit)(THIS) PURE;
    STDMETHOD(Delete)(THIS) PURE;
    STDMETHOD(Refresh)(THIS) PURE;
};

DEFINE_GUID(DIID_DIADDMSFieldDefinition,0x34C7F6D9L,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of dispatch interface: DIADDMSFieldDefinition */
#undef INTERFACE
#define INTERFACE DIADDMSFieldDefinition

DECLARE_INTERFACE_(DIADDMSFieldDefinition, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADDMSFieldDefinition */
};

DEFINE_GUID(CLSID_DMSFieldDefinition,0x34C7F6DAL,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

#ifdef __cplusplus
class DMSFieldDefinition;
#endif

DEFINE_GUID(IID_IADDMSFieldDefinitions,0x34C7F6DBL,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of interface: IADDMSFieldDefinitions */
#undef INTERFACE
#define INTERFACE IADDMSFieldDefinitions

DECLARE_INTERFACE_(IADDMSFieldDefinitions, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADDMSFieldDefinitions methods */
    STDMETHOD(get__NewEnum)(THIS_ IUnknown * FAR* ppv) PURE;
    STDMETHOD(get_Count)(THIS_ long FAR* retval) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(Add)(THIS_ BSTR FieldName, VARIANT DataType, DIADDMSFieldDefinition FAR* FAR* retval) PURE;
    STDMETHOD(Item)(THIS_ VARIANT Object, DIADDMSFieldDefinition FAR* FAR* retval) PURE;
};

DEFINE_GUID(DIID_DIADDMSFieldDefinitions,0x34C7F6DCL,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of dispatch interface: DIADDMSFieldDefinitions */
#undef INTERFACE
#define INTERFACE DIADDMSFieldDefinitions

DECLARE_INTERFACE_(DIADDMSFieldDefinitions, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADDMSFieldDefinitions */
};

DEFINE_GUID(CLSID_DMSFieldDefinitions,0x34C7F6DDL,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

#ifdef __cplusplus
class DMSFieldDefinitions;
#endif

DEFINE_GUID(IID_IADDMSLibrary,0x33974902L,0x2475,0x11D1,0x8B,0x20,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of interface: IADDMSLibrary */
#undef INTERFACE
#define INTERFACE IADDMSLibrary

DECLARE_INTERFACE_(IADDMSLibrary, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADDMSLibrary methods */
    STDMETHOD(get_DMSAccessRights)(THIS_ DIADDMSAccessRightsCollection FAR* FAR* retval) PURE;
    STDMETHOD(get_CurrentArchiveBytes)(THIS_ long FAR* retval) PURE;
    STDMETHOD(get_CurrentArchiveLocation)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_DefaultRights)(THIS_ DIADDMSAccessRights FAR* FAR* retval) PURE;
    STDMETHOD(get_Description)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(put_Description)(THIS_ BSTR Description) PURE;
    STDMETHOD(get_DisplayName)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(put_DisplayName)(THIS_ BSTR DisplayName) PURE;
    STDMETHOD(get_DistinguishedName)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_DocumentTypeFieldDefinition)(THIS_ DIADDMSFieldDefinition FAR* FAR* retval) PURE;
    STDMETHOD(get_Domain)(THIS_ DIADDomain FAR* FAR* retval) PURE;
    STDMETHOD(get_FieldDefinitions)(THIS_ DIADDMSFieldDefinitions FAR* FAR* retval) PURE;
    STDMETHOD(get_LastModifiedBy)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_LocalID)(THIS_ long FAR* retval) PURE;
    STDMETHOD(get_MaxArchiveBytes)(THIS_ long FAR* retval) PURE;
    STDMETHOD(get_Name)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(put_Name)(THIS_ BSTR LibraryName) PURE;
    STDMETHOD(get_NextDocumentNumber)(THIS_ long FAR* retval) PURE;
    STDMETHOD(put_NextDocumentNumber)(THIS_ long NextDocNumber) PURE;
    STDMETHOD(get_ObjectID)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_PartitionCount)(THIS_ long FAR* retval) PURE;
    STDMETHOD(get_PostOffice)(THIS_ DIADPostOffice FAR* FAR* retval) PURE;
    STDMETHOD(get_StartingVersionNumber)(THIS_ long FAR* retval) PURE;
    STDMETHOD(put_StartingVersionNumber)(THIS_ long StartingVerNumber) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(Commit)(THIS) PURE;
    STDMETHOD(Delete)(THIS_ StoreTypeConstants eStoreType) PURE;
    STDMETHOD(MoveWithinTree)(THIS_ BSTR DistinguishedName) PURE;
    STDMETHOD(Refresh)(THIS) PURE;
};

DEFINE_GUID(DIID_DIADDMSLibrary,0x33974903L,0x2475,0x11D1,0x8B,0x20,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of dispatch interface: DIADDMSLibrary */
#undef INTERFACE
#define INTERFACE DIADDMSLibrary

DECLARE_INTERFACE_(DIADDMSLibrary, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADDMSLibrary */
};

DEFINE_GUID(CLSID_DMSLibrary,0x33974904L,0x2475,0x11D1,0x8B,0x20,0x00,0x80,0x5F,0xC1,0x40,0x33);

#ifdef __cplusplus
class DMSLibrary;
#endif

DEFINE_GUID(IID_IADDMSLibraries,0x33974905L,0x2475,0x11D1,0x8B,0x20,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of interface: IADDMSLibraries */
#undef INTERFACE
#define INTERFACE IADDMSLibraries

DECLARE_INTERFACE_(IADDMSLibraries, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADDMSLibraries methods */
    STDMETHOD(get__NewEnum)(THIS_ IUnknown * FAR* ppv) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(Add)(THIS_ BSTR GWLibraryName, BSTR DistinguishedName, VARIANT PostOffice, VARIANT Domain, DIADDMSLibrary FAR* FAR* retval) PURE;
    STDMETHOD(CreateIterator)(THIS_ DIADDMSLibrariesIterator FAR* FAR* retval) PURE;
    STDMETHOD(Item)(THIS_ VARIANT IndexName, VARIANT PostOffice, VARIANT Domain, DIADDMSLibrary FAR* FAR* retval) PURE;
    STDMETHOD(ItemByDN)(THIS_ BSTR DistinguishedName, VARIANT Tree, DIADDMSLibrary FAR* FAR* retval) PURE;
    STDMETHOD(ItemByObjectID)(THIS_ BSTR ObjectID, DIADDMSLibrary FAR* FAR* retval) PURE;
};

DEFINE_GUID(DIID_DIADDMSLibraries,0x33974906L,0x2475,0x11D1,0x8B,0x20,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of dispatch interface: DIADDMSLibraries */
#undef INTERFACE
#define INTERFACE DIADDMSLibraries

DECLARE_INTERFACE_(DIADDMSLibraries, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADDMSLibraries */
};

DEFINE_GUID(CLSID_DMSLibraries,0x33974907L,0x2475,0x11D1,0x8B,0x20,0x00,0x80,0x5F,0xC1,0x40,0x33);

#ifdef __cplusplus
class DMSLibraries;
#endif

DEFINE_GUID(IID_IADDMSLibrariesIterator,0x33974908L,0x2475,0x11D1,0x8B,0x20,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of interface: IADDMSLibrariesIterator */
#undef INTERFACE
#define INTERFACE IADDMSLibrariesIterator

DECLARE_INTERFACE_(IADDMSLibrariesIterator, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADDMSLibrariesIterator methods */
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(Clone)(THIS_ DIADDMSLibrariesIterator FAR* FAR* retval) PURE;
    STDMETHOD(Next)(THIS_ DIADDMSLibrary FAR* FAR* retval) PURE;
    STDMETHOD(Previous)(THIS_ DIADDMSLibrary FAR* FAR* retval) PURE;
    STDMETHOD(Reset)(THIS) PURE;
    STDMETHOD(Skip)(THIS_ long lNumberToSkip) PURE;
};

DEFINE_GUID(DIID_DIADDMSLibrariesIterator,0x33974909L,0x2475,0x11D1,0x8B,0x20,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of dispatch interface: DIADDMSLibrariesIterator */
#undef INTERFACE
#define INTERFACE DIADDMSLibrariesIterator

DECLARE_INTERFACE_(DIADDMSLibrariesIterator, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADDMSLibrariesIterator */
};

DEFINE_GUID(CLSID_DMSLibrariesIterator,0x3397490AL,0x2475,0x11D1,0x8B,0x20,0x00,0x80,0x5F,0xC1,0x40,0x33);

#ifdef __cplusplus
class DMSLibrariesIterator;
#endif

DEFINE_GUID(IID_IADLookupTable,0x34C7F6E4L,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of interface: IADLookupTable */
#undef INTERFACE
#define INTERFACE IADLookupTable

DECLARE_INTERFACE_(IADLookupTable, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADLookupTable methods */
    STDMETHOD(get_Description)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_DataType)(THIS_ DataTypeConstants FAR* retval) PURE;
    STDMETHOD(get_Domain)(THIS_ DIADDomain FAR* FAR* retval) PURE;
    STDMETHOD(get_HasParentTable)(THIS_ VARIANT_BOOL FAR* retval) PURE;
    STDMETHOD(get_LookupTableEntries)(THIS_ DIADLookupTableEntries FAR* FAR* retval) PURE;
    STDMETHOD(get_Name)(THIS_ BSTR FAR* retval) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_ParentTable)(THIS_ DIADLookupTable FAR* FAR* retval) PURE;
    STDMETHOD(get_PostOffice)(THIS_ DIADPostOffice FAR* FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(get_TableType)(THIS_ TableTypeConstants FAR* retval) PURE;
    STDMETHOD(Delete)(THIS) PURE;
};

DEFINE_GUID(DIID_DIADLookupTable,0x34C7F6E5L,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of dispatch interface: DIADLookupTable */
#undef INTERFACE
#define INTERFACE DIADLookupTable

DECLARE_INTERFACE_(DIADLookupTable, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADLookupTable */
};

DEFINE_GUID(CLSID_LookupTable,0x34C7F6E6L,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

#ifdef __cplusplus
class LookupTable;
#endif

DEFINE_GUID(IID_IADLookupTables,0x34C7F6E7L,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of interface: IADLookupTables */
#undef INTERFACE
#define INTERFACE IADLookupTables

DECLARE_INTERFACE_(IADLookupTables, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADLookupTables methods */
    STDMETHOD(get__NewEnum)(THIS_ IUnknown * FAR* ppv) PURE;
    STDMETHOD(get_Count)(THIS_ long FAR* retval) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(Add)(THIS_ BSTR TableName, VARIANT Description, VARIANT ParentTable, VARIANT DataType, VARIANT Value1, VARIANT Value2, DIADLookupTable FAR* FAR* retval) PURE;
    STDMETHOD(Item)(THIS_ VARIANT IndexName, DIADLookupTable FAR* FAR* retval) PURE;
};

DEFINE_GUID(DIID_DIADLookupTables,0x34C7F6E8L,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of dispatch interface: DIADLookupTables */
#undef INTERFACE
#define INTERFACE DIADLookupTables

DECLARE_INTERFACE_(DIADLookupTables, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADLookupTables */
};

DEFINE_GUID(CLSID_LookupTables,0x34C7F6E9L,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

#ifdef __cplusplus
class LookupTables;
#endif

DEFINE_GUID(IID_IADLookupTableEntry,0x34C7F6EAL,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of interface: IADLookupTableEntry */
#undef INTERFACE
#define INTERFACE IADLookupTableEntry

DECLARE_INTERFACE_(IADLookupTableEntry, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADLookupTableEntry methods */
    STDMETHOD(get_DataType)(THIS_ DataTypeConstants FAR* retval) PURE;
    STDMETHOD(get_Domain)(THIS_ DIADDomain FAR* FAR* retval) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_PostOffice)(THIS_ DIADPostOffice FAR* FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(get_Table)(THIS_ DIADLookupTable FAR* FAR* retval) PURE;
    STDMETHOD(get_Value)(THIS_ VARIANT FAR* retval) PURE;
    STDMETHOD(put_Value)(THIS_ VARIANT EntryValue) PURE;
    STDMETHOD(Commit)(THIS) PURE;
    STDMETHOD(Delete)(THIS) PURE;
    STDMETHOD(Refresh)(THIS) PURE;
};

DEFINE_GUID(DIID_DIADLookupTableEntry,0x34C7F6EBL,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of dispatch interface: DIADLookupTableEntry */
#undef INTERFACE
#define INTERFACE DIADLookupTableEntry

DECLARE_INTERFACE_(DIADLookupTableEntry, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADLookupTableEntry */
};

DEFINE_GUID(CLSID_LookupTableEntry,0x34C7F6ECL,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

#ifdef __cplusplus
class LookupTableEntry;
#endif

DEFINE_GUID(IID_IADLookupTableEntries,0x34C7F6EDL,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of interface: IADLookupTableEntries */
#undef INTERFACE
#define INTERFACE IADLookupTableEntries

DECLARE_INTERFACE_(IADLookupTableEntries, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADLookupTableEntries methods */
    STDMETHOD(get__NewEnum)(THIS_ IUnknown * FAR* ppv) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(Add)(THIS_ VARIANT Value, VARIANT ParentValue, VARIANT DocLife, VARIANT ExpAction, VARIANT MaxVers, DIADLookupTableEntry FAR* FAR* retval) PURE;
    STDMETHOD(CreateIterator)(THIS_ DIADLookupTableEntriesIterator FAR* FAR* retval) PURE;
    STDMETHOD(Item)(THIS_ VARIANT Value, VARIANT ParentValue, DIADLookupTableEntry FAR* FAR* retval) PURE;
};

DEFINE_GUID(DIID_DIADLookupTableEntries,0x34C7F6EEL,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of dispatch interface: DIADLookupTableEntries */
#undef INTERFACE
#define INTERFACE DIADLookupTableEntries

DECLARE_INTERFACE_(DIADLookupTableEntries, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADLookupTableEntries */
};

DEFINE_GUID(CLSID_LookupTableEntries,0x34C7F6EFL,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

#ifdef __cplusplus
class LookupTableEntries;
#endif

DEFINE_GUID(IID_IADLookupTableEntriesIterator,0x34C7F6F0L,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of interface: IADLookupTableEntriesIterator */
#undef INTERFACE
#define INTERFACE IADLookupTableEntriesIterator

DECLARE_INTERFACE_(IADLookupTableEntriesIterator, IUnknown)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
#endif

    /* IADLookupTableEntriesIterator methods */
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(Clone)(THIS_ DIADLookupTableEntriesIterator FAR* FAR* retval) PURE;
    STDMETHOD(Next)(THIS_ DIADLookupTableEntry FAR* FAR* retval) PURE;
    STDMETHOD(Previous)(THIS_ DIADLookupTableEntry FAR* FAR* retval) PURE;
    STDMETHOD(Reset)(THIS) PURE;
    STDMETHOD(Skip)(THIS_ long lNumberToSkip) PURE;
};

DEFINE_GUID(DIID_DIADLookupTableEntriesIterator,0x34C7F6F1L,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of dispatch interface: DIADLookupTableEntriesIterator */
#undef INTERFACE
#define INTERFACE DIADLookupTableEntriesIterator

DECLARE_INTERFACE_(DIADLookupTableEntriesIterator, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADLookupTableEntriesIterator */
};

DEFINE_GUID(CLSID_LookupTableEntriesIterator,0x34C7F6F2L,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

#ifdef __cplusplus
class LookupTableEntriesIterator;
#endif

DEFINE_GUID(IID_IADDocumentTypeEntry,0x34C7F6DEL,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of interface: IADDocumentTypeEntry */
#undef INTERFACE
#define INTERFACE IADDocumentTypeEntry

DECLARE_INTERFACE_(IADDocumentTypeEntry, IADLookupTableEntry)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IADLookupTableEntry methods */
    STDMETHOD(get_DataType)(THIS_ DataTypeConstants FAR* retval) PURE;
    STDMETHOD(get_Domain)(THIS_ DIADDomain FAR* FAR* retval) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_PostOffice)(THIS_ DIADPostOffice FAR* FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(get_Table)(THIS_ DIADLookupTable FAR* FAR* retval) PURE;
    STDMETHOD(get_Value)(THIS_ VARIANT FAR* retval) PURE;
    STDMETHOD(put_Value)(THIS_ VARIANT EntryValue) PURE;
    STDMETHOD(Commit)(THIS) PURE;
    STDMETHOD(Delete)(THIS) PURE;
    STDMETHOD(Refresh)(THIS) PURE;
#endif

    /* IADDocumentTypeEntry methods */
    STDMETHOD(get_DocumentLife)(THIS_ long FAR* retval) PURE;
    STDMETHOD(put_DocumentLife)(THIS_ long DocumentLife) PURE;
    STDMETHOD(get_ExpirationAction)(THIS_ ExpirationTypeConstants FAR* retval) PURE;
    STDMETHOD(put_ExpirationAction)(THIS_ ExpirationTypeConstants Type) PURE;
    STDMETHOD(get_MaxVersions)(THIS_ long FAR* retval) PURE;
    STDMETHOD(put_MaxVersions)(THIS_ long MaxVersions) PURE;
};

DEFINE_GUID(DIID_DIADDocumentTypeEntry,0x34C7F6DFL,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of dispatch interface: DIADDocumentTypeEntry */
#undef INTERFACE
#define INTERFACE DIADDocumentTypeEntry

DECLARE_INTERFACE_(DIADDocumentTypeEntry, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADDocumentTypeEntry */
};

DEFINE_GUID(CLSID_DocumentTypeEntry,0x34C7F6E0L,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

#ifdef __cplusplus
class DocumentTypeEntry;
#endif

DEFINE_GUID(IID_IADLookupEntry,0x34C7F6E1L,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of interface: IADLookupEntry */
#undef INTERFACE
#define INTERFACE IADLookupEntry

DECLARE_INTERFACE_(IADLookupEntry, IADLookupTableEntry)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IADLookupTableEntry methods */
    STDMETHOD(get_DataType)(THIS_ DataTypeConstants FAR* retval) PURE;
    STDMETHOD(get_Domain)(THIS_ DIADDomain FAR* FAR* retval) PURE;
    STDMETHOD(get_ObjType)(THIS_ ObjTypeConstants FAR* retval) PURE;
    STDMETHOD(get_PostOffice)(THIS_ DIADPostOffice FAR* FAR* retval) PURE;
    STDMETHOD(get_System)(THIS_ DIADSystem FAR* FAR* retval) PURE;
    STDMETHOD(get_Table)(THIS_ DIADLookupTable FAR* FAR* retval) PURE;
    STDMETHOD(get_Value)(THIS_ VARIANT FAR* retval) PURE;
    STDMETHOD(put_Value)(THIS_ VARIANT EntryValue) PURE;
    STDMETHOD(Commit)(THIS) PURE;
    STDMETHOD(Delete)(THIS) PURE;
    STDMETHOD(Refresh)(THIS) PURE;
#endif

    /* IADLookupEntry methods */
    STDMETHOD(get_ParentValue)(THIS_ VARIANT FAR* retval) PURE;
    STDMETHOD(put_ParentValue)(THIS_ VARIANT DocumentLife) PURE;
    STDMETHOD(get_ParentValueType)(THIS_ DataTypeConstants FAR* retval) PURE;
};

DEFINE_GUID(DIID_DIADLookupEntry,0x34C7F6E2L,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

/* Definition of dispatch interface: DIADLookupEntry */
#undef INTERFACE
#define INTERFACE DIADLookupEntry

DECLARE_INTERFACE_(DIADLookupEntry, IDispatch)
{
BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS

    /* IUnknown methods */
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /* IDispatch methods */
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT FAR* pctinfo) PURE;

    STDMETHOD(GetTypeInfo)(
      THIS_
      UINT itinfo,
      LCID lcid,
      ITypeInfo FAR* FAR* pptinfo) PURE;

    STDMETHOD(GetIDsOfNames)(
      THIS_
      REFIID riid,
      OLECHAR FAR* FAR* rgszNames,
      UINT cNames,
      LCID lcid,
      DISPID FAR* rgdispid) PURE;

    STDMETHOD(Invoke)(
      THIS_
      DISPID dispidMember,
      REFIID riid,
      LCID lcid,
      WORD wFlags,
      DISPPARAMS FAR* pdispparams,
      VARIANT FAR* pvarResult,
      EXCEPINFO FAR* pexcepinfo,
      UINT FAR* puArgErr) PURE;
#endif

/* Capable of dispatching all the methods of interface IADLookupEntry */
};

DEFINE_GUID(CLSID_LookupEntry,0x34C7F6E3L,0x2576,0x11D1,0x8B,0x21,0x00,0x80,0x5F,0xC1,0x40,0x33);

#ifdef __cplusplus
class LookupEntry;
#endif

#endif

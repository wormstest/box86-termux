/*** Autogenerated by WIDL 6.0 from include/propidl.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __propidl_h__
#define __propidl_h__

/* Forward declarations */

#ifndef __IPropertyStorage_FWD_DEFINED__
#define __IPropertyStorage_FWD_DEFINED__
typedef interface IPropertyStorage IPropertyStorage;
#ifdef __cplusplus
interface IPropertyStorage;
#endif /* __cplusplus */
#endif

#ifndef __IPropertySetStorage_FWD_DEFINED__
#define __IPropertySetStorage_FWD_DEFINED__
typedef interface IPropertySetStorage IPropertySetStorage;
#ifdef __cplusplus
interface IPropertySetStorage;
#endif /* __cplusplus */
#endif

#ifndef __IEnumSTATPROPSTG_FWD_DEFINED__
#define __IEnumSTATPROPSTG_FWD_DEFINED__
typedef interface IEnumSTATPROPSTG IEnumSTATPROPSTG;
#ifdef __cplusplus
interface IEnumSTATPROPSTG;
#endif /* __cplusplus */
#endif

#ifndef __IEnumSTATPROPSETSTG_FWD_DEFINED__
#define __IEnumSTATPROPSETSTG_FWD_DEFINED__
typedef interface IEnumSTATPROPSETSTG IEnumSTATPROPSETSTG;
#ifdef __cplusplus
interface IEnumSTATPROPSETSTG;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <objidl.h>
#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef PID_DICTIONARY
#undef PID_DICTIONARY
#endif
#ifdef PID_CODEPAGE
#undef PID_CODEPAGE
#endif
#ifdef PID_SECURITY
#undef PID_SECURITY
#endif
#ifndef __IEnumSTATPROPSTG_FWD_DEFINED__
#define __IEnumSTATPROPSTG_FWD_DEFINED__
typedef interface IEnumSTATPROPSTG IEnumSTATPROPSTG;
#ifdef __cplusplus
interface IEnumSTATPROPSTG;
#endif /* __cplusplus */
#endif

#ifndef __IEnumSTATPROPSETSTG_FWD_DEFINED__
#define __IEnumSTATPROPSETSTG_FWD_DEFINED__
typedef interface IEnumSTATPROPSETSTG IEnumSTATPROPSETSTG;
#ifdef __cplusplus
interface IEnumSTATPROPSETSTG;
#endif /* __cplusplus */
#endif

/*****************************************************************************
 * IPropertyStorage interface
 */
#ifndef __IPropertyStorage_INTERFACE_DEFINED__
#define __IPropertyStorage_INTERFACE_DEFINED__

typedef IPropertyStorage *LPPROPERTYSTORAGE;
#define PROPSETFLAG_DEFAULT (0)

#define PROPSETFLAG_NONSIMPLE (1)

#define PROPSETFLAG_ANSI (2)

#define PROPSETFLAG_UNBUFFERED (4)

#define PROPSETFLAG_CASE_SENSITIVE (8)

#define PROPSET_BEHAVIOR_CASE_SENSITIVE (1)

#define PID_DICTIONARY (0x0)

#define PID_CODEPAGE (0x1)

#define PID_FIRST_USABLE (0x2)

#define PID_FIRST_NAME_DEFAULT (0xfff)

#define PID_LOCALE (0x80000000)

#define PID_MODIFY_TIME (0x80000001)

#define PID_SECURITY (0x80000002)

#define PID_BEHAVIOR (0x80000003)

#define PID_ILLEGAL (0xffffffff)

#define PID_MIN_READONLY (0x80000000)

#define PID_MAX_READONLY (0xbfffffff)

typedef struct tagPROPVARIANT PROPVARIANT;
typedef struct tagCAC {
    ULONG cElems;
    char *pElems;
} CAC;
typedef struct tagCAUB {
    ULONG cElems;
    unsigned char *pElems;
} CAUB;
typedef struct tagCAI {
    ULONG cElems;
    short *pElems;
} CAI;
typedef struct tagCAUI {
    ULONG cElems;
    USHORT *pElems;
} CAUI;
typedef struct tagCAL {
    ULONG cElems;
    LONG *pElems;
} CAL;
typedef struct tagCAUL {
    ULONG cElems;
    ULONG *pElems;
} CAUL;
typedef struct tagCAFLT {
    ULONG cElems;
    float *pElems;
} CAFLT;
typedef struct tagCADBL {
    ULONG cElems;
    double *pElems;
} CADBL;
typedef struct tagCACY {
    ULONG cElems;
    CY *pElems;
} CACY;
typedef struct tagCADATE {
    ULONG cElems;
    DATE *pElems;
} CADATE;
typedef struct tagCABSTR {
    ULONG cElems;
    BSTR *pElems;
} CABSTR;
typedef struct tagCABSTRBLOB {
    ULONG cElems;
    BSTRBLOB *pElems;
} CABSTRBLOB;
typedef struct tagCABOOL {
    ULONG cElems;
    VARIANT_BOOL *pElems;
} CABOOL;
typedef struct tagCASCODE {
    ULONG cElems;
    SCODE *pElems;
} CASCODE;
typedef struct tagCAPROPVARIANT {
    ULONG cElems;
    PROPVARIANT *pElems;
} CAPROPVARIANT;
typedef struct tagCAH {
    ULONG cElems;
    LARGE_INTEGER *pElems;
} CAH;
typedef struct tagCAUH {
    ULONG cElems;
    ULARGE_INTEGER *pElems;
} CAUH;
typedef struct tagCALPSTR {
    ULONG cElems;
    LPSTR *pElems;
} CALPSTR;
typedef struct tagCALPWSTR {
    ULONG cElems;
    LPWSTR *pElems;
} CALPWSTR;
typedef struct tagCAFILETIME {
    ULONG cElems;
    FILETIME *pElems;
} CAFILETIME;
typedef struct tagCACLIPDATA {
    ULONG cElems;
    CLIPDATA *pElems;
} CACLIPDATA;
typedef struct tagCACLSID {
    ULONG cElems;
    CLSID *pElems;
} CACLSID;
struct tagPROPVARIANT {
    VARTYPE vt;
    WORD wReserved1;
    WORD wReserved2;
    WORD wReserved3;
    __C89_NAMELESS union {
        char cVal;
        UCHAR bVal;
        short iVal;
        USHORT uiVal;
        VARIANT_BOOL boolVal;
        LONG lVal;
        ULONG ulVal;
        float fltVal;
        SCODE scode;
        LARGE_INTEGER hVal;
        ULARGE_INTEGER uhVal;
        double dblVal;
        CY cyVal;
        DATE date;
        FILETIME filetime;
        CLSID *puuid;
        BLOB blob;
        CLIPDATA *pclipdata;
        IStream *pStream;
        IStorage *pStorage;
        BSTR bstrVal;
        BSTRBLOB bstrblobVal;
        LPSTR pszVal;
        LPWSTR pwszVal;
        IUnknown *punkVal;
        IDispatch *pdispVal;
        CAC cac;
        CAUB caub;
        CAI cai;
        CAUI caui;
        CABOOL cabool;
        CAL cal;
        CAUL caul;
        CAFLT caflt;
        CASCODE cascode;
        CAH cah;
        CAUH cauh;
        CADBL cadbl;
        CACY cacy;
        CADATE cadate;
        CAFILETIME cafiletime;
        CACLSID cauuid;
        CACLIPDATA caclipdata;
        CABSTR cabstr;
        CABSTRBLOB cabstrblob;
        CALPSTR calpstr;
        CALPWSTR calpwstr;
        CAPROPVARIANT capropvar;
        LPSAFEARRAY parray;
        CHAR *pcVal;
        UCHAR *pbVal;
        SHORT *piVal;
        USHORT *puiVal;
        LONG *plVal;
        ULONG *pulVal;
        INT *pintVal;
        UINT *puintVal;
        FLOAT *pfltVal;
        DOUBLE *pdblVal;
        VARIANT_BOOL *pboolVal;
        DECIMAL *pdecVal;
        SCODE *pscode;
        CY *pcyVal;
        DATE *pdate;
        BSTR *pbstrVal;
        IUnknown **ppunkVal;
        IDispatch **ppdispVal;
        LPSAFEARRAY *pparray;
        PROPVARIANT *pvarVal;
    } __C89_NAMELESSUNIONNAME;
};
typedef struct tagPROPVARIANT *LPPROPVARIANT;
#if 0
typedef const PROPVARIANT *REFPROPVARIANT;
#endif
#ifndef _REFPROPVARIANT_DEFINED
#define _REFPROPVARIANT_DEFINED
#ifdef __cplusplus
#define REFPROPVARIANT const PROPVARIANT &
#else
#define REFPROPVARIANT const PROPVARIANT * __MIDL_CONST
#endif
#endif
#define PIDDI_THUMBNAIL 0x00000002L /* VT_BLOB */

#define PIDSI_TITLE        0x00000002L /* VT_LPSTR */
#define PIDSI_SUBJECT      0x00000003L /* VT_LPSTR */
#define PIDSI_AUTHOR       0x00000004L /* VT_LPSTR */
#define PIDSI_KEYWORDS     0x00000005L /* VT_LPSTR */
#define PIDSI_COMMENTS     0x00000006L /* VT_LPSTR */
#define PIDSI_TEMPLATE     0x00000007L /* VT_LPSTR */
#define PIDSI_LASTAUTHOR   0x00000008L /* VT_LPSTR */
#define PIDSI_REVNUMBER    0x00000009L /* VT_LPSTR */
#define PIDSI_EDITTIME     0x0000000AL /* VT_FILETIME (UTC) */
#define PIDSI_LASTPRINTED  0x0000000BL /* VT_FILETIME (UTC) */
#define PIDSI_CREATE_DTM   0x0000000CL /* VT_FILETIME (UTC) */
#define PIDSI_LASTSAVE_DTM 0x0000000DL /* VT_FILETIME (UTC) */
#define PIDSI_PAGECOUNT    0x0000000EL /* VT_I4 */
#define PIDSI_WORDCOUNT    0x0000000FL /* VT_I4 */
#define PIDSI_CHARCOUNT    0x00000010L /* VT_I4 */
#define PIDSI_THUMBNAIL    0x00000011L /* VT_CF */
#define PIDSI_APPNAME      0x00000012L /* VT_LPSTR */
#define PIDSI_DOC_SECURITY 0x00000013L /* VT_I4 */

#define PIDDSI_CATEGORY    0x00000002L /* VT_LPSTR */
#define PIDDSI_PRESFORMAT  0x00000003L /* VT_LPSTR */
#define PIDDSI_BYTECOUNT   0x00000004L /* VT_I4 */
#define PIDDSI_LINECOUNT   0x00000005L /* VT_I4 */
#define PIDDSI_PARCOUNT    0x00000006L /* VT_I4 */
#define PIDDSI_SLIDECOUNT  0x00000007L /* VT_I4 */
#define PIDDSI_NOTECOUNT   0x00000008L /* VT_I4 */
#define PIDDSI_HIDDENCOUNT 0x00000009L /* VT_I4 */
#define PIDDSI_MMCLIPCOUNT 0x0000000AL /* VT_I4 */
#define PIDDSI_SCALE       0x0000000BL /* VT_BOOL */
#define PIDDSI_HEADINGPAIR 0x0000000CL /* VT_VARIANT|VT_VECTOR */
#define PIDDSI_DOCPARTS    0x0000000DL /* VT_LPSTR|VT_VECTOR */
#define PIDDSI_MANAGER     0x0000000EL /* VT_LPSTR */
#define PIDDSI_COMPANY     0x0000000FL /* VT_LPSTR */
#define PIDDSI_LINKSDIRTY  0x00000010L /* VT_B0OL */
#define PRSPEC_INVALID (0xffffffff)

#define PRSPEC_LPWSTR (0)

#define PRSPEC_PROPID (1)

typedef struct tagPROPSPEC {
    ULONG ulKind;
    union {
        PROPID propid;
        LPOLESTR lpwstr;
    } DUMMYUNIONNAME;
} PROPSPEC;
typedef struct tagSTATPROPSTG {
    LPOLESTR lpwstrName;
    PROPID propid;
    VARTYPE vt;
} STATPROPSTG;
/* Macros for dwOSVersion member of STATPROPSETSTG */
#define PROPSETHDR_OSVER_KIND(dwOSVer)  HIWORD((dwOSVer))
#define PROPSETHDR_OSVER_MAJOR(dwOSVer) LOBYTE(LOWORD((dwOSVer)))
#define PROPSETHDR_OSVER_MINOR(dwOSVer) HIBYTE(LOWORD((dwOSVer)))
#define PROPSETHDR_OSVERSION_UNKNOWN    0xffffffff
typedef struct tagSTATPROPSETSTG {
    FMTID fmtid;
    CLSID clsid;
    DWORD grfFlags;
    FILETIME mtime;
    FILETIME ctime;
    FILETIME atime;
    DWORD dwOSVersion;
} STATPROPSETSTG;
DEFINE_GUID(IID_IPropertyStorage, 0x00000138, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("00000138-0000-0000-c000-000000000046")
IPropertyStorage : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE ReadMultiple(
        ULONG cpspec,
        const PROPSPEC rgpspec[],
        PROPVARIANT rgpropvar[]) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteMultiple(
        ULONG cpspec,
        const PROPSPEC rgpspec[],
        const PROPVARIANT rgpropvar[],
        PROPID propidNameFirst) = 0;

    virtual HRESULT STDMETHODCALLTYPE DeleteMultiple(
        ULONG cpspec,
        const PROPSPEC rgpspec[]) = 0;

    virtual HRESULT STDMETHODCALLTYPE ReadPropertyNames(
        ULONG cpropid,
        const PROPID rgpropid[],
        LPOLESTR rglpwstrName[]) = 0;

    virtual HRESULT STDMETHODCALLTYPE WritePropertyNames(
        ULONG cpropid,
        const PROPID rgpropid[],
        const LPOLESTR rglpwstrName[]) = 0;

    virtual HRESULT STDMETHODCALLTYPE DeletePropertyNames(
        ULONG cpropid,
        const PROPID rgpropid[]) = 0;

    virtual HRESULT STDMETHODCALLTYPE Commit(
        DWORD grfCommitFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE Revert(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Enum(
        IEnumSTATPROPSTG **ppenum) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetTimes(
        const FILETIME *pctime,
        const FILETIME *patime,
        const FILETIME *pmtime) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetClass(
        REFCLSID clsid) = 0;

    virtual HRESULT STDMETHODCALLTYPE Stat(
        STATPROPSETSTG *statpsstg) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IPropertyStorage, 0x00000138, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46)
#endif
#else
typedef struct IPropertyStorageVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPropertyStorage *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPropertyStorage *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPropertyStorage *This);

    /*** IPropertyStorage methods ***/
    HRESULT (STDMETHODCALLTYPE *ReadMultiple)(
        IPropertyStorage *This,
        ULONG cpspec,
        const PROPSPEC rgpspec[],
        PROPVARIANT rgpropvar[]);

    HRESULT (STDMETHODCALLTYPE *WriteMultiple)(
        IPropertyStorage *This,
        ULONG cpspec,
        const PROPSPEC rgpspec[],
        const PROPVARIANT rgpropvar[],
        PROPID propidNameFirst);

    HRESULT (STDMETHODCALLTYPE *DeleteMultiple)(
        IPropertyStorage *This,
        ULONG cpspec,
        const PROPSPEC rgpspec[]);

    HRESULT (STDMETHODCALLTYPE *ReadPropertyNames)(
        IPropertyStorage *This,
        ULONG cpropid,
        const PROPID rgpropid[],
        LPOLESTR rglpwstrName[]);

    HRESULT (STDMETHODCALLTYPE *WritePropertyNames)(
        IPropertyStorage *This,
        ULONG cpropid,
        const PROPID rgpropid[],
        const LPOLESTR rglpwstrName[]);

    HRESULT (STDMETHODCALLTYPE *DeletePropertyNames)(
        IPropertyStorage *This,
        ULONG cpropid,
        const PROPID rgpropid[]);

    HRESULT (STDMETHODCALLTYPE *Commit)(
        IPropertyStorage *This,
        DWORD grfCommitFlags);

    HRESULT (STDMETHODCALLTYPE *Revert)(
        IPropertyStorage *This);

    HRESULT (STDMETHODCALLTYPE *Enum)(
        IPropertyStorage *This,
        IEnumSTATPROPSTG **ppenum);

    HRESULT (STDMETHODCALLTYPE *SetTimes)(
        IPropertyStorage *This,
        const FILETIME *pctime,
        const FILETIME *patime,
        const FILETIME *pmtime);

    HRESULT (STDMETHODCALLTYPE *SetClass)(
        IPropertyStorage *This,
        REFCLSID clsid);

    HRESULT (STDMETHODCALLTYPE *Stat)(
        IPropertyStorage *This,
        STATPROPSETSTG *statpsstg);

    END_INTERFACE
} IPropertyStorageVtbl;

interface IPropertyStorage {
    CONST_VTBL IPropertyStorageVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IPropertyStorage_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IPropertyStorage_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IPropertyStorage_Release(This) (This)->lpVtbl->Release(This)
/*** IPropertyStorage methods ***/
#define IPropertyStorage_ReadMultiple(This,cpspec,rgpspec,rgpropvar) (This)->lpVtbl->ReadMultiple(This,cpspec,rgpspec,rgpropvar)
#define IPropertyStorage_WriteMultiple(This,cpspec,rgpspec,rgpropvar,propidNameFirst) (This)->lpVtbl->WriteMultiple(This,cpspec,rgpspec,rgpropvar,propidNameFirst)
#define IPropertyStorage_DeleteMultiple(This,cpspec,rgpspec) (This)->lpVtbl->DeleteMultiple(This,cpspec,rgpspec)
#define IPropertyStorage_ReadPropertyNames(This,cpropid,rgpropid,rglpwstrName) (This)->lpVtbl->ReadPropertyNames(This,cpropid,rgpropid,rglpwstrName)
#define IPropertyStorage_WritePropertyNames(This,cpropid,rgpropid,rglpwstrName) (This)->lpVtbl->WritePropertyNames(This,cpropid,rgpropid,rglpwstrName)
#define IPropertyStorage_DeletePropertyNames(This,cpropid,rgpropid) (This)->lpVtbl->DeletePropertyNames(This,cpropid,rgpropid)
#define IPropertyStorage_Commit(This,grfCommitFlags) (This)->lpVtbl->Commit(This,grfCommitFlags)
#define IPropertyStorage_Revert(This) (This)->lpVtbl->Revert(This)
#define IPropertyStorage_Enum(This,ppenum) (This)->lpVtbl->Enum(This,ppenum)
#define IPropertyStorage_SetTimes(This,pctime,patime,pmtime) (This)->lpVtbl->SetTimes(This,pctime,patime,pmtime)
#define IPropertyStorage_SetClass(This,clsid) (This)->lpVtbl->SetClass(This,clsid)
#define IPropertyStorage_Stat(This,statpsstg) (This)->lpVtbl->Stat(This,statpsstg)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IPropertyStorage_QueryInterface(IPropertyStorage* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IPropertyStorage_AddRef(IPropertyStorage* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IPropertyStorage_Release(IPropertyStorage* This) {
    return This->lpVtbl->Release(This);
}
/*** IPropertyStorage methods ***/
static FORCEINLINE HRESULT IPropertyStorage_ReadMultiple(IPropertyStorage* This,ULONG cpspec,const PROPSPEC rgpspec[],PROPVARIANT rgpropvar[]) {
    return This->lpVtbl->ReadMultiple(This,cpspec,rgpspec,rgpropvar);
}
static FORCEINLINE HRESULT IPropertyStorage_WriteMultiple(IPropertyStorage* This,ULONG cpspec,const PROPSPEC rgpspec[],const PROPVARIANT rgpropvar[],PROPID propidNameFirst) {
    return This->lpVtbl->WriteMultiple(This,cpspec,rgpspec,rgpropvar,propidNameFirst);
}
static FORCEINLINE HRESULT IPropertyStorage_DeleteMultiple(IPropertyStorage* This,ULONG cpspec,const PROPSPEC rgpspec[]) {
    return This->lpVtbl->DeleteMultiple(This,cpspec,rgpspec);
}
static FORCEINLINE HRESULT IPropertyStorage_ReadPropertyNames(IPropertyStorage* This,ULONG cpropid,const PROPID rgpropid[],LPOLESTR rglpwstrName[]) {
    return This->lpVtbl->ReadPropertyNames(This,cpropid,rgpropid,rglpwstrName);
}
static FORCEINLINE HRESULT IPropertyStorage_WritePropertyNames(IPropertyStorage* This,ULONG cpropid,const PROPID rgpropid[],const LPOLESTR rglpwstrName[]) {
    return This->lpVtbl->WritePropertyNames(This,cpropid,rgpropid,rglpwstrName);
}
static FORCEINLINE HRESULT IPropertyStorage_DeletePropertyNames(IPropertyStorage* This,ULONG cpropid,const PROPID rgpropid[]) {
    return This->lpVtbl->DeletePropertyNames(This,cpropid,rgpropid);
}
static FORCEINLINE HRESULT IPropertyStorage_Commit(IPropertyStorage* This,DWORD grfCommitFlags) {
    return This->lpVtbl->Commit(This,grfCommitFlags);
}
static FORCEINLINE HRESULT IPropertyStorage_Revert(IPropertyStorage* This) {
    return This->lpVtbl->Revert(This);
}
static FORCEINLINE HRESULT IPropertyStorage_Enum(IPropertyStorage* This,IEnumSTATPROPSTG **ppenum) {
    return This->lpVtbl->Enum(This,ppenum);
}
static FORCEINLINE HRESULT IPropertyStorage_SetTimes(IPropertyStorage* This,const FILETIME *pctime,const FILETIME *patime,const FILETIME *pmtime) {
    return This->lpVtbl->SetTimes(This,pctime,patime,pmtime);
}
static FORCEINLINE HRESULT IPropertyStorage_SetClass(IPropertyStorage* This,REFCLSID clsid) {
    return This->lpVtbl->SetClass(This,clsid);
}
static FORCEINLINE HRESULT IPropertyStorage_Stat(IPropertyStorage* This,STATPROPSETSTG *statpsstg) {
    return This->lpVtbl->Stat(This,statpsstg);
}
#endif
#endif

#endif


#endif  /* __IPropertyStorage_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IPropertySetStorage interface
 */
#ifndef __IPropertySetStorage_INTERFACE_DEFINED__
#define __IPropertySetStorage_INTERFACE_DEFINED__

typedef IPropertySetStorage *LPPROPERTYSETSTORAGE;
DEFINE_GUID(IID_IPropertySetStorage, 0x0000013a, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("0000013a-0000-0000-c000-000000000046")
IPropertySetStorage : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Create(
        REFFMTID rfmtid,
        const CLSID *pclsid,
        DWORD grfFlags,
        DWORD grfMode,
        IPropertyStorage **ppprstg) = 0;

    virtual HRESULT STDMETHODCALLTYPE Open(
        REFFMTID rfmtid,
        DWORD grfMode,
        IPropertyStorage **ppprstg) = 0;

    virtual HRESULT STDMETHODCALLTYPE Delete(
        REFFMTID rfmtid) = 0;

    virtual HRESULT STDMETHODCALLTYPE Enum(
        IEnumSTATPROPSETSTG **ppenum) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IPropertySetStorage, 0x0000013a, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46)
#endif
#else
typedef struct IPropertySetStorageVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPropertySetStorage *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPropertySetStorage *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPropertySetStorage *This);

    /*** IPropertySetStorage methods ***/
    HRESULT (STDMETHODCALLTYPE *Create)(
        IPropertySetStorage *This,
        REFFMTID rfmtid,
        const CLSID *pclsid,
        DWORD grfFlags,
        DWORD grfMode,
        IPropertyStorage **ppprstg);

    HRESULT (STDMETHODCALLTYPE *Open)(
        IPropertySetStorage *This,
        REFFMTID rfmtid,
        DWORD grfMode,
        IPropertyStorage **ppprstg);

    HRESULT (STDMETHODCALLTYPE *Delete)(
        IPropertySetStorage *This,
        REFFMTID rfmtid);

    HRESULT (STDMETHODCALLTYPE *Enum)(
        IPropertySetStorage *This,
        IEnumSTATPROPSETSTG **ppenum);

    END_INTERFACE
} IPropertySetStorageVtbl;

interface IPropertySetStorage {
    CONST_VTBL IPropertySetStorageVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IPropertySetStorage_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IPropertySetStorage_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IPropertySetStorage_Release(This) (This)->lpVtbl->Release(This)
/*** IPropertySetStorage methods ***/
#define IPropertySetStorage_Create(This,rfmtid,pclsid,grfFlags,grfMode,ppprstg) (This)->lpVtbl->Create(This,rfmtid,pclsid,grfFlags,grfMode,ppprstg)
#define IPropertySetStorage_Open(This,rfmtid,grfMode,ppprstg) (This)->lpVtbl->Open(This,rfmtid,grfMode,ppprstg)
#define IPropertySetStorage_Delete(This,rfmtid) (This)->lpVtbl->Delete(This,rfmtid)
#define IPropertySetStorage_Enum(This,ppenum) (This)->lpVtbl->Enum(This,ppenum)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IPropertySetStorage_QueryInterface(IPropertySetStorage* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IPropertySetStorage_AddRef(IPropertySetStorage* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IPropertySetStorage_Release(IPropertySetStorage* This) {
    return This->lpVtbl->Release(This);
}
/*** IPropertySetStorage methods ***/
static FORCEINLINE HRESULT IPropertySetStorage_Create(IPropertySetStorage* This,REFFMTID rfmtid,const CLSID *pclsid,DWORD grfFlags,DWORD grfMode,IPropertyStorage **ppprstg) {
    return This->lpVtbl->Create(This,rfmtid,pclsid,grfFlags,grfMode,ppprstg);
}
static FORCEINLINE HRESULT IPropertySetStorage_Open(IPropertySetStorage* This,REFFMTID rfmtid,DWORD grfMode,IPropertyStorage **ppprstg) {
    return This->lpVtbl->Open(This,rfmtid,grfMode,ppprstg);
}
static FORCEINLINE HRESULT IPropertySetStorage_Delete(IPropertySetStorage* This,REFFMTID rfmtid) {
    return This->lpVtbl->Delete(This,rfmtid);
}
static FORCEINLINE HRESULT IPropertySetStorage_Enum(IPropertySetStorage* This,IEnumSTATPROPSETSTG **ppenum) {
    return This->lpVtbl->Enum(This,ppenum);
}
#endif
#endif

#endif


#endif  /* __IPropertySetStorage_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IEnumSTATPROPSTG interface
 */
#ifndef __IEnumSTATPROPSTG_INTERFACE_DEFINED__
#define __IEnumSTATPROPSTG_INTERFACE_DEFINED__

typedef IEnumSTATPROPSTG *LPENUMSTATPROPSTG;
DEFINE_GUID(IID_IEnumSTATPROPSTG, 0x00000139, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("00000139-0000-0000-c000-000000000046")
IEnumSTATPROPSTG : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Next(
        ULONG celt,
        STATPROPSTG *rgelt,
        ULONG *pceltFetched) = 0;

    virtual HRESULT STDMETHODCALLTYPE Skip(
        ULONG celt) = 0;

    virtual HRESULT STDMETHODCALLTYPE Reset(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Clone(
        IEnumSTATPROPSTG **ppenum) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IEnumSTATPROPSTG, 0x00000139, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46)
#endif
#else
typedef struct IEnumSTATPROPSTGVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumSTATPROPSTG *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumSTATPROPSTG *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumSTATPROPSTG *This);

    /*** IEnumSTATPROPSTG methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumSTATPROPSTG *This,
        ULONG celt,
        STATPROPSTG *rgelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumSTATPROPSTG *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumSTATPROPSTG *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumSTATPROPSTG *This,
        IEnumSTATPROPSTG **ppenum);

    END_INTERFACE
} IEnumSTATPROPSTGVtbl;

interface IEnumSTATPROPSTG {
    CONST_VTBL IEnumSTATPROPSTGVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IEnumSTATPROPSTG_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IEnumSTATPROPSTG_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IEnumSTATPROPSTG_Release(This) (This)->lpVtbl->Release(This)
/*** IEnumSTATPROPSTG methods ***/
#define IEnumSTATPROPSTG_Next(This,celt,rgelt,pceltFetched) (This)->lpVtbl->Next(This,celt,rgelt,pceltFetched)
#define IEnumSTATPROPSTG_Skip(This,celt) (This)->lpVtbl->Skip(This,celt)
#define IEnumSTATPROPSTG_Reset(This) (This)->lpVtbl->Reset(This)
#define IEnumSTATPROPSTG_Clone(This,ppenum) (This)->lpVtbl->Clone(This,ppenum)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IEnumSTATPROPSTG_QueryInterface(IEnumSTATPROPSTG* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IEnumSTATPROPSTG_AddRef(IEnumSTATPROPSTG* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IEnumSTATPROPSTG_Release(IEnumSTATPROPSTG* This) {
    return This->lpVtbl->Release(This);
}
/*** IEnumSTATPROPSTG methods ***/
static FORCEINLINE HRESULT IEnumSTATPROPSTG_Next(IEnumSTATPROPSTG* This,ULONG celt,STATPROPSTG *rgelt,ULONG *pceltFetched) {
    return This->lpVtbl->Next(This,celt,rgelt,pceltFetched);
}
static FORCEINLINE HRESULT IEnumSTATPROPSTG_Skip(IEnumSTATPROPSTG* This,ULONG celt) {
    return This->lpVtbl->Skip(This,celt);
}
static FORCEINLINE HRESULT IEnumSTATPROPSTG_Reset(IEnumSTATPROPSTG* This) {
    return This->lpVtbl->Reset(This);
}
static FORCEINLINE HRESULT IEnumSTATPROPSTG_Clone(IEnumSTATPROPSTG* This,IEnumSTATPROPSTG **ppenum) {
    return This->lpVtbl->Clone(This,ppenum);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IEnumSTATPROPSTG_RemoteNext_Proxy(
    IEnumSTATPROPSTG* This,
    ULONG celt,
    STATPROPSTG *rgelt,
    ULONG *pceltFetched);
void __RPC_STUB IEnumSTATPROPSTG_RemoteNext_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IEnumSTATPROPSTG_Next_Proxy(
    IEnumSTATPROPSTG* This,
    ULONG celt,
    STATPROPSTG *rgelt,
    ULONG *pceltFetched);
HRESULT __RPC_STUB IEnumSTATPROPSTG_Next_Stub(
    IEnumSTATPROPSTG* This,
    ULONG celt,
    STATPROPSTG *rgelt,
    ULONG *pceltFetched);

#endif  /* __IEnumSTATPROPSTG_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IEnumSTATPROPSETSTG interface
 */
#ifndef __IEnumSTATPROPSETSTG_INTERFACE_DEFINED__
#define __IEnumSTATPROPSETSTG_INTERFACE_DEFINED__

typedef IEnumSTATPROPSETSTG *LPENUMSTATPROPSETSTG;
DEFINE_GUID(IID_IEnumSTATPROPSETSTG, 0x0000013b, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("0000013b-0000-0000-c000-000000000046")
IEnumSTATPROPSETSTG : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Next(
        ULONG celt,
        STATPROPSETSTG *rgelt,
        ULONG *pceltFetched) = 0;

    virtual HRESULT STDMETHODCALLTYPE Skip(
        ULONG celt) = 0;

    virtual HRESULT STDMETHODCALLTYPE Reset(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Clone(
        IEnumSTATPROPSETSTG **ppenum) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IEnumSTATPROPSETSTG, 0x0000013b, 0x0000, 0x0000, 0xc0,0x00, 0x00,0x00,0x00,0x00,0x00,0x46)
#endif
#else
typedef struct IEnumSTATPROPSETSTGVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumSTATPROPSETSTG *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumSTATPROPSETSTG *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumSTATPROPSETSTG *This);

    /*** IEnumSTATPROPSETSTG methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumSTATPROPSETSTG *This,
        ULONG celt,
        STATPROPSETSTG *rgelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumSTATPROPSETSTG *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumSTATPROPSETSTG *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumSTATPROPSETSTG *This,
        IEnumSTATPROPSETSTG **ppenum);

    END_INTERFACE
} IEnumSTATPROPSETSTGVtbl;

interface IEnumSTATPROPSETSTG {
    CONST_VTBL IEnumSTATPROPSETSTGVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IEnumSTATPROPSETSTG_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IEnumSTATPROPSETSTG_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IEnumSTATPROPSETSTG_Release(This) (This)->lpVtbl->Release(This)
/*** IEnumSTATPROPSETSTG methods ***/
#define IEnumSTATPROPSETSTG_Next(This,celt,rgelt,pceltFetched) (This)->lpVtbl->Next(This,celt,rgelt,pceltFetched)
#define IEnumSTATPROPSETSTG_Skip(This,celt) (This)->lpVtbl->Skip(This,celt)
#define IEnumSTATPROPSETSTG_Reset(This) (This)->lpVtbl->Reset(This)
#define IEnumSTATPROPSETSTG_Clone(This,ppenum) (This)->lpVtbl->Clone(This,ppenum)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IEnumSTATPROPSETSTG_QueryInterface(IEnumSTATPROPSETSTG* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IEnumSTATPROPSETSTG_AddRef(IEnumSTATPROPSETSTG* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IEnumSTATPROPSETSTG_Release(IEnumSTATPROPSETSTG* This) {
    return This->lpVtbl->Release(This);
}
/*** IEnumSTATPROPSETSTG methods ***/
static FORCEINLINE HRESULT IEnumSTATPROPSETSTG_Next(IEnumSTATPROPSETSTG* This,ULONG celt,STATPROPSETSTG *rgelt,ULONG *pceltFetched) {
    return This->lpVtbl->Next(This,celt,rgelt,pceltFetched);
}
static FORCEINLINE HRESULT IEnumSTATPROPSETSTG_Skip(IEnumSTATPROPSETSTG* This,ULONG celt) {
    return This->lpVtbl->Skip(This,celt);
}
static FORCEINLINE HRESULT IEnumSTATPROPSETSTG_Reset(IEnumSTATPROPSETSTG* This) {
    return This->lpVtbl->Reset(This);
}
static FORCEINLINE HRESULT IEnumSTATPROPSETSTG_Clone(IEnumSTATPROPSETSTG* This,IEnumSTATPROPSETSTG **ppenum) {
    return This->lpVtbl->Clone(This,ppenum);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IEnumSTATPROPSETSTG_RemoteNext_Proxy(
    IEnumSTATPROPSETSTG* This,
    ULONG celt,
    STATPROPSETSTG *rgelt,
    ULONG *pceltFetched);
void __RPC_STUB IEnumSTATPROPSETSTG_RemoteNext_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IEnumSTATPROPSETSTG_Next_Proxy(
    IEnumSTATPROPSETSTG* This,
    ULONG celt,
    STATPROPSETSTG *rgelt,
    ULONG *pceltFetched);
HRESULT __RPC_STUB IEnumSTATPROPSETSTG_Next_Stub(
    IEnumSTATPROPSETSTG* This,
    ULONG celt,
    STATPROPSETSTG *rgelt,
    ULONG *pceltFetched);

#endif  /* __IEnumSTATPROPSETSTG_INTERFACE_DEFINED__ */

typedef struct SERIALIZEDPROPERTYVALUE {
    DWORD dwType;
    BYTE rgb[1];
} SERIALIZEDPROPERTYVALUE;
HRESULT WINAPI FreePropVariantArray(ULONG,PROPVARIANT*);
HRESULT WINAPI PropVariantClear(PROPVARIANT*);
HRESULT WINAPI PropVariantCopy(PROPVARIANT*,const PROPVARIANT*);

#define _PROPVARIANT_INIT_DEFINED_
#define PropVariantInit(p) memset((p), 0, sizeof(PROPVARIANT))

#ifndef _STGCREATEPROPSTG_DEFINED_
#define _STGCREATEPROPSTG_DEFINED_
HRESULT WINAPI StgCreatePropStg(IUnknown *, REFFMTID, const CLSID *, DWORD, DWORD, IPropertyStorage **);
HRESULT WINAPI StgOpenPropStg(IUnknown *, REFFMTID, DWORD, DWORD, IPropertyStorage **);
HRESULT WINAPI StgCreatePropSetStg(IStorage *, DWORD, IPropertySetStorage **);
#define CCH_MAX_PROPSTG_NAME 31
HRESULT WINAPI FmtIdToPropStgName(const FMTID *, LPOLESTR);
HRESULT WINAPI PropStgNameToFmtId(const LPOLESTR, FMTID *);
#endif /* _STGCREATEPROPSTG_DEFINED_ */

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER BSTR_UserSize     (ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal  (ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void            __RPC_USER BSTR_UserFree     (ULONG *, BSTR *);
ULONG           __RPC_USER LPSAFEARRAY_UserSize     (ULONG *, ULONG, LPSAFEARRAY *);
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal  (ULONG *, unsigned char *, LPSAFEARRAY *);
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(ULONG *, unsigned char *, LPSAFEARRAY *);
void            __RPC_USER LPSAFEARRAY_UserFree     (ULONG *, LPSAFEARRAY *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __propidl_h__ */

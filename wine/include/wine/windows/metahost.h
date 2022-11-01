/*** Autogenerated by WIDL 6.0 from include/metahost.idl - Do not edit ***/

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

#ifndef __metahost_h__
#define __metahost_h__

/* Forward declarations */

#ifndef __ICLRRuntimeInfo_FWD_DEFINED__
#define __ICLRRuntimeInfo_FWD_DEFINED__
typedef interface ICLRRuntimeInfo ICLRRuntimeInfo;
#ifdef __cplusplus
interface ICLRRuntimeInfo;
#endif /* __cplusplus */
#endif

#ifndef __ICLRMetaHost_FWD_DEFINED__
#define __ICLRMetaHost_FWD_DEFINED__
typedef interface ICLRMetaHost ICLRMetaHost;
#ifdef __cplusplus
interface ICLRMetaHost;
#endif /* __cplusplus */
#endif

#ifndef __ICLRMetaHostPolicy_FWD_DEFINED__
#define __ICLRMetaHostPolicy_FWD_DEFINED__
typedef interface ICLRMetaHostPolicy ICLRMetaHostPolicy;
#ifdef __cplusplus
interface ICLRMetaHostPolicy;
#endif /* __cplusplus */
#endif

#ifndef __CLRMetaHostPolicy_FWD_DEFINED__
#define __CLRMetaHostPolicy_FWD_DEFINED__
#ifdef __cplusplus
typedef class CLRMetaHostPolicy CLRMetaHostPolicy;
#else
typedef struct CLRMetaHostPolicy CLRMetaHostPolicy;
#endif /* defined __cplusplus */
#endif /* defined __CLRMetaHostPolicy_FWD_DEFINED__ */

#ifndef __ICLRDebuggingLibraryProvider_FWD_DEFINED__
#define __ICLRDebuggingLibraryProvider_FWD_DEFINED__
typedef interface ICLRDebuggingLibraryProvider ICLRDebuggingLibraryProvider;
#ifdef __cplusplus
interface ICLRDebuggingLibraryProvider;
#endif /* __cplusplus */
#endif

#ifndef __ICLRDebugging_FWD_DEFINED__
#define __ICLRDebugging_FWD_DEFINED__
typedef interface ICLRDebugging ICLRDebugging;
#ifdef __cplusplus
interface ICLRDebugging;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <unknwn.h>
#include <oaidl.h>
#include <ocidl.h>
#include <mscoree.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef WINE_NO_UNICODE_MACROS
#undef LoadLibrary
#endif
typedef enum __WIDL_metahost_generated_name_0000001D {
    METAHOST_POLICY_HIGHCOMPAT = 0,
    METAHOST_POLICY_APPLY_UPGRADE_POLICY = 0x8,
    METAHOST_POLICY_EMULATE_EXE_LAUNCH = 0x10,
    METAHOST_POLICY_SHOW_ERROR_DIALOG = 0x20,
    METAHOST_POLICY_USE_PROCESS_IMAGE_PATH = 0x40,
    METAHOST_POLICY_ENSURE_SKU_SUPPORTED = 0x80
} METAHOST_POLICY_FLAGS;
typedef enum __WIDL_metahost_generated_name_0000001E {
    CLR_DEBUGGING_MANAGED_EVENT_PENDING = 1
} CLR_DEBUGGING_PROCESS_FLAGS;
typedef struct _CLR_DEBUGGING_VERSION {
    WORD wStructVersion;
    WORD wMajor;
    WORD wMinor;
    WORD wBuild;
    WORD wRevision;
} CLR_DEBUGGING_VERSION;
/*****************************************************************************
 * ICLRRuntimeInfo interface
 */
#ifndef __ICLRRuntimeInfo_INTERFACE_DEFINED__
#define __ICLRRuntimeInfo_INTERFACE_DEFINED__

DEFINE_GUID(IID_ICLRRuntimeInfo, 0xbd39d1d2, 0xba2f, 0x486a, 0x89,0xb0, 0xb4,0xb0,0xcb,0x46,0x68,0x91);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("bd39d1d2-ba2f-486a-89b0-b4b0cb466891")
ICLRRuntimeInfo : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetVersionString(
        LPWSTR pwzBuffer,
        DWORD *pcchBuffer) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetRuntimeDirectory(
        LPWSTR pwzBuffer,
        DWORD *pcchBuffer) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsLoaded(
        HANDLE hndProcess,
        BOOL *pbLoaded) = 0;

    virtual HRESULT STDMETHODCALLTYPE LoadErrorString(
        UINT iResourceID,
        LPWSTR pwzBuffer,
        DWORD *pcchBuffer,
        LONG iLocaleid) = 0;

    virtual HRESULT STDMETHODCALLTYPE LoadLibrary(
        LPCWSTR pwzDllName,
        HMODULE *phndModule) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetProcAddress(
        LPCSTR pszProcName,
        LPVOID *ppProc) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetInterface(
        REFCLSID rclsid,
        REFIID riid,
        LPVOID *ppUnk) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsLoadable(
        BOOL *pbLoadable) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetDefaultStartupFlags(
        DWORD dwStartupFlags,
        LPCWSTR pwzHostConfigFile) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDefaultStartupFlags(
        DWORD *pdwStartupFlags,
        LPWSTR pwzHostConfigFile,
        DWORD *pcchHostConfigFile) = 0;

    virtual HRESULT STDMETHODCALLTYPE BindAsLegacyV2Runtime(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsStarted(
        BOOL *pbStarted,
        DWORD *pdwStartupFlags) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ICLRRuntimeInfo, 0xbd39d1d2, 0xba2f, 0x486a, 0x89,0xb0, 0xb4,0xb0,0xcb,0x46,0x68,0x91)
#endif
#else
typedef struct ICLRRuntimeInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICLRRuntimeInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICLRRuntimeInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICLRRuntimeInfo *This);

    /*** ICLRRuntimeInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetVersionString)(
        ICLRRuntimeInfo *This,
        LPWSTR pwzBuffer,
        DWORD *pcchBuffer);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeDirectory)(
        ICLRRuntimeInfo *This,
        LPWSTR pwzBuffer,
        DWORD *pcchBuffer);

    HRESULT (STDMETHODCALLTYPE *IsLoaded)(
        ICLRRuntimeInfo *This,
        HANDLE hndProcess,
        BOOL *pbLoaded);

    HRESULT (STDMETHODCALLTYPE *LoadErrorString)(
        ICLRRuntimeInfo *This,
        UINT iResourceID,
        LPWSTR pwzBuffer,
        DWORD *pcchBuffer,
        LONG iLocaleid);

    HRESULT (STDMETHODCALLTYPE *LoadLibrary)(
        ICLRRuntimeInfo *This,
        LPCWSTR pwzDllName,
        HMODULE *phndModule);

    HRESULT (STDMETHODCALLTYPE *GetProcAddress)(
        ICLRRuntimeInfo *This,
        LPCSTR pszProcName,
        LPVOID *ppProc);

    HRESULT (STDMETHODCALLTYPE *GetInterface)(
        ICLRRuntimeInfo *This,
        REFCLSID rclsid,
        REFIID riid,
        LPVOID *ppUnk);

    HRESULT (STDMETHODCALLTYPE *IsLoadable)(
        ICLRRuntimeInfo *This,
        BOOL *pbLoadable);

    HRESULT (STDMETHODCALLTYPE *SetDefaultStartupFlags)(
        ICLRRuntimeInfo *This,
        DWORD dwStartupFlags,
        LPCWSTR pwzHostConfigFile);

    HRESULT (STDMETHODCALLTYPE *GetDefaultStartupFlags)(
        ICLRRuntimeInfo *This,
        DWORD *pdwStartupFlags,
        LPWSTR pwzHostConfigFile,
        DWORD *pcchHostConfigFile);

    HRESULT (STDMETHODCALLTYPE *BindAsLegacyV2Runtime)(
        ICLRRuntimeInfo *This);

    HRESULT (STDMETHODCALLTYPE *IsStarted)(
        ICLRRuntimeInfo *This,
        BOOL *pbStarted,
        DWORD *pdwStartupFlags);

    END_INTERFACE
} ICLRRuntimeInfoVtbl;

interface ICLRRuntimeInfo {
    CONST_VTBL ICLRRuntimeInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ICLRRuntimeInfo_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ICLRRuntimeInfo_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ICLRRuntimeInfo_Release(This) (This)->lpVtbl->Release(This)
/*** ICLRRuntimeInfo methods ***/
#define ICLRRuntimeInfo_GetVersionString(This,pwzBuffer,pcchBuffer) (This)->lpVtbl->GetVersionString(This,pwzBuffer,pcchBuffer)
#define ICLRRuntimeInfo_GetRuntimeDirectory(This,pwzBuffer,pcchBuffer) (This)->lpVtbl->GetRuntimeDirectory(This,pwzBuffer,pcchBuffer)
#define ICLRRuntimeInfo_IsLoaded(This,hndProcess,pbLoaded) (This)->lpVtbl->IsLoaded(This,hndProcess,pbLoaded)
#define ICLRRuntimeInfo_LoadErrorString(This,iResourceID,pwzBuffer,pcchBuffer,iLocaleid) (This)->lpVtbl->LoadErrorString(This,iResourceID,pwzBuffer,pcchBuffer,iLocaleid)
#define ICLRRuntimeInfo_LoadLibrary(This,pwzDllName,phndModule) (This)->lpVtbl->LoadLibrary(This,pwzDllName,phndModule)
#define ICLRRuntimeInfo_GetProcAddress(This,pszProcName,ppProc) (This)->lpVtbl->GetProcAddress(This,pszProcName,ppProc)
#define ICLRRuntimeInfo_GetInterface(This,rclsid,riid,ppUnk) (This)->lpVtbl->GetInterface(This,rclsid,riid,ppUnk)
#define ICLRRuntimeInfo_IsLoadable(This,pbLoadable) (This)->lpVtbl->IsLoadable(This,pbLoadable)
#define ICLRRuntimeInfo_SetDefaultStartupFlags(This,dwStartupFlags,pwzHostConfigFile) (This)->lpVtbl->SetDefaultStartupFlags(This,dwStartupFlags,pwzHostConfigFile)
#define ICLRRuntimeInfo_GetDefaultStartupFlags(This,pdwStartupFlags,pwzHostConfigFile,pcchHostConfigFile) (This)->lpVtbl->GetDefaultStartupFlags(This,pdwStartupFlags,pwzHostConfigFile,pcchHostConfigFile)
#define ICLRRuntimeInfo_BindAsLegacyV2Runtime(This) (This)->lpVtbl->BindAsLegacyV2Runtime(This)
#define ICLRRuntimeInfo_IsStarted(This,pbStarted,pdwStartupFlags) (This)->lpVtbl->IsStarted(This,pbStarted,pdwStartupFlags)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ICLRRuntimeInfo_QueryInterface(ICLRRuntimeInfo* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ICLRRuntimeInfo_AddRef(ICLRRuntimeInfo* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ICLRRuntimeInfo_Release(ICLRRuntimeInfo* This) {
    return This->lpVtbl->Release(This);
}
/*** ICLRRuntimeInfo methods ***/
static FORCEINLINE HRESULT ICLRRuntimeInfo_GetVersionString(ICLRRuntimeInfo* This,LPWSTR pwzBuffer,DWORD *pcchBuffer) {
    return This->lpVtbl->GetVersionString(This,pwzBuffer,pcchBuffer);
}
static FORCEINLINE HRESULT ICLRRuntimeInfo_GetRuntimeDirectory(ICLRRuntimeInfo* This,LPWSTR pwzBuffer,DWORD *pcchBuffer) {
    return This->lpVtbl->GetRuntimeDirectory(This,pwzBuffer,pcchBuffer);
}
static FORCEINLINE HRESULT ICLRRuntimeInfo_IsLoaded(ICLRRuntimeInfo* This,HANDLE hndProcess,BOOL *pbLoaded) {
    return This->lpVtbl->IsLoaded(This,hndProcess,pbLoaded);
}
static FORCEINLINE HRESULT ICLRRuntimeInfo_LoadErrorString(ICLRRuntimeInfo* This,UINT iResourceID,LPWSTR pwzBuffer,DWORD *pcchBuffer,LONG iLocaleid) {
    return This->lpVtbl->LoadErrorString(This,iResourceID,pwzBuffer,pcchBuffer,iLocaleid);
}
static FORCEINLINE HRESULT ICLRRuntimeInfo_LoadLibrary(ICLRRuntimeInfo* This,LPCWSTR pwzDllName,HMODULE *phndModule) {
    return This->lpVtbl->LoadLibrary(This,pwzDllName,phndModule);
}
static FORCEINLINE HRESULT ICLRRuntimeInfo_GetProcAddress(ICLRRuntimeInfo* This,LPCSTR pszProcName,LPVOID *ppProc) {
    return This->lpVtbl->GetProcAddress(This,pszProcName,ppProc);
}
static FORCEINLINE HRESULT ICLRRuntimeInfo_GetInterface(ICLRRuntimeInfo* This,REFCLSID rclsid,REFIID riid,LPVOID *ppUnk) {
    return This->lpVtbl->GetInterface(This,rclsid,riid,ppUnk);
}
static FORCEINLINE HRESULT ICLRRuntimeInfo_IsLoadable(ICLRRuntimeInfo* This,BOOL *pbLoadable) {
    return This->lpVtbl->IsLoadable(This,pbLoadable);
}
static FORCEINLINE HRESULT ICLRRuntimeInfo_SetDefaultStartupFlags(ICLRRuntimeInfo* This,DWORD dwStartupFlags,LPCWSTR pwzHostConfigFile) {
    return This->lpVtbl->SetDefaultStartupFlags(This,dwStartupFlags,pwzHostConfigFile);
}
static FORCEINLINE HRESULT ICLRRuntimeInfo_GetDefaultStartupFlags(ICLRRuntimeInfo* This,DWORD *pdwStartupFlags,LPWSTR pwzHostConfigFile,DWORD *pcchHostConfigFile) {
    return This->lpVtbl->GetDefaultStartupFlags(This,pdwStartupFlags,pwzHostConfigFile,pcchHostConfigFile);
}
static FORCEINLINE HRESULT ICLRRuntimeInfo_BindAsLegacyV2Runtime(ICLRRuntimeInfo* This) {
    return This->lpVtbl->BindAsLegacyV2Runtime(This);
}
static FORCEINLINE HRESULT ICLRRuntimeInfo_IsStarted(ICLRRuntimeInfo* This,BOOL *pbStarted,DWORD *pdwStartupFlags) {
    return This->lpVtbl->IsStarted(This,pbStarted,pdwStartupFlags);
}
#endif
#endif

#endif


#endif  /* __ICLRRuntimeInfo_INTERFACE_DEFINED__ */

typedef HRESULT (__stdcall *CallbackThreadSetFnPtr)(void);
typedef HRESULT (__stdcall *CallbackThreadUnsetFnPtr)(void);
typedef void (__stdcall *RuntimeLoadedCallbackFnPtr)(ICLRRuntimeInfo *pRuntimeInfo,CallbackThreadSetFnPtr pfnCallbackThreadSet,CallbackThreadUnsetFnPtr pfnCallbackThreadUnset);
DEFINE_GUID(CLSID_CLRDebuggingLegacy, 0xDF8395B5,0xA4BA,0x450b,0xA7,0x7C,0xA9,0xA4,0x77,0x62,0xC5,0x20);
DEFINE_GUID(CLSID_CLRMetaHost, 0x9280188d,0x0e8e,0x4867,0xb3,0x0c,0x7f,0xa8,0x38,0x84,0xe8,0xde);
/*****************************************************************************
 * ICLRMetaHost interface
 */
#ifndef __ICLRMetaHost_INTERFACE_DEFINED__
#define __ICLRMetaHost_INTERFACE_DEFINED__

DEFINE_GUID(IID_ICLRMetaHost, 0xd332db9e, 0xb9b3, 0x4125, 0x82,0x07, 0xa1,0x48,0x84,0xf5,0x32,0x16);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("d332db9e-b9b3-4125-8207-a14884f53216")
ICLRMetaHost : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetRuntime(
        LPCWSTR pwzVersion,
        REFIID iid,
        LPVOID *ppRuntime) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetVersionFromFile(
        LPCWSTR pwzFilePath,
        LPWSTR pwzBuffer,
        DWORD *pcchBuffer) = 0;

    virtual HRESULT STDMETHODCALLTYPE EnumerateInstalledRuntimes(
        IEnumUnknown **ppEnumerator) = 0;

    virtual HRESULT STDMETHODCALLTYPE EnumerateLoadedRuntimes(
        HANDLE hndProcess,
        IEnumUnknown **ppEnumerator) = 0;

    virtual HRESULT STDMETHODCALLTYPE RequestRuntimeLoadedNotification(
        RuntimeLoadedCallbackFnPtr pCallbackFunction) = 0;

    virtual HRESULT STDMETHODCALLTYPE QueryLegacyV2RuntimeBinding(
        REFIID riid,
        LPVOID *ppUnk) = 0;

    virtual HRESULT STDMETHODCALLTYPE ExitProcess(
        INT32 iExitCode) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ICLRMetaHost, 0xd332db9e, 0xb9b3, 0x4125, 0x82,0x07, 0xa1,0x48,0x84,0xf5,0x32,0x16)
#endif
#else
typedef struct ICLRMetaHostVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICLRMetaHost *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICLRMetaHost *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICLRMetaHost *This);

    /*** ICLRMetaHost methods ***/
    HRESULT (STDMETHODCALLTYPE *GetRuntime)(
        ICLRMetaHost *This,
        LPCWSTR pwzVersion,
        REFIID iid,
        LPVOID *ppRuntime);

    HRESULT (STDMETHODCALLTYPE *GetVersionFromFile)(
        ICLRMetaHost *This,
        LPCWSTR pwzFilePath,
        LPWSTR pwzBuffer,
        DWORD *pcchBuffer);

    HRESULT (STDMETHODCALLTYPE *EnumerateInstalledRuntimes)(
        ICLRMetaHost *This,
        IEnumUnknown **ppEnumerator);

    HRESULT (STDMETHODCALLTYPE *EnumerateLoadedRuntimes)(
        ICLRMetaHost *This,
        HANDLE hndProcess,
        IEnumUnknown **ppEnumerator);

    HRESULT (STDMETHODCALLTYPE *RequestRuntimeLoadedNotification)(
        ICLRMetaHost *This,
        RuntimeLoadedCallbackFnPtr pCallbackFunction);

    HRESULT (STDMETHODCALLTYPE *QueryLegacyV2RuntimeBinding)(
        ICLRMetaHost *This,
        REFIID riid,
        LPVOID *ppUnk);

    HRESULT (STDMETHODCALLTYPE *ExitProcess)(
        ICLRMetaHost *This,
        INT32 iExitCode);

    END_INTERFACE
} ICLRMetaHostVtbl;

interface ICLRMetaHost {
    CONST_VTBL ICLRMetaHostVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ICLRMetaHost_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ICLRMetaHost_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ICLRMetaHost_Release(This) (This)->lpVtbl->Release(This)
/*** ICLRMetaHost methods ***/
#define ICLRMetaHost_GetRuntime(This,pwzVersion,iid,ppRuntime) (This)->lpVtbl->GetRuntime(This,pwzVersion,iid,ppRuntime)
#define ICLRMetaHost_GetVersionFromFile(This,pwzFilePath,pwzBuffer,pcchBuffer) (This)->lpVtbl->GetVersionFromFile(This,pwzFilePath,pwzBuffer,pcchBuffer)
#define ICLRMetaHost_EnumerateInstalledRuntimes(This,ppEnumerator) (This)->lpVtbl->EnumerateInstalledRuntimes(This,ppEnumerator)
#define ICLRMetaHost_EnumerateLoadedRuntimes(This,hndProcess,ppEnumerator) (This)->lpVtbl->EnumerateLoadedRuntimes(This,hndProcess,ppEnumerator)
#define ICLRMetaHost_RequestRuntimeLoadedNotification(This,pCallbackFunction) (This)->lpVtbl->RequestRuntimeLoadedNotification(This,pCallbackFunction)
#define ICLRMetaHost_QueryLegacyV2RuntimeBinding(This,riid,ppUnk) (This)->lpVtbl->QueryLegacyV2RuntimeBinding(This,riid,ppUnk)
#define ICLRMetaHost_ExitProcess(This,iExitCode) (This)->lpVtbl->ExitProcess(This,iExitCode)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ICLRMetaHost_QueryInterface(ICLRMetaHost* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ICLRMetaHost_AddRef(ICLRMetaHost* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ICLRMetaHost_Release(ICLRMetaHost* This) {
    return This->lpVtbl->Release(This);
}
/*** ICLRMetaHost methods ***/
static FORCEINLINE HRESULT ICLRMetaHost_GetRuntime(ICLRMetaHost* This,LPCWSTR pwzVersion,REFIID iid,LPVOID *ppRuntime) {
    return This->lpVtbl->GetRuntime(This,pwzVersion,iid,ppRuntime);
}
static FORCEINLINE HRESULT ICLRMetaHost_GetVersionFromFile(ICLRMetaHost* This,LPCWSTR pwzFilePath,LPWSTR pwzBuffer,DWORD *pcchBuffer) {
    return This->lpVtbl->GetVersionFromFile(This,pwzFilePath,pwzBuffer,pcchBuffer);
}
static FORCEINLINE HRESULT ICLRMetaHost_EnumerateInstalledRuntimes(ICLRMetaHost* This,IEnumUnknown **ppEnumerator) {
    return This->lpVtbl->EnumerateInstalledRuntimes(This,ppEnumerator);
}
static FORCEINLINE HRESULT ICLRMetaHost_EnumerateLoadedRuntimes(ICLRMetaHost* This,HANDLE hndProcess,IEnumUnknown **ppEnumerator) {
    return This->lpVtbl->EnumerateLoadedRuntimes(This,hndProcess,ppEnumerator);
}
static FORCEINLINE HRESULT ICLRMetaHost_RequestRuntimeLoadedNotification(ICLRMetaHost* This,RuntimeLoadedCallbackFnPtr pCallbackFunction) {
    return This->lpVtbl->RequestRuntimeLoadedNotification(This,pCallbackFunction);
}
static FORCEINLINE HRESULT ICLRMetaHost_QueryLegacyV2RuntimeBinding(ICLRMetaHost* This,REFIID riid,LPVOID *ppUnk) {
    return This->lpVtbl->QueryLegacyV2RuntimeBinding(This,riid,ppUnk);
}
static FORCEINLINE HRESULT ICLRMetaHost_ExitProcess(ICLRMetaHost* This,INT32 iExitCode) {
    return This->lpVtbl->ExitProcess(This,iExitCode);
}
#endif
#endif

#endif


#endif  /* __ICLRMetaHost_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ICLRMetaHostPolicy interface
 */
#ifndef __ICLRMetaHostPolicy_INTERFACE_DEFINED__
#define __ICLRMetaHostPolicy_INTERFACE_DEFINED__

DEFINE_GUID(IID_ICLRMetaHostPolicy, 0xe2190695, 0x77b2, 0x492e, 0x8e,0x14, 0xc4,0xb3,0xa7,0xfd,0xd5,0x93);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("e2190695-77b2-492e-8e14-c4b3a7fdd593")
ICLRMetaHostPolicy : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetRequestedRuntime(
        METAHOST_POLICY_FLAGS dwPolicyFlags,
        LPCWSTR pwzBinary,
        IStream *pCfgStream,
        LPWSTR pwzVersion,
        DWORD *pcchVersion,
        LPWSTR pwzImageVersion,
        DWORD *pcchImageVersion,
        DWORD *pdwConfigFlags,
        REFIID riid,
        LPVOID *ppRuntime) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ICLRMetaHostPolicy, 0xe2190695, 0x77b2, 0x492e, 0x8e,0x14, 0xc4,0xb3,0xa7,0xfd,0xd5,0x93)
#endif
#else
typedef struct ICLRMetaHostPolicyVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICLRMetaHostPolicy *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICLRMetaHostPolicy *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICLRMetaHostPolicy *This);

    /*** ICLRMetaHostPolicy methods ***/
    HRESULT (STDMETHODCALLTYPE *GetRequestedRuntime)(
        ICLRMetaHostPolicy *This,
        METAHOST_POLICY_FLAGS dwPolicyFlags,
        LPCWSTR pwzBinary,
        IStream *pCfgStream,
        LPWSTR pwzVersion,
        DWORD *pcchVersion,
        LPWSTR pwzImageVersion,
        DWORD *pcchImageVersion,
        DWORD *pdwConfigFlags,
        REFIID riid,
        LPVOID *ppRuntime);

    END_INTERFACE
} ICLRMetaHostPolicyVtbl;

interface ICLRMetaHostPolicy {
    CONST_VTBL ICLRMetaHostPolicyVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ICLRMetaHostPolicy_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ICLRMetaHostPolicy_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ICLRMetaHostPolicy_Release(This) (This)->lpVtbl->Release(This)
/*** ICLRMetaHostPolicy methods ***/
#define ICLRMetaHostPolicy_GetRequestedRuntime(This,dwPolicyFlags,pwzBinary,pCfgStream,pwzVersion,pcchVersion,pwzImageVersion,pcchImageVersion,pdwConfigFlags,riid,ppRuntime) (This)->lpVtbl->GetRequestedRuntime(This,dwPolicyFlags,pwzBinary,pCfgStream,pwzVersion,pcchVersion,pwzImageVersion,pcchImageVersion,pdwConfigFlags,riid,ppRuntime)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ICLRMetaHostPolicy_QueryInterface(ICLRMetaHostPolicy* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ICLRMetaHostPolicy_AddRef(ICLRMetaHostPolicy* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ICLRMetaHostPolicy_Release(ICLRMetaHostPolicy* This) {
    return This->lpVtbl->Release(This);
}
/*** ICLRMetaHostPolicy methods ***/
static FORCEINLINE HRESULT ICLRMetaHostPolicy_GetRequestedRuntime(ICLRMetaHostPolicy* This,METAHOST_POLICY_FLAGS dwPolicyFlags,LPCWSTR pwzBinary,IStream *pCfgStream,LPWSTR pwzVersion,DWORD *pcchVersion,LPWSTR pwzImageVersion,DWORD *pcchImageVersion,DWORD *pdwConfigFlags,REFIID riid,LPVOID *ppRuntime) {
    return This->lpVtbl->GetRequestedRuntime(This,dwPolicyFlags,pwzBinary,pCfgStream,pwzVersion,pcchVersion,pwzImageVersion,pcchImageVersion,pdwConfigFlags,riid,ppRuntime);
}
#endif
#endif

#endif


#endif  /* __ICLRMetaHostPolicy_INTERFACE_DEFINED__ */

/*****************************************************************************
 * CLRMetaHostPolicy coclass
 */

DEFINE_GUID(CLSID_CLRMetaHostPolicy, 0x2ebcd49a, 0x1b47, 0x4a61, 0xb1,0x3a, 0x4a,0x03,0x70,0x1e,0x59,0x4b);

#ifdef __cplusplus
class DECLSPEC_UUID("2ebcd49a-1b47-4a61-b13a-4a03701e594b") CLRMetaHostPolicy;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(CLRMetaHostPolicy, 0x2ebcd49a, 0x1b47, 0x4a61, 0xb1,0x3a, 0x4a,0x03,0x70,0x1e,0x59,0x4b)
#endif
#endif

/*****************************************************************************
 * ICLRDebuggingLibraryProvider interface
 */
#ifndef __ICLRDebuggingLibraryProvider_INTERFACE_DEFINED__
#define __ICLRDebuggingLibraryProvider_INTERFACE_DEFINED__

DEFINE_GUID(IID_ICLRDebuggingLibraryProvider, 0x3151c08d, 0x4d09, 0x4f9b, 0x88,0x38, 0x28,0x80,0xbf,0x18,0xfe,0x51);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("3151c08d-4d09-4f9b-8838-2880bf18fe51")
ICLRDebuggingLibraryProvider : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE ProvideLibrary(
        const WCHAR *pwszFileName,
        DWORD dwTimestamp,
        DWORD dwSizeOfImage,
        HMODULE *phModule) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ICLRDebuggingLibraryProvider, 0x3151c08d, 0x4d09, 0x4f9b, 0x88,0x38, 0x28,0x80,0xbf,0x18,0xfe,0x51)
#endif
#else
typedef struct ICLRDebuggingLibraryProviderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICLRDebuggingLibraryProvider *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICLRDebuggingLibraryProvider *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICLRDebuggingLibraryProvider *This);

    /*** ICLRDebuggingLibraryProvider methods ***/
    HRESULT (STDMETHODCALLTYPE *ProvideLibrary)(
        ICLRDebuggingLibraryProvider *This,
        const WCHAR *pwszFileName,
        DWORD dwTimestamp,
        DWORD dwSizeOfImage,
        HMODULE *phModule);

    END_INTERFACE
} ICLRDebuggingLibraryProviderVtbl;

interface ICLRDebuggingLibraryProvider {
    CONST_VTBL ICLRDebuggingLibraryProviderVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ICLRDebuggingLibraryProvider_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ICLRDebuggingLibraryProvider_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ICLRDebuggingLibraryProvider_Release(This) (This)->lpVtbl->Release(This)
/*** ICLRDebuggingLibraryProvider methods ***/
#define ICLRDebuggingLibraryProvider_ProvideLibrary(This,pwszFileName,dwTimestamp,dwSizeOfImage,phModule) (This)->lpVtbl->ProvideLibrary(This,pwszFileName,dwTimestamp,dwSizeOfImage,phModule)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ICLRDebuggingLibraryProvider_QueryInterface(ICLRDebuggingLibraryProvider* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ICLRDebuggingLibraryProvider_AddRef(ICLRDebuggingLibraryProvider* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ICLRDebuggingLibraryProvider_Release(ICLRDebuggingLibraryProvider* This) {
    return This->lpVtbl->Release(This);
}
/*** ICLRDebuggingLibraryProvider methods ***/
static FORCEINLINE HRESULT ICLRDebuggingLibraryProvider_ProvideLibrary(ICLRDebuggingLibraryProvider* This,const WCHAR *pwszFileName,DWORD dwTimestamp,DWORD dwSizeOfImage,HMODULE *phModule) {
    return This->lpVtbl->ProvideLibrary(This,pwszFileName,dwTimestamp,dwSizeOfImage,phModule);
}
#endif
#endif

#endif


#endif  /* __ICLRDebuggingLibraryProvider_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ICLRDebugging interface
 */
#ifndef __ICLRDebugging_INTERFACE_DEFINED__
#define __ICLRDebugging_INTERFACE_DEFINED__

DEFINE_GUID(IID_ICLRDebugging, 0xd28f3c5a, 0x9634, 0x4206, 0xa5,0x09, 0x47,0x75,0x52,0xee,0xfb,0x10);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("d28f3c5a-9634-4206-a509-477552eefb10")
ICLRDebugging : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE OpenVirtualProcess(
        ULONG64 moduleBaseAddress,
        IUnknown *pDataTarget,
        ICLRDebuggingLibraryProvider *pLibraryProvider,
        CLR_DEBUGGING_VERSION *pMaxDebuggerSupportedVersion,
        REFIID riidProcess,
        IUnknown **ppProcess,
        CLR_DEBUGGING_VERSION *pVersion,
        CLR_DEBUGGING_PROCESS_FLAGS *pdwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE CanUnloadNow(
        HMODULE hModule) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ICLRDebugging, 0xd28f3c5a, 0x9634, 0x4206, 0xa5,0x09, 0x47,0x75,0x52,0xee,0xfb,0x10)
#endif
#else
typedef struct ICLRDebuggingVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ICLRDebugging *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ICLRDebugging *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ICLRDebugging *This);

    /*** ICLRDebugging methods ***/
    HRESULT (STDMETHODCALLTYPE *OpenVirtualProcess)(
        ICLRDebugging *This,
        ULONG64 moduleBaseAddress,
        IUnknown *pDataTarget,
        ICLRDebuggingLibraryProvider *pLibraryProvider,
        CLR_DEBUGGING_VERSION *pMaxDebuggerSupportedVersion,
        REFIID riidProcess,
        IUnknown **ppProcess,
        CLR_DEBUGGING_VERSION *pVersion,
        CLR_DEBUGGING_PROCESS_FLAGS *pdwFlags);

    HRESULT (STDMETHODCALLTYPE *CanUnloadNow)(
        ICLRDebugging *This,
        HMODULE hModule);

    END_INTERFACE
} ICLRDebuggingVtbl;

interface ICLRDebugging {
    CONST_VTBL ICLRDebuggingVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ICLRDebugging_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ICLRDebugging_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ICLRDebugging_Release(This) (This)->lpVtbl->Release(This)
/*** ICLRDebugging methods ***/
#define ICLRDebugging_OpenVirtualProcess(This,moduleBaseAddress,pDataTarget,pLibraryProvider,pMaxDebuggerSupportedVersion,riidProcess,ppProcess,pVersion,pdwFlags) (This)->lpVtbl->OpenVirtualProcess(This,moduleBaseAddress,pDataTarget,pLibraryProvider,pMaxDebuggerSupportedVersion,riidProcess,ppProcess,pVersion,pdwFlags)
#define ICLRDebugging_CanUnloadNow(This,hModule) (This)->lpVtbl->CanUnloadNow(This,hModule)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ICLRDebugging_QueryInterface(ICLRDebugging* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ICLRDebugging_AddRef(ICLRDebugging* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ICLRDebugging_Release(ICLRDebugging* This) {
    return This->lpVtbl->Release(This);
}
/*** ICLRDebugging methods ***/
static FORCEINLINE HRESULT ICLRDebugging_OpenVirtualProcess(ICLRDebugging* This,ULONG64 moduleBaseAddress,IUnknown *pDataTarget,ICLRDebuggingLibraryProvider *pLibraryProvider,CLR_DEBUGGING_VERSION *pMaxDebuggerSupportedVersion,REFIID riidProcess,IUnknown **ppProcess,CLR_DEBUGGING_VERSION *pVersion,CLR_DEBUGGING_PROCESS_FLAGS *pdwFlags) {
    return This->lpVtbl->OpenVirtualProcess(This,moduleBaseAddress,pDataTarget,pLibraryProvider,pMaxDebuggerSupportedVersion,riidProcess,ppProcess,pVersion,pdwFlags);
}
static FORCEINLINE HRESULT ICLRDebugging_CanUnloadNow(ICLRDebugging* This,HMODULE hModule) {
    return This->lpVtbl->CanUnloadNow(This,hModule);
}
#endif
#endif

#endif


#endif  /* __ICLRDebugging_INTERFACE_DEFINED__ */

HRESULT WINAPI CLRCreateInstance(REFCLSID clsid, REFIID riid, LPVOID *ppInterface);
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __metahost_h__ */

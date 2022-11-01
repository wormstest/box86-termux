/*** Autogenerated by WIDL 6.0 from include/wmsbuffer.idl - Do not edit ***/

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

#ifndef __wmsbuffer_h__
#define __wmsbuffer_h__

/* Forward declarations */

#ifndef __INSSBuffer_FWD_DEFINED__
#define __INSSBuffer_FWD_DEFINED__
typedef interface INSSBuffer INSSBuffer;
#ifdef __cplusplus
interface INSSBuffer;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <objidl.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * INSSBuffer interface
 */
#ifndef __INSSBuffer_INTERFACE_DEFINED__
#define __INSSBuffer_INTERFACE_DEFINED__

DEFINE_GUID(IID_INSSBuffer, 0xe1cd3524, 0x03d7, 0x11d2, 0x9e,0xed, 0x00,0x60,0x97,0xd2,0xd7,0xcf);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("e1cd3524-03d7-11d2-9eed-006097d2d7cf")
INSSBuffer : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetLength(
        DWORD *pdwLength) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetLength(
        DWORD dwLength) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetMaxLength(
        DWORD *pdwLength) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetBuffer(
        BYTE **ppdwBuffer) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetBufferAndLength(
        BYTE **ppdwBuffer,
        DWORD *pdwLength) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INSSBuffer, 0xe1cd3524, 0x03d7, 0x11d2, 0x9e,0xed, 0x00,0x60,0x97,0xd2,0xd7,0xcf)
#endif
#else
typedef struct INSSBufferVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INSSBuffer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INSSBuffer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INSSBuffer *This);

    /*** INSSBuffer methods ***/
    HRESULT (STDMETHODCALLTYPE *GetLength)(
        INSSBuffer *This,
        DWORD *pdwLength);

    HRESULT (STDMETHODCALLTYPE *SetLength)(
        INSSBuffer *This,
        DWORD dwLength);

    HRESULT (STDMETHODCALLTYPE *GetMaxLength)(
        INSSBuffer *This,
        DWORD *pdwLength);

    HRESULT (STDMETHODCALLTYPE *GetBuffer)(
        INSSBuffer *This,
        BYTE **ppdwBuffer);

    HRESULT (STDMETHODCALLTYPE *GetBufferAndLength)(
        INSSBuffer *This,
        BYTE **ppdwBuffer,
        DWORD *pdwLength);

    END_INTERFACE
} INSSBufferVtbl;

interface INSSBuffer {
    CONST_VTBL INSSBufferVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INSSBuffer_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INSSBuffer_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INSSBuffer_Release(This) (This)->lpVtbl->Release(This)
/*** INSSBuffer methods ***/
#define INSSBuffer_GetLength(This,pdwLength) (This)->lpVtbl->GetLength(This,pdwLength)
#define INSSBuffer_SetLength(This,dwLength) (This)->lpVtbl->SetLength(This,dwLength)
#define INSSBuffer_GetMaxLength(This,pdwLength) (This)->lpVtbl->GetMaxLength(This,pdwLength)
#define INSSBuffer_GetBuffer(This,ppdwBuffer) (This)->lpVtbl->GetBuffer(This,ppdwBuffer)
#define INSSBuffer_GetBufferAndLength(This,ppdwBuffer,pdwLength) (This)->lpVtbl->GetBufferAndLength(This,ppdwBuffer,pdwLength)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT INSSBuffer_QueryInterface(INSSBuffer* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG INSSBuffer_AddRef(INSSBuffer* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG INSSBuffer_Release(INSSBuffer* This) {
    return This->lpVtbl->Release(This);
}
/*** INSSBuffer methods ***/
static FORCEINLINE HRESULT INSSBuffer_GetLength(INSSBuffer* This,DWORD *pdwLength) {
    return This->lpVtbl->GetLength(This,pdwLength);
}
static FORCEINLINE HRESULT INSSBuffer_SetLength(INSSBuffer* This,DWORD dwLength) {
    return This->lpVtbl->SetLength(This,dwLength);
}
static FORCEINLINE HRESULT INSSBuffer_GetMaxLength(INSSBuffer* This,DWORD *pdwLength) {
    return This->lpVtbl->GetMaxLength(This,pdwLength);
}
static FORCEINLINE HRESULT INSSBuffer_GetBuffer(INSSBuffer* This,BYTE **ppdwBuffer) {
    return This->lpVtbl->GetBuffer(This,ppdwBuffer);
}
static FORCEINLINE HRESULT INSSBuffer_GetBufferAndLength(INSSBuffer* This,BYTE **ppdwBuffer,DWORD *pdwLength) {
    return This->lpVtbl->GetBufferAndLength(This,ppdwBuffer,pdwLength);
}
#endif
#endif

#endif


#endif  /* __INSSBuffer_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __wmsbuffer_h__ */

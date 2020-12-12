/*** Autogenerated by WIDL 6.0-rc1 from include/spatialaudioclient.idl - Do not edit ***/

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

#ifndef __spatialaudioclient_h__
#define __spatialaudioclient_h__

/* Forward declarations */

#ifndef __IAudioFormatEnumerator_FWD_DEFINED__
#define __IAudioFormatEnumerator_FWD_DEFINED__
typedef interface IAudioFormatEnumerator IAudioFormatEnumerator;
#ifdef __cplusplus
interface IAudioFormatEnumerator;
#endif /* __cplusplus */
#endif

#ifndef __ISpatialAudioClient_FWD_DEFINED__
#define __ISpatialAudioClient_FWD_DEFINED__
typedef interface ISpatialAudioClient ISpatialAudioClient;
#ifdef __cplusplus
interface ISpatialAudioClient;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <unknwn.h>
#include <audioclient.h>
#include <propsys.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum AudioObjectType {
    AudioObjectType_None = 0,
    AudioObjectType_Dynamic = 0x1,
    AudioObjectType_FrontLeft = 0x2,
    AudioObjectType_FrontRight = 0x4,
    AudioObjectType_FrontCenter = 0x8,
    AudioObjectType_LowFrequency = 0x10,
    AudioObjectType_SideLeft = 0x20,
    AudioObjectType_SideRight = 0x40,
    AudioObjectType_BackLeft = 0x80,
    AudioObjectType_BackRight = 0x100,
    AudioObjectType_TopFrontLeft = 0x200,
    AudioObjectType_TopFrontRight = 0x400,
    AudioObjectType_TopBackLeft = 0x800,
    AudioObjectType_TopBackRight = 0x1000,
    AudioObjectType_BottomFrontLeft = 0x2000,
    AudioObjectType_BottomFrontRight = 0x4000,
    AudioObjectType_BottomBackLeft = 0x8000,
    AudioObjectType_BottomBackRight = 0x10000,
    AudioObjectType_BackCenter = 0x20000
} AudioObjectType;
/*****************************************************************************
 * IAudioFormatEnumerator interface
 */
#ifndef __IAudioFormatEnumerator_INTERFACE_DEFINED__
#define __IAudioFormatEnumerator_INTERFACE_DEFINED__

DEFINE_GUID(IID_IAudioFormatEnumerator, 0xdcdaa858, 0x895a, 0x4a22, 0xa5,0xeb, 0x67,0xbd,0xa5,0x06,0x09,0x6d);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("dcdaa858-895a-4a22-a5eb-67bda506096d")
IAudioFormatEnumerator : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetCount(
        UINT32 *count) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetFormat(
        UINT32 index,
        WAVEFORMATEX **format) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAudioFormatEnumerator, 0xdcdaa858, 0x895a, 0x4a22, 0xa5,0xeb, 0x67,0xbd,0xa5,0x06,0x09,0x6d)
#endif
#else
typedef struct IAudioFormatEnumeratorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAudioFormatEnumerator *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAudioFormatEnumerator *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAudioFormatEnumerator *This);

    /*** IAudioFormatEnumerator methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IAudioFormatEnumerator *This,
        UINT32 *count);

    HRESULT (STDMETHODCALLTYPE *GetFormat)(
        IAudioFormatEnumerator *This,
        UINT32 index,
        WAVEFORMATEX **format);

    END_INTERFACE
} IAudioFormatEnumeratorVtbl;

interface IAudioFormatEnumerator {
    CONST_VTBL IAudioFormatEnumeratorVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IAudioFormatEnumerator_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAudioFormatEnumerator_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAudioFormatEnumerator_Release(This) (This)->lpVtbl->Release(This)
/*** IAudioFormatEnumerator methods ***/
#define IAudioFormatEnumerator_GetCount(This,count) (This)->lpVtbl->GetCount(This,count)
#define IAudioFormatEnumerator_GetFormat(This,index,format) (This)->lpVtbl->GetFormat(This,index,format)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IAudioFormatEnumerator_QueryInterface(IAudioFormatEnumerator* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IAudioFormatEnumerator_AddRef(IAudioFormatEnumerator* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IAudioFormatEnumerator_Release(IAudioFormatEnumerator* This) {
    return This->lpVtbl->Release(This);
}
/*** IAudioFormatEnumerator methods ***/
static FORCEINLINE HRESULT IAudioFormatEnumerator_GetCount(IAudioFormatEnumerator* This,UINT32 *count) {
    return This->lpVtbl->GetCount(This,count);
}
static FORCEINLINE HRESULT IAudioFormatEnumerator_GetFormat(IAudioFormatEnumerator* This,UINT32 index,WAVEFORMATEX **format) {
    return This->lpVtbl->GetFormat(This,index,format);
}
#endif
#endif

#endif


#endif  /* __IAudioFormatEnumerator_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISpatialAudioClient interface
 */
#ifndef __ISpatialAudioClient_INTERFACE_DEFINED__
#define __ISpatialAudioClient_INTERFACE_DEFINED__

DEFINE_GUID(IID_ISpatialAudioClient, 0xbbf8e066, 0xaaaa, 0x49be, 0x9a,0x4d, 0xfd,0x2a,0x85,0x8e,0xa2,0x7f);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("bbf8e066-aaaa-49be-9a4d-fd2a858ea27f")
ISpatialAudioClient : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetStaticObjectPosition(
        AudioObjectType type,
        float *x,
        float *y,
        float *z) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetNativeStaticObjectTypeMask(
        AudioObjectType *mask) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetMaxDynamicObjectCount(
        UINT32 *value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSupportedAudioObjectFormatEnumerator(
        IAudioFormatEnumerator **enumerator) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetMaxFrameCount(
        const WAVEFORMATEX *format,
        UINT32 *count) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsAudioObjectFormatSupported(
        const WAVEFORMATEX *format) = 0;

    virtual HRESULT STDMETHODCALLTYPE IsSpatialAudioStreamAvailable(
        REFIID stream_uuid,
        const PROPVARIANT *info) = 0;

    virtual HRESULT STDMETHODCALLTYPE ActivateSpatialAudioStream(
        const PROPVARIANT *params,
        REFIID riid,
        void **stream) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ISpatialAudioClient, 0xbbf8e066, 0xaaaa, 0x49be, 0x9a,0x4d, 0xfd,0x2a,0x85,0x8e,0xa2,0x7f)
#endif
#else
typedef struct ISpatialAudioClientVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpatialAudioClient *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpatialAudioClient *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpatialAudioClient *This);

    /*** ISpatialAudioClient methods ***/
    HRESULT (STDMETHODCALLTYPE *GetStaticObjectPosition)(
        ISpatialAudioClient *This,
        AudioObjectType type,
        float *x,
        float *y,
        float *z);

    HRESULT (STDMETHODCALLTYPE *GetNativeStaticObjectTypeMask)(
        ISpatialAudioClient *This,
        AudioObjectType *mask);

    HRESULT (STDMETHODCALLTYPE *GetMaxDynamicObjectCount)(
        ISpatialAudioClient *This,
        UINT32 *value);

    HRESULT (STDMETHODCALLTYPE *GetSupportedAudioObjectFormatEnumerator)(
        ISpatialAudioClient *This,
        IAudioFormatEnumerator **enumerator);

    HRESULT (STDMETHODCALLTYPE *GetMaxFrameCount)(
        ISpatialAudioClient *This,
        const WAVEFORMATEX *format,
        UINT32 *count);

    HRESULT (STDMETHODCALLTYPE *IsAudioObjectFormatSupported)(
        ISpatialAudioClient *This,
        const WAVEFORMATEX *format);

    HRESULT (STDMETHODCALLTYPE *IsSpatialAudioStreamAvailable)(
        ISpatialAudioClient *This,
        REFIID stream_uuid,
        const PROPVARIANT *info);

    HRESULT (STDMETHODCALLTYPE *ActivateSpatialAudioStream)(
        ISpatialAudioClient *This,
        const PROPVARIANT *params,
        REFIID riid,
        void **stream);

    END_INTERFACE
} ISpatialAudioClientVtbl;

interface ISpatialAudioClient {
    CONST_VTBL ISpatialAudioClientVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ISpatialAudioClient_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ISpatialAudioClient_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ISpatialAudioClient_Release(This) (This)->lpVtbl->Release(This)
/*** ISpatialAudioClient methods ***/
#define ISpatialAudioClient_GetStaticObjectPosition(This,type,x,y,z) (This)->lpVtbl->GetStaticObjectPosition(This,type,x,y,z)
#define ISpatialAudioClient_GetNativeStaticObjectTypeMask(This,mask) (This)->lpVtbl->GetNativeStaticObjectTypeMask(This,mask)
#define ISpatialAudioClient_GetMaxDynamicObjectCount(This,value) (This)->lpVtbl->GetMaxDynamicObjectCount(This,value)
#define ISpatialAudioClient_GetSupportedAudioObjectFormatEnumerator(This,enumerator) (This)->lpVtbl->GetSupportedAudioObjectFormatEnumerator(This,enumerator)
#define ISpatialAudioClient_GetMaxFrameCount(This,format,count) (This)->lpVtbl->GetMaxFrameCount(This,format,count)
#define ISpatialAudioClient_IsAudioObjectFormatSupported(This,format) (This)->lpVtbl->IsAudioObjectFormatSupported(This,format)
#define ISpatialAudioClient_IsSpatialAudioStreamAvailable(This,stream_uuid,info) (This)->lpVtbl->IsSpatialAudioStreamAvailable(This,stream_uuid,info)
#define ISpatialAudioClient_ActivateSpatialAudioStream(This,params,riid,stream) (This)->lpVtbl->ActivateSpatialAudioStream(This,params,riid,stream)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ISpatialAudioClient_QueryInterface(ISpatialAudioClient* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ISpatialAudioClient_AddRef(ISpatialAudioClient* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ISpatialAudioClient_Release(ISpatialAudioClient* This) {
    return This->lpVtbl->Release(This);
}
/*** ISpatialAudioClient methods ***/
static FORCEINLINE HRESULT ISpatialAudioClient_GetStaticObjectPosition(ISpatialAudioClient* This,AudioObjectType type,float *x,float *y,float *z) {
    return This->lpVtbl->GetStaticObjectPosition(This,type,x,y,z);
}
static FORCEINLINE HRESULT ISpatialAudioClient_GetNativeStaticObjectTypeMask(ISpatialAudioClient* This,AudioObjectType *mask) {
    return This->lpVtbl->GetNativeStaticObjectTypeMask(This,mask);
}
static FORCEINLINE HRESULT ISpatialAudioClient_GetMaxDynamicObjectCount(ISpatialAudioClient* This,UINT32 *value) {
    return This->lpVtbl->GetMaxDynamicObjectCount(This,value);
}
static FORCEINLINE HRESULT ISpatialAudioClient_GetSupportedAudioObjectFormatEnumerator(ISpatialAudioClient* This,IAudioFormatEnumerator **enumerator) {
    return This->lpVtbl->GetSupportedAudioObjectFormatEnumerator(This,enumerator);
}
static FORCEINLINE HRESULT ISpatialAudioClient_GetMaxFrameCount(ISpatialAudioClient* This,const WAVEFORMATEX *format,UINT32 *count) {
    return This->lpVtbl->GetMaxFrameCount(This,format,count);
}
static FORCEINLINE HRESULT ISpatialAudioClient_IsAudioObjectFormatSupported(ISpatialAudioClient* This,const WAVEFORMATEX *format) {
    return This->lpVtbl->IsAudioObjectFormatSupported(This,format);
}
static FORCEINLINE HRESULT ISpatialAudioClient_IsSpatialAudioStreamAvailable(ISpatialAudioClient* This,REFIID stream_uuid,const PROPVARIANT *info) {
    return This->lpVtbl->IsSpatialAudioStreamAvailable(This,stream_uuid,info);
}
static FORCEINLINE HRESULT ISpatialAudioClient_ActivateSpatialAudioStream(ISpatialAudioClient* This,const PROPVARIANT *params,REFIID riid,void **stream) {
    return This->lpVtbl->ActivateSpatialAudioStream(This,params,riid,stream);
}
#endif
#endif

#endif


#endif  /* __ISpatialAudioClient_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __spatialaudioclient_h__ */

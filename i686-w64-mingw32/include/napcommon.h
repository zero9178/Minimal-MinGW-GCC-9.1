/*** Autogenerated by WIDL 6.2 from include/napcommon.idl - Do not edit ***/

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

#ifndef __napcommon_h__
#define __napcommon_h__

/* Forward declarations */

#ifndef __INapComponentConfig_FWD_DEFINED__
#define __INapComponentConfig_FWD_DEFINED__
typedef interface INapComponentConfig INapComponentConfig;
#ifdef __cplusplus
interface INapComponentConfig;
#endif /* __cplusplus */
#endif

#ifndef __INapComponentInfo_FWD_DEFINED__
#define __INapComponentInfo_FWD_DEFINED__
typedef interface INapComponentInfo INapComponentInfo;
#ifdef __cplusplus
interface INapComponentInfo;
#endif /* __cplusplus */
#endif

#ifndef __INapComponentConfig2_FWD_DEFINED__
#define __INapComponentConfig2_FWD_DEFINED__
typedef interface INapComponentConfig2 INapComponentConfig2;
#ifdef __cplusplus
interface INapComponentConfig2;
#endif /* __cplusplus */
#endif

#ifndef __INapComponentConfig3_FWD_DEFINED__
#define __INapComponentConfig3_FWD_DEFINED__
typedef interface INapComponentConfig3 INapComponentConfig3;
#ifdef __cplusplus
interface INapComponentConfig3;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <naptypes.h>
#include <unknwn.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
/*****************************************************************************
 * INapComponentConfig interface
 */
#ifndef __INapComponentConfig_INTERFACE_DEFINED__
#define __INapComponentConfig_INTERFACE_DEFINED__

DEFINE_GUID(IID_INapComponentConfig, 0xa9e0af1a, 0x3713, 0x478e, 0xae,0x03, 0x8e,0xdd,0x27,0x2d,0x21,0xfa);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("a9e0af1a-3713-478e-ae03-8edd272d21fa")
INapComponentConfig : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE IsUISupported(
        WINBOOL *isSupported) = 0;

    virtual HRESULT STDMETHODCALLTYPE InvokeUI(
        HWND hwndParent) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetConfig(
        UINT16 *bCount,
        BYTE **data) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetConfig(
        UINT16 bCount,
        BYTE *data) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INapComponentConfig, 0xa9e0af1a, 0x3713, 0x478e, 0xae,0x03, 0x8e,0xdd,0x27,0x2d,0x21,0xfa)
#endif
#else
typedef struct INapComponentConfigVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INapComponentConfig *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INapComponentConfig *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INapComponentConfig *This);

    /*** INapComponentConfig methods ***/
    HRESULT (STDMETHODCALLTYPE *IsUISupported)(
        INapComponentConfig *This,
        WINBOOL *isSupported);

    HRESULT (STDMETHODCALLTYPE *InvokeUI)(
        INapComponentConfig *This,
        HWND hwndParent);

    HRESULT (STDMETHODCALLTYPE *GetConfig)(
        INapComponentConfig *This,
        UINT16 *bCount,
        BYTE **data);

    HRESULT (STDMETHODCALLTYPE *SetConfig)(
        INapComponentConfig *This,
        UINT16 bCount,
        BYTE *data);

    END_INTERFACE
} INapComponentConfigVtbl;

interface INapComponentConfig {
    CONST_VTBL INapComponentConfigVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INapComponentConfig_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INapComponentConfig_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INapComponentConfig_Release(This) (This)->lpVtbl->Release(This)
/*** INapComponentConfig methods ***/
#define INapComponentConfig_IsUISupported(This,isSupported) (This)->lpVtbl->IsUISupported(This,isSupported)
#define INapComponentConfig_InvokeUI(This,hwndParent) (This)->lpVtbl->InvokeUI(This,hwndParent)
#define INapComponentConfig_GetConfig(This,bCount,data) (This)->lpVtbl->GetConfig(This,bCount,data)
#define INapComponentConfig_SetConfig(This,bCount,data) (This)->lpVtbl->SetConfig(This,bCount,data)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT INapComponentConfig_QueryInterface(INapComponentConfig* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG INapComponentConfig_AddRef(INapComponentConfig* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG INapComponentConfig_Release(INapComponentConfig* This) {
    return This->lpVtbl->Release(This);
}
/*** INapComponentConfig methods ***/
static FORCEINLINE HRESULT INapComponentConfig_IsUISupported(INapComponentConfig* This,WINBOOL *isSupported) {
    return This->lpVtbl->IsUISupported(This,isSupported);
}
static FORCEINLINE HRESULT INapComponentConfig_InvokeUI(INapComponentConfig* This,HWND hwndParent) {
    return This->lpVtbl->InvokeUI(This,hwndParent);
}
static FORCEINLINE HRESULT INapComponentConfig_GetConfig(INapComponentConfig* This,UINT16 *bCount,BYTE **data) {
    return This->lpVtbl->GetConfig(This,bCount,data);
}
static FORCEINLINE HRESULT INapComponentConfig_SetConfig(INapComponentConfig* This,UINT16 bCount,BYTE *data) {
    return This->lpVtbl->SetConfig(This,bCount,data);
}
#endif
#endif

#endif


#endif  /* __INapComponentConfig_INTERFACE_DEFINED__ */

/*****************************************************************************
 * INapComponentInfo interface
 */
#ifndef __INapComponentInfo_INTERFACE_DEFINED__
#define __INapComponentInfo_INTERFACE_DEFINED__

DEFINE_GUID(IID_INapComponentInfo, 0xb475f925, 0xe3f7, 0x414c, 0x8c,0x72, 0x1c,0xee,0x64,0xb9,0xd8,0xf6);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("b475f925-e3f7-414c-8c72-1cee64b9d8f6")
INapComponentInfo : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetFriendlyName(
        MessageId *friendlyName) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDescription(
        MessageId *description) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetVendorName(
        MessageId *vendorName) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetVersion(
        MessageId *version) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetIcon(
        CountedString **dllFilePath,
        UINT32 *iconResourceId) = 0;

    virtual HRESULT STDMETHODCALLTYPE ConvertErrorCodeToMessageId(
        HRESULT errorCode,
        MessageId *msgId) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetLocalizedString(
        MessageId msgId,
        CountedString **string) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INapComponentInfo, 0xb475f925, 0xe3f7, 0x414c, 0x8c,0x72, 0x1c,0xee,0x64,0xb9,0xd8,0xf6)
#endif
#else
typedef struct INapComponentInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INapComponentInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INapComponentInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INapComponentInfo *This);

    /*** INapComponentInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetFriendlyName)(
        INapComponentInfo *This,
        MessageId *friendlyName);

    HRESULT (STDMETHODCALLTYPE *GetDescription)(
        INapComponentInfo *This,
        MessageId *description);

    HRESULT (STDMETHODCALLTYPE *GetVendorName)(
        INapComponentInfo *This,
        MessageId *vendorName);

    HRESULT (STDMETHODCALLTYPE *GetVersion)(
        INapComponentInfo *This,
        MessageId *version);

    HRESULT (STDMETHODCALLTYPE *GetIcon)(
        INapComponentInfo *This,
        CountedString **dllFilePath,
        UINT32 *iconResourceId);

    HRESULT (STDMETHODCALLTYPE *ConvertErrorCodeToMessageId)(
        INapComponentInfo *This,
        HRESULT errorCode,
        MessageId *msgId);

    HRESULT (STDMETHODCALLTYPE *GetLocalizedString)(
        INapComponentInfo *This,
        MessageId msgId,
        CountedString **string);

    END_INTERFACE
} INapComponentInfoVtbl;

interface INapComponentInfo {
    CONST_VTBL INapComponentInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INapComponentInfo_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INapComponentInfo_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INapComponentInfo_Release(This) (This)->lpVtbl->Release(This)
/*** INapComponentInfo methods ***/
#define INapComponentInfo_GetFriendlyName(This,friendlyName) (This)->lpVtbl->GetFriendlyName(This,friendlyName)
#define INapComponentInfo_GetDescription(This,description) (This)->lpVtbl->GetDescription(This,description)
#define INapComponentInfo_GetVendorName(This,vendorName) (This)->lpVtbl->GetVendorName(This,vendorName)
#define INapComponentInfo_GetVersion(This,version) (This)->lpVtbl->GetVersion(This,version)
#define INapComponentInfo_GetIcon(This,dllFilePath,iconResourceId) (This)->lpVtbl->GetIcon(This,dllFilePath,iconResourceId)
#define INapComponentInfo_ConvertErrorCodeToMessageId(This,errorCode,msgId) (This)->lpVtbl->ConvertErrorCodeToMessageId(This,errorCode,msgId)
#define INapComponentInfo_GetLocalizedString(This,msgId,string) (This)->lpVtbl->GetLocalizedString(This,msgId,string)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT INapComponentInfo_QueryInterface(INapComponentInfo* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG INapComponentInfo_AddRef(INapComponentInfo* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG INapComponentInfo_Release(INapComponentInfo* This) {
    return This->lpVtbl->Release(This);
}
/*** INapComponentInfo methods ***/
static FORCEINLINE HRESULT INapComponentInfo_GetFriendlyName(INapComponentInfo* This,MessageId *friendlyName) {
    return This->lpVtbl->GetFriendlyName(This,friendlyName);
}
static FORCEINLINE HRESULT INapComponentInfo_GetDescription(INapComponentInfo* This,MessageId *description) {
    return This->lpVtbl->GetDescription(This,description);
}
static FORCEINLINE HRESULT INapComponentInfo_GetVendorName(INapComponentInfo* This,MessageId *vendorName) {
    return This->lpVtbl->GetVendorName(This,vendorName);
}
static FORCEINLINE HRESULT INapComponentInfo_GetVersion(INapComponentInfo* This,MessageId *version) {
    return This->lpVtbl->GetVersion(This,version);
}
static FORCEINLINE HRESULT INapComponentInfo_GetIcon(INapComponentInfo* This,CountedString **dllFilePath,UINT32 *iconResourceId) {
    return This->lpVtbl->GetIcon(This,dllFilePath,iconResourceId);
}
static FORCEINLINE HRESULT INapComponentInfo_ConvertErrorCodeToMessageId(INapComponentInfo* This,HRESULT errorCode,MessageId *msgId) {
    return This->lpVtbl->ConvertErrorCodeToMessageId(This,errorCode,msgId);
}
static FORCEINLINE HRESULT INapComponentInfo_GetLocalizedString(INapComponentInfo* This,MessageId msgId,CountedString **string) {
    return This->lpVtbl->GetLocalizedString(This,msgId,string);
}
#endif
#endif

#endif


#endif  /* __INapComponentInfo_INTERFACE_DEFINED__ */

/*****************************************************************************
 * INapComponentConfig2 interface
 */
#ifndef __INapComponentConfig2_INTERFACE_DEFINED__
#define __INapComponentConfig2_INTERFACE_DEFINED__

DEFINE_GUID(IID_INapComponentConfig2, 0x47cbdb9e, 0x1972, 0x4f5e, 0xbd,0x3c, 0x5e,0xb6,0x23,0x06,0x14,0xb5);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("47cbdb9e-1972-4f5e-bd3c-5eb6230614b5")
INapComponentConfig2 : public INapComponentConfig
{
    virtual HRESULT STDMETHODCALLTYPE IsRemoteConfigSupported(
        WINBOOL *isSupported,
        UINT8 *remoteConfigType) = 0;

    virtual HRESULT STDMETHODCALLTYPE InvokeUIForMachine(
        HWND hwndParent,
        CountedString *machineName) = 0;

    virtual HRESULT STDMETHODCALLTYPE InvokeUIFromConfigBlob(
        HWND hwndParent,
        UINT16 inbCount,
        BYTE *inData,
        UINT16 *outbCount,
        BYTE **outdata,
        WINBOOL *fConfigChanged) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INapComponentConfig2, 0x47cbdb9e, 0x1972, 0x4f5e, 0xbd,0x3c, 0x5e,0xb6,0x23,0x06,0x14,0xb5)
#endif
#else
typedef struct INapComponentConfig2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INapComponentConfig2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INapComponentConfig2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INapComponentConfig2 *This);

    /*** INapComponentConfig methods ***/
    HRESULT (STDMETHODCALLTYPE *IsUISupported)(
        INapComponentConfig2 *This,
        WINBOOL *isSupported);

    HRESULT (STDMETHODCALLTYPE *InvokeUI)(
        INapComponentConfig2 *This,
        HWND hwndParent);

    HRESULT (STDMETHODCALLTYPE *GetConfig)(
        INapComponentConfig2 *This,
        UINT16 *bCount,
        BYTE **data);

    HRESULT (STDMETHODCALLTYPE *SetConfig)(
        INapComponentConfig2 *This,
        UINT16 bCount,
        BYTE *data);

    /*** INapComponentConfig2 methods ***/
    HRESULT (STDMETHODCALLTYPE *IsRemoteConfigSupported)(
        INapComponentConfig2 *This,
        WINBOOL *isSupported,
        UINT8 *remoteConfigType);

    HRESULT (STDMETHODCALLTYPE *InvokeUIForMachine)(
        INapComponentConfig2 *This,
        HWND hwndParent,
        CountedString *machineName);

    HRESULT (STDMETHODCALLTYPE *InvokeUIFromConfigBlob)(
        INapComponentConfig2 *This,
        HWND hwndParent,
        UINT16 inbCount,
        BYTE *inData,
        UINT16 *outbCount,
        BYTE **outdata,
        WINBOOL *fConfigChanged);

    END_INTERFACE
} INapComponentConfig2Vtbl;

interface INapComponentConfig2 {
    CONST_VTBL INapComponentConfig2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INapComponentConfig2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INapComponentConfig2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INapComponentConfig2_Release(This) (This)->lpVtbl->Release(This)
/*** INapComponentConfig methods ***/
#define INapComponentConfig2_IsUISupported(This,isSupported) (This)->lpVtbl->IsUISupported(This,isSupported)
#define INapComponentConfig2_InvokeUI(This,hwndParent) (This)->lpVtbl->InvokeUI(This,hwndParent)
#define INapComponentConfig2_GetConfig(This,bCount,data) (This)->lpVtbl->GetConfig(This,bCount,data)
#define INapComponentConfig2_SetConfig(This,bCount,data) (This)->lpVtbl->SetConfig(This,bCount,data)
/*** INapComponentConfig2 methods ***/
#define INapComponentConfig2_IsRemoteConfigSupported(This,isSupported,remoteConfigType) (This)->lpVtbl->IsRemoteConfigSupported(This,isSupported,remoteConfigType)
#define INapComponentConfig2_InvokeUIForMachine(This,hwndParent,machineName) (This)->lpVtbl->InvokeUIForMachine(This,hwndParent,machineName)
#define INapComponentConfig2_InvokeUIFromConfigBlob(This,hwndParent,inbCount,inData,outbCount,outdata,fConfigChanged) (This)->lpVtbl->InvokeUIFromConfigBlob(This,hwndParent,inbCount,inData,outbCount,outdata,fConfigChanged)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT INapComponentConfig2_QueryInterface(INapComponentConfig2* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG INapComponentConfig2_AddRef(INapComponentConfig2* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG INapComponentConfig2_Release(INapComponentConfig2* This) {
    return This->lpVtbl->Release(This);
}
/*** INapComponentConfig methods ***/
static FORCEINLINE HRESULT INapComponentConfig2_IsUISupported(INapComponentConfig2* This,WINBOOL *isSupported) {
    return This->lpVtbl->IsUISupported(This,isSupported);
}
static FORCEINLINE HRESULT INapComponentConfig2_InvokeUI(INapComponentConfig2* This,HWND hwndParent) {
    return This->lpVtbl->InvokeUI(This,hwndParent);
}
static FORCEINLINE HRESULT INapComponentConfig2_GetConfig(INapComponentConfig2* This,UINT16 *bCount,BYTE **data) {
    return This->lpVtbl->GetConfig(This,bCount,data);
}
static FORCEINLINE HRESULT INapComponentConfig2_SetConfig(INapComponentConfig2* This,UINT16 bCount,BYTE *data) {
    return This->lpVtbl->SetConfig(This,bCount,data);
}
/*** INapComponentConfig2 methods ***/
static FORCEINLINE HRESULT INapComponentConfig2_IsRemoteConfigSupported(INapComponentConfig2* This,WINBOOL *isSupported,UINT8 *remoteConfigType) {
    return This->lpVtbl->IsRemoteConfigSupported(This,isSupported,remoteConfigType);
}
static FORCEINLINE HRESULT INapComponentConfig2_InvokeUIForMachine(INapComponentConfig2* This,HWND hwndParent,CountedString *machineName) {
    return This->lpVtbl->InvokeUIForMachine(This,hwndParent,machineName);
}
static FORCEINLINE HRESULT INapComponentConfig2_InvokeUIFromConfigBlob(INapComponentConfig2* This,HWND hwndParent,UINT16 inbCount,BYTE *inData,UINT16 *outbCount,BYTE **outdata,WINBOOL *fConfigChanged) {
    return This->lpVtbl->InvokeUIFromConfigBlob(This,hwndParent,inbCount,inData,outbCount,outdata,fConfigChanged);
}
#endif
#endif

#endif


#endif  /* __INapComponentConfig2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * INapComponentConfig3 interface
 */
#ifndef __INapComponentConfig3_INTERFACE_DEFINED__
#define __INapComponentConfig3_INTERFACE_DEFINED__

DEFINE_GUID(IID_INapComponentConfig3, 0x9c4a8101, 0x8cfe, 0x4332, 0x87,0x6e, 0xc4,0xa4,0x9d,0x1d,0x3f,0x77);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("9c4a8101-8cfe-4332-876e-c4a49d1d3f77")
INapComponentConfig3 : public INapComponentConfig2
{
    virtual HRESULT STDMETHODCALLTYPE NewConfig(
        UINT32 configID) = 0;

    virtual HRESULT STDMETHODCALLTYPE DeleteConfig(
        UINT32 configID) = 0;

    virtual HRESULT STDMETHODCALLTYPE DeleteAllConfig(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetConfigFromID(
        UINT32 configID,
        UINT16 *count,
        BYTE **outdata) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetConfigToID(
        UINT32 configID,
        UINT16 count,
        BYTE *data) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INapComponentConfig3, 0x9c4a8101, 0x8cfe, 0x4332, 0x87,0x6e, 0xc4,0xa4,0x9d,0x1d,0x3f,0x77)
#endif
#else
typedef struct INapComponentConfig3Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INapComponentConfig3 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INapComponentConfig3 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INapComponentConfig3 *This);

    /*** INapComponentConfig methods ***/
    HRESULT (STDMETHODCALLTYPE *IsUISupported)(
        INapComponentConfig3 *This,
        WINBOOL *isSupported);

    HRESULT (STDMETHODCALLTYPE *InvokeUI)(
        INapComponentConfig3 *This,
        HWND hwndParent);

    HRESULT (STDMETHODCALLTYPE *GetConfig)(
        INapComponentConfig3 *This,
        UINT16 *bCount,
        BYTE **data);

    HRESULT (STDMETHODCALLTYPE *SetConfig)(
        INapComponentConfig3 *This,
        UINT16 bCount,
        BYTE *data);

    /*** INapComponentConfig2 methods ***/
    HRESULT (STDMETHODCALLTYPE *IsRemoteConfigSupported)(
        INapComponentConfig3 *This,
        WINBOOL *isSupported,
        UINT8 *remoteConfigType);

    HRESULT (STDMETHODCALLTYPE *InvokeUIForMachine)(
        INapComponentConfig3 *This,
        HWND hwndParent,
        CountedString *machineName);

    HRESULT (STDMETHODCALLTYPE *InvokeUIFromConfigBlob)(
        INapComponentConfig3 *This,
        HWND hwndParent,
        UINT16 inbCount,
        BYTE *inData,
        UINT16 *outbCount,
        BYTE **outdata,
        WINBOOL *fConfigChanged);

    /*** INapComponentConfig3 methods ***/
    HRESULT (STDMETHODCALLTYPE *NewConfig)(
        INapComponentConfig3 *This,
        UINT32 configID);

    HRESULT (STDMETHODCALLTYPE *DeleteConfig)(
        INapComponentConfig3 *This,
        UINT32 configID);

    HRESULT (STDMETHODCALLTYPE *DeleteAllConfig)(
        INapComponentConfig3 *This);

    HRESULT (STDMETHODCALLTYPE *GetConfigFromID)(
        INapComponentConfig3 *This,
        UINT32 configID,
        UINT16 *count,
        BYTE **outdata);

    HRESULT (STDMETHODCALLTYPE *SetConfigToID)(
        INapComponentConfig3 *This,
        UINT32 configID,
        UINT16 count,
        BYTE *data);

    END_INTERFACE
} INapComponentConfig3Vtbl;

interface INapComponentConfig3 {
    CONST_VTBL INapComponentConfig3Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INapComponentConfig3_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INapComponentConfig3_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INapComponentConfig3_Release(This) (This)->lpVtbl->Release(This)
/*** INapComponentConfig methods ***/
#define INapComponentConfig3_IsUISupported(This,isSupported) (This)->lpVtbl->IsUISupported(This,isSupported)
#define INapComponentConfig3_InvokeUI(This,hwndParent) (This)->lpVtbl->InvokeUI(This,hwndParent)
#define INapComponentConfig3_GetConfig(This,bCount,data) (This)->lpVtbl->GetConfig(This,bCount,data)
#define INapComponentConfig3_SetConfig(This,bCount,data) (This)->lpVtbl->SetConfig(This,bCount,data)
/*** INapComponentConfig2 methods ***/
#define INapComponentConfig3_IsRemoteConfigSupported(This,isSupported,remoteConfigType) (This)->lpVtbl->IsRemoteConfigSupported(This,isSupported,remoteConfigType)
#define INapComponentConfig3_InvokeUIForMachine(This,hwndParent,machineName) (This)->lpVtbl->InvokeUIForMachine(This,hwndParent,machineName)
#define INapComponentConfig3_InvokeUIFromConfigBlob(This,hwndParent,inbCount,inData,outbCount,outdata,fConfigChanged) (This)->lpVtbl->InvokeUIFromConfigBlob(This,hwndParent,inbCount,inData,outbCount,outdata,fConfigChanged)
/*** INapComponentConfig3 methods ***/
#define INapComponentConfig3_NewConfig(This,configID) (This)->lpVtbl->NewConfig(This,configID)
#define INapComponentConfig3_DeleteConfig(This,configID) (This)->lpVtbl->DeleteConfig(This,configID)
#define INapComponentConfig3_DeleteAllConfig(This) (This)->lpVtbl->DeleteAllConfig(This)
#define INapComponentConfig3_GetConfigFromID(This,configID,count,outdata) (This)->lpVtbl->GetConfigFromID(This,configID,count,outdata)
#define INapComponentConfig3_SetConfigToID(This,configID,count,data) (This)->lpVtbl->SetConfigToID(This,configID,count,data)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT INapComponentConfig3_QueryInterface(INapComponentConfig3* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG INapComponentConfig3_AddRef(INapComponentConfig3* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG INapComponentConfig3_Release(INapComponentConfig3* This) {
    return This->lpVtbl->Release(This);
}
/*** INapComponentConfig methods ***/
static FORCEINLINE HRESULT INapComponentConfig3_IsUISupported(INapComponentConfig3* This,WINBOOL *isSupported) {
    return This->lpVtbl->IsUISupported(This,isSupported);
}
static FORCEINLINE HRESULT INapComponentConfig3_InvokeUI(INapComponentConfig3* This,HWND hwndParent) {
    return This->lpVtbl->InvokeUI(This,hwndParent);
}
static FORCEINLINE HRESULT INapComponentConfig3_GetConfig(INapComponentConfig3* This,UINT16 *bCount,BYTE **data) {
    return This->lpVtbl->GetConfig(This,bCount,data);
}
static FORCEINLINE HRESULT INapComponentConfig3_SetConfig(INapComponentConfig3* This,UINT16 bCount,BYTE *data) {
    return This->lpVtbl->SetConfig(This,bCount,data);
}
/*** INapComponentConfig2 methods ***/
static FORCEINLINE HRESULT INapComponentConfig3_IsRemoteConfigSupported(INapComponentConfig3* This,WINBOOL *isSupported,UINT8 *remoteConfigType) {
    return This->lpVtbl->IsRemoteConfigSupported(This,isSupported,remoteConfigType);
}
static FORCEINLINE HRESULT INapComponentConfig3_InvokeUIForMachine(INapComponentConfig3* This,HWND hwndParent,CountedString *machineName) {
    return This->lpVtbl->InvokeUIForMachine(This,hwndParent,machineName);
}
static FORCEINLINE HRESULT INapComponentConfig3_InvokeUIFromConfigBlob(INapComponentConfig3* This,HWND hwndParent,UINT16 inbCount,BYTE *inData,UINT16 *outbCount,BYTE **outdata,WINBOOL *fConfigChanged) {
    return This->lpVtbl->InvokeUIFromConfigBlob(This,hwndParent,inbCount,inData,outbCount,outdata,fConfigChanged);
}
/*** INapComponentConfig3 methods ***/
static FORCEINLINE HRESULT INapComponentConfig3_NewConfig(INapComponentConfig3* This,UINT32 configID) {
    return This->lpVtbl->NewConfig(This,configID);
}
static FORCEINLINE HRESULT INapComponentConfig3_DeleteConfig(INapComponentConfig3* This,UINT32 configID) {
    return This->lpVtbl->DeleteConfig(This,configID);
}
static FORCEINLINE HRESULT INapComponentConfig3_DeleteAllConfig(INapComponentConfig3* This) {
    return This->lpVtbl->DeleteAllConfig(This);
}
static FORCEINLINE HRESULT INapComponentConfig3_GetConfigFromID(INapComponentConfig3* This,UINT32 configID,UINT16 *count,BYTE **outdata) {
    return This->lpVtbl->GetConfigFromID(This,configID,count,outdata);
}
static FORCEINLINE HRESULT INapComponentConfig3_SetConfigToID(INapComponentConfig3* This,UINT32 configID,UINT16 count,BYTE *data) {
    return This->lpVtbl->SetConfigToID(This,configID,count,data);
}
#endif
#endif

#endif


#endif  /* __INapComponentConfig3_INTERFACE_DEFINED__ */

#endif
/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER HWND_UserSize     (ULONG *, ULONG, HWND *);
unsigned char * __RPC_USER HWND_UserMarshal  (ULONG *, unsigned char *, HWND *);
unsigned char * __RPC_USER HWND_UserUnmarshal(ULONG *, unsigned char *, HWND *);
void            __RPC_USER HWND_UserFree     (ULONG *, HWND *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __napcommon_h__ */

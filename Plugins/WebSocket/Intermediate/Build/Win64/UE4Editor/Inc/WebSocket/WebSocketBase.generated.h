// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEBSOCKET_WebSocketBase_generated_h
#error "WebSocketBase.generated.h already included, missing '#pragma once' in WebSocketBase.h"
#endif
#define WEBSOCKET_WebSocketBase_generated_h

#define SimpleFPSTemplate_master_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_35_DELEGATE \
struct _Script_WebSocket_eventWebSocketRecieve_Parms \
{ \
	FString data; \
}; \
static inline void FWebSocketRecieve_DelegateWrapper(const FMulticastScriptDelegate& WebSocketRecieve, const FString& data) \
{ \
	_Script_WebSocket_eventWebSocketRecieve_Parms Parms; \
	Parms.data=data; \
	WebSocketRecieve.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SimpleFPSTemplate_master_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_34_DELEGATE \
static inline void FWebSocketConnected_DelegateWrapper(const FMulticastScriptDelegate& WebSocketConnected) \
{ \
	WebSocketConnected.ProcessMulticastDelegate<UObject>(NULL); \
}


#define SimpleFPSTemplate_master_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_33_DELEGATE \
static inline void FWebSocketClosed_DelegateWrapper(const FMulticastScriptDelegate& WebSocketClosed) \
{ \
	WebSocketClosed.ProcessMulticastDelegate<UObject>(NULL); \
}


#define SimpleFPSTemplate_master_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_32_DELEGATE \
struct _Script_WebSocket_eventWebSocketConnectError_Parms \
{ \
	FString error; \
}; \
static inline void FWebSocketConnectError_DelegateWrapper(const FMulticastScriptDelegate& WebSocketConnectError, const FString& error) \
{ \
	_Script_WebSocket_eventWebSocketConnectError_Parms Parms; \
	Parms.error=error; \
	WebSocketConnectError.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SimpleFPSTemplate_master_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_119_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Close(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendText(Z_Param_data); \
		P_NATIVE_END; \
	}


#define SimpleFPSTemplate_master_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Close(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_data); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendText(Z_Param_data); \
		P_NATIVE_END; \
	}


#define SimpleFPSTemplate_master_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebSocketBase(); \
	friend struct Z_Construct_UClass_UWebSocketBase_Statics; \
public: \
	DECLARE_CLASS(UWebSocketBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebSocket"), NO_API) \
	DECLARE_SERIALIZER(UWebSocketBase)


#define SimpleFPSTemplate_master_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_119_INCLASS \
private: \
	static void StaticRegisterNativesUWebSocketBase(); \
	friend struct Z_Construct_UClass_UWebSocketBase_Statics; \
public: \
	DECLARE_CLASS(UWebSocketBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebSocket"), NO_API) \
	DECLARE_SERIALIZER(UWebSocketBase)


#define SimpleFPSTemplate_master_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_119_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebSocketBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebSocketBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSocketBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSocketBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebSocketBase(UWebSocketBase&&); \
	NO_API UWebSocketBase(const UWebSocketBase&); \
public:


#define SimpleFPSTemplate_master_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_119_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebSocketBase(UWebSocketBase&&); \
	NO_API UWebSocketBase(const UWebSocketBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSocketBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSocketBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWebSocketBase)


#define SimpleFPSTemplate_master_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_119_PRIVATE_PROPERTY_OFFSET
#define SimpleFPSTemplate_master_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_116_PROLOG
#define SimpleFPSTemplate_master_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_119_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleFPSTemplate_master_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_119_PRIVATE_PROPERTY_OFFSET \
	SimpleFPSTemplate_master_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_119_RPC_WRAPPERS \
	SimpleFPSTemplate_master_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_119_INCLASS \
	SimpleFPSTemplate_master_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_119_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SimpleFPSTemplate_master_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleFPSTemplate_master_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_119_PRIVATE_PROPERTY_OFFSET \
	SimpleFPSTemplate_master_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	SimpleFPSTemplate_master_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_119_INCLASS_NO_PURE_DECLS \
	SimpleFPSTemplate_master_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEBSOCKET_API UClass* StaticClass<class UWebSocketBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SimpleFPSTemplate_master_Plugins_WebSocket_Source_WebSocket_Public_WebSocketBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
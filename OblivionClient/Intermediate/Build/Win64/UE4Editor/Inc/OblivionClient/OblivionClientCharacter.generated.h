// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBLIVIONCLIENT_OblivionClientCharacter_generated_h
#error "OblivionClientCharacter.generated.h already included, missing '#pragma once' in OblivionClientCharacter.h"
#endif
#define OBLIVIONCLIENT_OblivionClientCharacter_generated_h

#define OblivionClient_Source_OblivionClient_OblivionClientCharacter_h_12_RPC_WRAPPERS
#define OblivionClient_Source_OblivionClient_OblivionClientCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define OblivionClient_Source_OblivionClient_OblivionClientCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOblivionClientCharacter(); \
	friend OBLIVIONCLIENT_API class UClass* Z_Construct_UClass_AOblivionClientCharacter(); \
public: \
	DECLARE_CLASS(AOblivionClientCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OblivionClient"), NO_API) \
	DECLARE_SERIALIZER(AOblivionClientCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OblivionClient_Source_OblivionClient_OblivionClientCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAOblivionClientCharacter(); \
	friend OBLIVIONCLIENT_API class UClass* Z_Construct_UClass_AOblivionClientCharacter(); \
public: \
	DECLARE_CLASS(AOblivionClientCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OblivionClient"), NO_API) \
	DECLARE_SERIALIZER(AOblivionClientCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define OblivionClient_Source_OblivionClient_OblivionClientCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOblivionClientCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOblivionClientCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOblivionClientCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOblivionClientCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOblivionClientCharacter(AOblivionClientCharacter&&); \
	NO_API AOblivionClientCharacter(const AOblivionClientCharacter&); \
public:


#define OblivionClient_Source_OblivionClient_OblivionClientCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOblivionClientCharacter(AOblivionClientCharacter&&); \
	NO_API AOblivionClientCharacter(const AOblivionClientCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOblivionClientCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOblivionClientCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOblivionClientCharacter)


#define OblivionClient_Source_OblivionClient_OblivionClientCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AOblivionClientCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AOblivionClientCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__FPSCamera() { return STRUCT_OFFSET(AOblivionClientCharacter, FPSCamera); }


#define OblivionClient_Source_OblivionClient_OblivionClientCharacter_h_9_PROLOG
#define OblivionClient_Source_OblivionClient_OblivionClientCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OblivionClient_Source_OblivionClient_OblivionClientCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	OblivionClient_Source_OblivionClient_OblivionClientCharacter_h_12_RPC_WRAPPERS \
	OblivionClient_Source_OblivionClient_OblivionClientCharacter_h_12_INCLASS \
	OblivionClient_Source_OblivionClient_OblivionClientCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OblivionClient_Source_OblivionClient_OblivionClientCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OblivionClient_Source_OblivionClient_OblivionClientCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	OblivionClient_Source_OblivionClient_OblivionClientCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	OblivionClient_Source_OblivionClient_OblivionClientCharacter_h_12_INCLASS_NO_PURE_DECLS \
	OblivionClient_Source_OblivionClient_OblivionClientCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OblivionClient_Source_OblivionClient_OblivionClientCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

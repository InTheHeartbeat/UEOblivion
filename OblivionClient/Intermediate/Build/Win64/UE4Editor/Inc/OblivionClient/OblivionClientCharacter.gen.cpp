// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "OblivionClientCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOblivionClientCharacter() {}
// Cross Module References
	OBLIVIONCLIENT_API UClass* Z_Construct_UClass_AOblivionClientCharacter_NoRegister();
	OBLIVIONCLIENT_API UClass* Z_Construct_UClass_AOblivionClientCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_OblivionClient();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void AOblivionClientCharacter::StaticRegisterNativesAOblivionClientCharacter()
	{
	}
	UClass* Z_Construct_UClass_AOblivionClientCharacter_NoRegister()
	{
		return AOblivionClientCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AOblivionClientCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_OblivionClient,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "OblivionClientCharacter.h" },
				{ "ModuleRelativePath", "OblivionClientCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeCameraThreshold_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "OblivionClientCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChangeCameraThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "ChangeCameraThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AOblivionClientCharacter, ChangeCameraThreshold), METADATA_PARAMS(NewProp_ChangeCameraThreshold_MetaData, ARRAY_COUNT(NewProp_ChangeCameraThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraZoomMaxDistance_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "OblivionClientCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraZoomMaxDistance = { UE4CodeGen_Private::EPropertyClass::Float, "CameraZoomMaxDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AOblivionClientCharacter, CameraZoomMaxDistance), METADATA_PARAMS(NewProp_CameraZoomMaxDistance_MetaData, ARRAY_COUNT(NewProp_CameraZoomMaxDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraZoomMinDistance_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "OblivionClientCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraZoomMinDistance = { UE4CodeGen_Private::EPropertyClass::Float, "CameraZoomMinDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AOblivionClientCharacter, CameraZoomMinDistance), METADATA_PARAMS(NewProp_CameraZoomMinDistance_MetaData, ARRAY_COUNT(NewProp_CameraZoomMinDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraZoomSmooth_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "OblivionClientCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraZoomSmooth = { UE4CodeGen_Private::EPropertyClass::Float, "CameraZoomSmooth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AOblivionClientCharacter, CameraZoomSmooth), METADATA_PARAMS(NewProp_CameraZoomSmooth_MetaData, ARRAY_COUNT(NewProp_CameraZoomSmooth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraZoomStep_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "OblivionClientCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraZoomStep = { UE4CodeGen_Private::EPropertyClass::Float, "CameraZoomStep", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AOblivionClientCharacter, CameraZoomStep), METADATA_PARAMS(NewProp_CameraZoomStep_MetaData, ARRAY_COUNT(NewProp_CameraZoomStep_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "OblivionClientCharacter.h" },
				{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseLookUpRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AOblivionClientCharacter, BaseLookUpRate), METADATA_PARAMS(NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "OblivionClientCharacter.h" },
				{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseTurnRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AOblivionClientCharacter, BaseTurnRate), METADATA_PARAMS(NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPSCamera_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "OblivionClientCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPSCamera = { UE4CodeGen_Private::EPropertyClass::Object, "FPSCamera", RF_Public|RF_Transient|RF_MarkAsNative, 0x004000000008001d, 1, nullptr, STRUCT_OFFSET(AOblivionClientCharacter, FPSCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_FPSCamera_MetaData, ARRAY_COUNT(NewProp_FPSCamera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "OblivionClientCharacter.h" },
				{ "ToolTip", "Follow camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera = { UE4CodeGen_Private::EPropertyClass::Object, "FollowCamera", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AOblivionClientCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_FollowCamera_MetaData, ARRAY_COUNT(NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "OblivionClientCharacter.h" },
				{ "ToolTip", "Camera boom positioning the camera behind the character" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBoom", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AOblivionClientCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_CameraBoom_MetaData, ARRAY_COUNT(NewProp_CameraBoom_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChangeCameraThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraZoomMaxDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraZoomMinDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraZoomSmooth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraZoomStep,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseLookUpRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseTurnRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FPSCamera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FollowCamera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraBoom,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AOblivionClientCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AOblivionClientCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOblivionClientCharacter, 819511501);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOblivionClientCharacter(Z_Construct_UClass_AOblivionClientCharacter, &AOblivionClientCharacter::StaticClass, TEXT("/Script/OblivionClient"), TEXT("AOblivionClientCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOblivionClientCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

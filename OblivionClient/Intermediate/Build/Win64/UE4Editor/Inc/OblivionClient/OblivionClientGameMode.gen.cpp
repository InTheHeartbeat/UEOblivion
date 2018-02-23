// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "OblivionClientGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOblivionClientGameMode() {}
// Cross Module References
	OBLIVIONCLIENT_API UClass* Z_Construct_UClass_AOblivionClientGameMode_NoRegister();
	OBLIVIONCLIENT_API UClass* Z_Construct_UClass_AOblivionClientGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_OblivionClient();
// End Cross Module References
	void AOblivionClientGameMode::StaticRegisterNativesAOblivionClientGameMode()
	{
	}
	UClass* Z_Construct_UClass_AOblivionClientGameMode_NoRegister()
	{
		return AOblivionClientGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AOblivionClientGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_OblivionClient,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "OblivionClientGameMode.h" },
				{ "ModuleRelativePath", "OblivionClientGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AOblivionClientGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AOblivionClientGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOblivionClientGameMode, 2374734553);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOblivionClientGameMode(Z_Construct_UClass_AOblivionClientGameMode, &AOblivionClientGameMode::StaticClass, TEXT("/Script/OblivionClient"), TEXT("AOblivionClientGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOblivionClientGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

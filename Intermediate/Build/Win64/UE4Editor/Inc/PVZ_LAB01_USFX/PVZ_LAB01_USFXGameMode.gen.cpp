// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_LAB01_USFX/PVZ_LAB01_USFXGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePVZ_LAB01_USFXGameMode() {}
// Cross Module References
	PVZ_LAB01_USFX_API UClass* Z_Construct_UClass_APVZ_LAB01_USFXGameMode_NoRegister();
	PVZ_LAB01_USFX_API UClass* Z_Construct_UClass_APVZ_LAB01_USFXGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PVZ_LAB01_USFX();
// End Cross Module References
	void APVZ_LAB01_USFXGameMode::StaticRegisterNativesAPVZ_LAB01_USFXGameMode()
	{
	}
	UClass* Z_Construct_UClass_APVZ_LAB01_USFXGameMode_NoRegister()
	{
		return APVZ_LAB01_USFXGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APVZ_LAB01_USFXGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APVZ_LAB01_USFXGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_LAB01_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APVZ_LAB01_USFXGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PVZ_LAB01_USFXGameMode.h" },
		{ "ModuleRelativePath", "PVZ_LAB01_USFXGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APVZ_LAB01_USFXGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APVZ_LAB01_USFXGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APVZ_LAB01_USFXGameMode_Statics::ClassParams = {
		&APVZ_LAB01_USFXGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APVZ_LAB01_USFXGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APVZ_LAB01_USFXGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APVZ_LAB01_USFXGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APVZ_LAB01_USFXGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APVZ_LAB01_USFXGameMode, 2618387213);
	template<> PVZ_LAB01_USFX_API UClass* StaticClass<APVZ_LAB01_USFXGameMode>()
	{
		return APVZ_LAB01_USFXGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APVZ_LAB01_USFXGameMode(Z_Construct_UClass_APVZ_LAB01_USFXGameMode, &APVZ_LAB01_USFXGameMode::StaticClass, TEXT("/Script/PVZ_LAB01_USFX"), TEXT("APVZ_LAB01_USFXGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APVZ_LAB01_USFXGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealProject/Character/UPCharacterEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPCharacterEnemy() {}
// Cross Module References
	UNREALPROJECT_API UClass* Z_Construct_UClass_AUPCharacterBase();
	UNREALPROJECT_API UClass* Z_Construct_UClass_AUPCharacterEnemy();
	UNREALPROJECT_API UClass* Z_Construct_UClass_AUPCharacterEnemy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealProject();
// End Cross Module References
	void AUPCharacterEnemy::StaticRegisterNativesAUPCharacterEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUPCharacterEnemy);
	UClass* Z_Construct_UClass_AUPCharacterEnemy_NoRegister()
	{
		return AUPCharacterEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AUPCharacterEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUPCharacterEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUPCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPCharacterEnemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/UPCharacterEnemy.h" },
		{ "ModuleRelativePath", "Character/UPCharacterEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUPCharacterEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUPCharacterEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUPCharacterEnemy_Statics::ClassParams = {
		&AUPCharacterEnemy::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUPCharacterEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUPCharacterEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUPCharacterEnemy()
	{
		if (!Z_Registration_Info_UClass_AUPCharacterEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUPCharacterEnemy.OuterSingleton, Z_Construct_UClass_AUPCharacterEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUPCharacterEnemy.OuterSingleton;
	}
	template<> UNREALPROJECT_API UClass* StaticClass<AUPCharacterEnemy>()
	{
		return AUPCharacterEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUPCharacterEnemy);
	AUPCharacterEnemy::~AUPCharacterEnemy() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPCharacterEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPCharacterEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUPCharacterEnemy, AUPCharacterEnemy::StaticClass, TEXT("AUPCharacterEnemy"), &Z_Registration_Info_UClass_AUPCharacterEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUPCharacterEnemy), 473294044U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPCharacterEnemy_h_3978254354(TEXT("/Script/UnrealProject"),
		Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPCharacterEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPCharacterEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

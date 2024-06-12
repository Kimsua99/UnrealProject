// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealProject/Character/UPCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPCharacterBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UNREALPROJECT_API UClass* Z_Construct_UClass_AUPCharacterBase();
	UNREALPROJECT_API UClass* Z_Construct_UClass_AUPCharacterBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealProject();
// End Cross Module References
	void AUPCharacterBase::StaticRegisterNativesAUPCharacterBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUPCharacterBase);
	UClass* Z_Construct_UClass_AUPCharacterBase_NoRegister()
	{
		return AUPCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_AUPCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUPCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/UPCharacterBase.h" },
		{ "ModuleRelativePath", "Character/UPCharacterBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUPCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUPCharacterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUPCharacterBase_Statics::ClassParams = {
		&AUPCharacterBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUPCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUPCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUPCharacterBase()
	{
		if (!Z_Registration_Info_UClass_AUPCharacterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUPCharacterBase.OuterSingleton, Z_Construct_UClass_AUPCharacterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUPCharacterBase.OuterSingleton;
	}
	template<> UNREALPROJECT_API UClass* StaticClass<AUPCharacterBase>()
	{
		return AUPCharacterBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUPCharacterBase);
	AUPCharacterBase::~AUPCharacterBase() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPCharacterBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPCharacterBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUPCharacterBase, AUPCharacterBase::StaticClass, TEXT("AUPCharacterBase"), &Z_Registration_Info_UClass_AUPCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUPCharacterBase), 2269805342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPCharacterBase_h_600959844(TEXT("/Script/UnrealProject"),
		Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPCharacterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

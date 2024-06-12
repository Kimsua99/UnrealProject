// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealProject/Character/UPCharacterPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPCharacterPlayer() {}
// Cross Module References
	UNREALPROJECT_API UClass* Z_Construct_UClass_AUPCharacterBase();
	UNREALPROJECT_API UClass* Z_Construct_UClass_AUPCharacterPlayer();
	UNREALPROJECT_API UClass* Z_Construct_UClass_AUPCharacterPlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealProject();
// End Cross Module References
	void AUPCharacterPlayer::StaticRegisterNativesAUPCharacterPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUPCharacterPlayer);
	UClass* Z_Construct_UClass_AUPCharacterPlayer_NoRegister()
	{
		return AUPCharacterPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AUPCharacterPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUPCharacterPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUPCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPCharacterPlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/UPCharacterPlayer.h" },
		{ "ModuleRelativePath", "Character/UPCharacterPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUPCharacterPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUPCharacterPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUPCharacterPlayer_Statics::ClassParams = {
		&AUPCharacterPlayer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUPCharacterPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUPCharacterPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUPCharacterPlayer()
	{
		if (!Z_Registration_Info_UClass_AUPCharacterPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUPCharacterPlayer.OuterSingleton, Z_Construct_UClass_AUPCharacterPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUPCharacterPlayer.OuterSingleton;
	}
	template<> UNREALPROJECT_API UClass* StaticClass<AUPCharacterPlayer>()
	{
		return AUPCharacterPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUPCharacterPlayer);
	AUPCharacterPlayer::~AUPCharacterPlayer() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPCharacterPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPCharacterPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUPCharacterPlayer, AUPCharacterPlayer::StaticClass, TEXT("AUPCharacterPlayer"), &Z_Registration_Info_UClass_AUPCharacterPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUPCharacterPlayer), 3837834678U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPCharacterPlayer_h_344339331(TEXT("/Script/UnrealProject"),
		Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPCharacterPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPCharacterPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

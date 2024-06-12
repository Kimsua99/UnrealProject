// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealProject/Player/UPPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UNREALPROJECT_API UClass* Z_Construct_UClass_AUPPlayerController();
	UNREALPROJECT_API UClass* Z_Construct_UClass_AUPPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealProject();
// End Cross Module References
	void AUPPlayerController::StaticRegisterNativesAUPPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUPPlayerController);
	UClass* Z_Construct_UClass_AUPPlayerController_NoRegister()
	{
		return AUPPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AUPPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUPPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/UPPlayerController.h" },
		{ "ModuleRelativePath", "Player/UPPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUPPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUPPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUPPlayerController_Statics::ClassParams = {
		&AUPPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUPPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUPPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUPPlayerController()
	{
		if (!Z_Registration_Info_UClass_AUPPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUPPlayerController.OuterSingleton, Z_Construct_UClass_AUPPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUPPlayerController.OuterSingleton;
	}
	template<> UNREALPROJECT_API UClass* StaticClass<AUPPlayerController>()
	{
		return AUPPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUPPlayerController);
	AUPPlayerController::~AUPPlayerController() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Player_UPPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Player_UPPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUPPlayerController, AUPPlayerController::StaticClass, TEXT("AUPPlayerController"), &Z_Registration_Info_UClass_AUPPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUPPlayerController), 2260440628U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Player_UPPlayerController_h_1551812565(TEXT("/Script/UnrealProject"),
		Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Player_UPPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Player_UPPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

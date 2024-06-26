// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealProject/Character/UPComboActionData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPComboActionData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UNREALPROJECT_API UClass* Z_Construct_UClass_UUPComboActionData();
	UNREALPROJECT_API UClass* Z_Construct_UClass_UUPComboActionData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealProject();
// End Cross Module References
	void UUPComboActionData::StaticRegisterNativesUUPComboActionData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUPComboActionData);
	UClass* Z_Construct_UClass_UUPComboActionData_NoRegister()
	{
		return UUPComboActionData::StaticClass();
	}
	struct Z_Construct_UClass_UUPComboActionData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPComboActionData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPComboActionData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Character/UPComboActionData.h" },
		{ "ModuleRelativePath", "Character/UPComboActionData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPComboActionData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPComboActionData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUPComboActionData_Statics::ClassParams = {
		&UUPComboActionData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUPComboActionData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPComboActionData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPComboActionData()
	{
		if (!Z_Registration_Info_UClass_UUPComboActionData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUPComboActionData.OuterSingleton, Z_Construct_UClass_UUPComboActionData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUPComboActionData.OuterSingleton;
	}
	template<> UNREALPROJECT_API UClass* StaticClass<UUPComboActionData>()
	{
		return UUPComboActionData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPComboActionData);
	UUPComboActionData::~UUPComboActionData() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPComboActionData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPComboActionData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUPComboActionData, UUPComboActionData::StaticClass, TEXT("UUPComboActionData"), &Z_Registration_Info_UClass_UUPComboActionData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUPComboActionData), 976673245U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPComboActionData_h_1098956840(TEXT("/Script/UnrealProject"),
		Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPComboActionData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPComboActionData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

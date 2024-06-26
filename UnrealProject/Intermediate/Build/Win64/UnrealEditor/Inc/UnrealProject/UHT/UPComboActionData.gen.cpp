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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageSectionNamePrefix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MontageSectionNamePrefix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxComboCount_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxComboCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectiveFrameCount_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectiveFrameCount_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EffectiveFrameCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPComboActionData_Statics::NewProp_MontageSectionNamePrefix_MetaData[] = {
		{ "Category", "Name" },
		{ "ModuleRelativePath", "Character/UPComboActionData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUPComboActionData_Statics::NewProp_MontageSectionNamePrefix = { "MontageSectionNamePrefix", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUPComboActionData, MontageSectionNamePrefix), METADATA_PARAMS(Z_Construct_UClass_UUPComboActionData_Statics::NewProp_MontageSectionNamePrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPComboActionData_Statics::NewProp_MontageSectionNamePrefix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPComboActionData_Statics::NewProp_MaxComboCount_MetaData[] = {
		{ "Category", "Name" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb8\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Character/UPComboActionData.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb8\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUPComboActionData_Statics::NewProp_MaxComboCount = { "MaxComboCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUPComboActionData, MaxComboCount), nullptr, METADATA_PARAMS(Z_Construct_UClass_UUPComboActionData_Statics::NewProp_MaxComboCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPComboActionData_Statics::NewProp_MaxComboCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPComboActionData_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Name" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xee\xb0\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xba\xef\xbf\xbd \xef\xbf\xbd\xd7\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Character/UPComboActionData.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xee\xb0\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xba\xef\xbf\xbd \xef\xbf\xbd\xd7\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPComboActionData_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUPComboActionData, FrameRate), METADATA_PARAMS(Z_Construct_UClass_UUPComboActionData_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPComboActionData_Statics::NewProp_FrameRate_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPComboActionData_Statics::NewProp_EffectiveFrameCount_Inner = { "EffectiveFrameCount", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPComboActionData_Statics::NewProp_EffectiveFrameCount_MetaData[] = {
		{ "Category", "Name" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Character/UPComboActionData.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUPComboActionData_Statics::NewProp_EffectiveFrameCount = { "EffectiveFrameCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUPComboActionData, EffectiveFrameCount), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUPComboActionData_Statics::NewProp_EffectiveFrameCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPComboActionData_Statics::NewProp_EffectiveFrameCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUPComboActionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPComboActionData_Statics::NewProp_MontageSectionNamePrefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPComboActionData_Statics::NewProp_MaxComboCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPComboActionData_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPComboActionData_Statics::NewProp_EffectiveFrameCount_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPComboActionData_Statics::NewProp_EffectiveFrameCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPComboActionData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPComboActionData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUPComboActionData_Statics::ClassParams = {
		&UUPComboActionData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUPComboActionData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUPComboActionData_Statics::PropPointers),
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
		{ Z_Construct_UClass_UUPComboActionData, UUPComboActionData::StaticClass, TEXT("UUPComboActionData"), &Z_Registration_Info_UClass_UUPComboActionData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUPComboActionData), 314418406U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPComboActionData_h_2290739624(TEXT("/Script/UnrealProject"),
		Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPComboActionData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPComboActionData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

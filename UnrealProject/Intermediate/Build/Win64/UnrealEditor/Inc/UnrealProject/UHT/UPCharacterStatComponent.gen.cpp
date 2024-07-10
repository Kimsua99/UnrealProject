// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealProject/CharacterStat/UPCharacterStatComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPCharacterStatComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UNREALPROJECT_API UClass* Z_Construct_UClass_UUPCharacterStatComponent();
	UNREALPROJECT_API UClass* Z_Construct_UClass_UUPCharacterStatComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealProject();
// End Cross Module References
	void UUPCharacterStatComponent::StaticRegisterNativesUUPCharacterStatComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUPCharacterStatComponent);
	UClass* Z_Construct_UClass_UUPCharacterStatComponent_NoRegister()
	{
		return UUPCharacterStatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUPCharacterStatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxHP_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHP_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPCharacterStatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPCharacterStatComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CharacterStat/UPCharacterStatComponent.h" },
		{ "ModuleRelativePath", "CharacterStat/UPCharacterStatComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPCharacterStatComponent_Statics::NewProp_maxHP_MetaData[] = {
		{ "Category", "Stat" },
		{ "Comment", "//\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb9\xc7\xb7\xef\xbf\xbd \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc2\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "CharacterStat/UPCharacterStatComponent.h" },
		{ "ToolTip", "\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb9\xc7\xb7\xef\xbf\xbd \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc2\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPCharacterStatComponent_Statics::NewProp_maxHP = { "maxHP", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUPCharacterStatComponent, maxHP), METADATA_PARAMS(Z_Construct_UClass_UUPCharacterStatComponent_Statics::NewProp_maxHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPCharacterStatComponent_Statics::NewProp_maxHP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPCharacterStatComponent_Statics::NewProp_CurrentHP_MetaData[] = {
		{ "Category", "Stat" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb0\xef\xbf\xbd \xef\xbf\xbd\xc7\xb9\xc7\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xa9\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb0\xef\xbf\xbd Transient \xef\xbf\xbd\xd9\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n" },
		{ "ModuleRelativePath", "CharacterStat/UPCharacterStatComponent.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb0\xef\xbf\xbd \xef\xbf\xbd\xc7\xb9\xc7\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xa9\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb0\xef\xbf\xbd Transient \xef\xbf\xbd\xd9\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPCharacterStatComponent_Statics::NewProp_CurrentHP = { "CurrentHP", nullptr, (EPropertyFlags)0x0020080000022801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUPCharacterStatComponent, CurrentHP), METADATA_PARAMS(Z_Construct_UClass_UUPCharacterStatComponent_Statics::NewProp_CurrentHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPCharacterStatComponent_Statics::NewProp_CurrentHP_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUPCharacterStatComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPCharacterStatComponent_Statics::NewProp_maxHP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPCharacterStatComponent_Statics::NewProp_CurrentHP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPCharacterStatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPCharacterStatComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUPCharacterStatComponent_Statics::ClassParams = {
		&UUPCharacterStatComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUPCharacterStatComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUPCharacterStatComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUPCharacterStatComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPCharacterStatComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPCharacterStatComponent()
	{
		if (!Z_Registration_Info_UClass_UUPCharacterStatComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUPCharacterStatComponent.OuterSingleton, Z_Construct_UClass_UUPCharacterStatComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUPCharacterStatComponent.OuterSingleton;
	}
	template<> UNREALPROJECT_API UClass* StaticClass<UUPCharacterStatComponent>()
	{
		return UUPCharacterStatComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPCharacterStatComponent);
	UUPCharacterStatComponent::~UUPCharacterStatComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_CharacterStat_UPCharacterStatComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_CharacterStat_UPCharacterStatComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUPCharacterStatComponent, UUPCharacterStatComponent::StaticClass, TEXT("UUPCharacterStatComponent"), &Z_Registration_Info_UClass_UUPCharacterStatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUPCharacterStatComponent), 290090274U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_CharacterStat_UPCharacterStatComponent_h_382989855(TEXT("/Script/UnrealProject"),
		Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_CharacterStat_UPCharacterStatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_CharacterStat_UPCharacterStatComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

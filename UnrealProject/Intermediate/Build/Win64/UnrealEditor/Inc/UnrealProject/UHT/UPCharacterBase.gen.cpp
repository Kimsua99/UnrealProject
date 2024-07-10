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
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UNREALPROJECT_API UClass* Z_Construct_UClass_AUPCharacterBase();
	UNREALPROJECT_API UClass* Z_Construct_UClass_AUPCharacterBase_NoRegister();
	UNREALPROJECT_API UClass* Z_Construct_UClass_UUPAnimationAttackInterface_NoRegister();
	UNREALPROJECT_API UClass* Z_Construct_UClass_UUPCharacterStatComponent_NoRegister();
	UNREALPROJECT_API UClass* Z_Construct_UClass_UUPComboActionData_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboActionMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComboActionMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboActionData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComboActionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeadMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DeadMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Stat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HPBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HPBar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_ComboActionMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Character/UPCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_ComboActionMontage = { "ComboActionMontage", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUPCharacterBase, ComboActionMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_ComboActionMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_ComboActionMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_ComboActionData_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attack" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Character/UPCharacterBase.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_ComboActionData = { "ComboActionData", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUPCharacterBase, ComboActionData), Z_Construct_UClass_UUPComboActionData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_ComboActionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_ComboActionData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_DeadMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Character/UPCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_DeadMontage = { "DeadMontage", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUPCharacterBase, DeadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_DeadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_DeadMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_Stat_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/UPCharacterBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUPCharacterBase, Stat), Z_Construct_UClass_UUPCharacterStatComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_Stat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_Stat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_HPBar_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widget" },
		{ "Comment", "//UI Widget Section\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/UPCharacterBase.h" },
		{ "ToolTip", "UI Widget Section" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_HPBar = { "HPBar", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUPCharacterBase, HPBar), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_HPBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_HPBar_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUPCharacterBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_ComboActionMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_ComboActionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_DeadMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_Stat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPCharacterBase_Statics::NewProp_HPBar,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AUPCharacterBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUPAnimationAttackInterface_NoRegister, (int32)VTABLE_OFFSET(AUPCharacterBase, IUPAnimationAttackInterface), false },  // 3338843160
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUPCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUPCharacterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUPCharacterBase_Statics::ClassParams = {
		&AUPCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUPCharacterBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUPCharacterBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
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
		{ Z_Construct_UClass_AUPCharacterBase, AUPCharacterBase::StaticClass, TEXT("AUPCharacterBase"), &Z_Registration_Info_UClass_AUPCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUPCharacterBase), 2562222220U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPCharacterBase_h_1992986662(TEXT("/Script/UnrealProject"),
		Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPCharacterBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

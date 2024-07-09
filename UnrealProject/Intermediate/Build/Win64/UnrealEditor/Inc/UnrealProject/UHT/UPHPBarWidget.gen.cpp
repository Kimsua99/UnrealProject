// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealProject/UI/UPHPBarWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPHPBarWidget() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UNREALPROJECT_API UClass* Z_Construct_UClass_UUPHPBarWidget();
	UNREALPROJECT_API UClass* Z_Construct_UClass_UUPHPBarWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealProject();
// End Cross Module References
	void UUPHPBarWidget::StaticRegisterNativesUUPHPBarWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUPHPBarWidget);
	UClass* Z_Construct_UClass_UUPHPBarWidget_NoRegister()
	{
		return UUPHPBarWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUPHPBarWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPHPBarWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPHPBarWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/UPHPBarWidget.h" },
		{ "ModuleRelativePath", "UI/UPHPBarWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPHPBarWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPHPBarWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUPHPBarWidget_Statics::ClassParams = {
		&UUPHPBarWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUPHPBarWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPHPBarWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPHPBarWidget()
	{
		if (!Z_Registration_Info_UClass_UUPHPBarWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUPHPBarWidget.OuterSingleton, Z_Construct_UClass_UUPHPBarWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUPHPBarWidget.OuterSingleton;
	}
	template<> UNREALPROJECT_API UClass* StaticClass<UUPHPBarWidget>()
	{
		return UUPHPBarWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPHPBarWidget);
	UUPHPBarWidget::~UUPHPBarWidget() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_UI_UPHPBarWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_UI_UPHPBarWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUPHPBarWidget, UUPHPBarWidget::StaticClass, TEXT("UUPHPBarWidget"), &Z_Registration_Info_UClass_UUPHPBarWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUPHPBarWidget), 3170499123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_UI_UPHPBarWidget_h_58165192(TEXT("/Script/UnrealProject"),
		Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_UI_UPHPBarWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_UI_UPHPBarWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealProject/UI/UPUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPUserWidget() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UNREALPROJECT_API UClass* Z_Construct_UClass_UUPUserWidget();
	UNREALPROJECT_API UClass* Z_Construct_UClass_UUPUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealProject();
// End Cross Module References
	void UUPUserWidget::StaticRegisterNativesUUPUserWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUPUserWidget);
	UClass* Z_Construct_UClass_UUPUserWidget_NoRegister()
	{
		return UUPUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUPUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwningActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/UPUserWidget.h" },
		{ "ModuleRelativePath", "UI/UPUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPUserWidget_Statics::NewProp_OwningActor_MetaData[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "UI/UPUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUPUserWidget_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUPUserWidget, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPUserWidget_Statics::NewProp_OwningActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPUserWidget_Statics::NewProp_OwningActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUPUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPUserWidget_Statics::NewProp_OwningActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUPUserWidget_Statics::ClassParams = {
		&UUPUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUPUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUPUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUPUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPUserWidget()
	{
		if (!Z_Registration_Info_UClass_UUPUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUPUserWidget.OuterSingleton, Z_Construct_UClass_UUPUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUPUserWidget.OuterSingleton;
	}
	template<> UNREALPROJECT_API UClass* StaticClass<UUPUserWidget>()
	{
		return UUPUserWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPUserWidget);
	UUPUserWidget::~UUPUserWidget() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_UI_UPUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_UI_UPUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUPUserWidget, UUPUserWidget::StaticClass, TEXT("UUPUserWidget"), &Z_Registration_Info_UClass_UUPUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUPUserWidget), 1483146839U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_UI_UPUserWidget_h_2144679978(TEXT("/Script/UnrealProject"),
		Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_UI_UPUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_UI_UPUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

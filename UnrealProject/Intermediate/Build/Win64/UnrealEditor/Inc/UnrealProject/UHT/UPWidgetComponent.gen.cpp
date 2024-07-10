// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealProject/UI/UPWidgetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPWidgetComponent() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UNREALPROJECT_API UClass* Z_Construct_UClass_UUPWidgetComponent();
	UNREALPROJECT_API UClass* Z_Construct_UClass_UUPWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealProject();
// End Cross Module References
	void UUPWidgetComponent::StaticRegisterNativesUUPWidgetComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUPWidgetComponent);
	UClass* Z_Construct_UClass_UUPWidgetComponent_NoRegister()
	{
		return UUPWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUPWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPWidgetComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "UI/UPWidgetComponent.h" },
		{ "ModuleRelativePath", "UI/UPWidgetComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPWidgetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUPWidgetComponent_Statics::ClassParams = {
		&UUPWidgetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUPWidgetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPWidgetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPWidgetComponent()
	{
		if (!Z_Registration_Info_UClass_UUPWidgetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUPWidgetComponent.OuterSingleton, Z_Construct_UClass_UUPWidgetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUPWidgetComponent.OuterSingleton;
	}
	template<> UNREALPROJECT_API UClass* StaticClass<UUPWidgetComponent>()
	{
		return UUPWidgetComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPWidgetComponent);
	UUPWidgetComponent::~UUPWidgetComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_UI_UPWidgetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_UI_UPWidgetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUPWidgetComponent, UUPWidgetComponent::StaticClass, TEXT("UUPWidgetComponent"), &Z_Registration_Info_UClass_UUPWidgetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUPWidgetComponent), 57373476U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_UI_UPWidgetComponent_h_1881636171(TEXT("/Script/UnrealProject"),
		Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_UI_UPWidgetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_UI_UPWidgetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

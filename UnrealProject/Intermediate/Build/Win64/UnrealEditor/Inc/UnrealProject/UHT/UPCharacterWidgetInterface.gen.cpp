// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealProject/Interface/UPCharacterWidgetInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPCharacterWidgetInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UNREALPROJECT_API UClass* Z_Construct_UClass_UUPCharacterWidgetInterface();
	UNREALPROJECT_API UClass* Z_Construct_UClass_UUPCharacterWidgetInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealProject();
// End Cross Module References
	void UUPCharacterWidgetInterface::StaticRegisterNativesUUPCharacterWidgetInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUPCharacterWidgetInterface);
	UClass* Z_Construct_UClass_UUPCharacterWidgetInterface_NoRegister()
	{
		return UUPCharacterWidgetInterface::StaticClass();
	}
	struct Z_Construct_UClass_UUPCharacterWidgetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPCharacterWidgetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPCharacterWidgetInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/UPCharacterWidgetInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPCharacterWidgetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUPCharacterWidgetInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUPCharacterWidgetInterface_Statics::ClassParams = {
		&UUPCharacterWidgetInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUPCharacterWidgetInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPCharacterWidgetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPCharacterWidgetInterface()
	{
		if (!Z_Registration_Info_UClass_UUPCharacterWidgetInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUPCharacterWidgetInterface.OuterSingleton, Z_Construct_UClass_UUPCharacterWidgetInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUPCharacterWidgetInterface.OuterSingleton;
	}
	template<> UNREALPROJECT_API UClass* StaticClass<UUPCharacterWidgetInterface>()
	{
		return UUPCharacterWidgetInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPCharacterWidgetInterface);
	UUPCharacterWidgetInterface::~UUPCharacterWidgetInterface() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Interface_UPCharacterWidgetInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Interface_UPCharacterWidgetInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUPCharacterWidgetInterface, UUPCharacterWidgetInterface::StaticClass, TEXT("UUPCharacterWidgetInterface"), &Z_Registration_Info_UClass_UUPCharacterWidgetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUPCharacterWidgetInterface), 700431342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Interface_UPCharacterWidgetInterface_h_3062949276(TEXT("/Script/UnrealProject"),
		Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Interface_UPCharacterWidgetInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Interface_UPCharacterWidgetInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

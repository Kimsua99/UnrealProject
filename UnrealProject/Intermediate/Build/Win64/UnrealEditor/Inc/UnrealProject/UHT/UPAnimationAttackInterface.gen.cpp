// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealProject/Interface/UPAnimationAttackInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPAnimationAttackInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UNREALPROJECT_API UClass* Z_Construct_UClass_UUPAnimationAttackInterface();
	UNREALPROJECT_API UClass* Z_Construct_UClass_UUPAnimationAttackInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealProject();
// End Cross Module References
	void UUPAnimationAttackInterface::StaticRegisterNativesUUPAnimationAttackInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUPAnimationAttackInterface);
	UClass* Z_Construct_UClass_UUPAnimationAttackInterface_NoRegister()
	{
		return UUPAnimationAttackInterface::StaticClass();
	}
	struct Z_Construct_UClass_UUPAnimationAttackInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPAnimationAttackInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPAnimationAttackInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/UPAnimationAttackInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPAnimationAttackInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUPAnimationAttackInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUPAnimationAttackInterface_Statics::ClassParams = {
		&UUPAnimationAttackInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUPAnimationAttackInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPAnimationAttackInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPAnimationAttackInterface()
	{
		if (!Z_Registration_Info_UClass_UUPAnimationAttackInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUPAnimationAttackInterface.OuterSingleton, Z_Construct_UClass_UUPAnimationAttackInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUPAnimationAttackInterface.OuterSingleton;
	}
	template<> UNREALPROJECT_API UClass* StaticClass<UUPAnimationAttackInterface>()
	{
		return UUPAnimationAttackInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPAnimationAttackInterface);
	UUPAnimationAttackInterface::~UUPAnimationAttackInterface() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Interface_UPAnimationAttackInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Interface_UPAnimationAttackInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUPAnimationAttackInterface, UUPAnimationAttackInterface::StaticClass, TEXT("UUPAnimationAttackInterface"), &Z_Registration_Info_UClass_UUPAnimationAttackInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUPAnimationAttackInterface), 3338843160U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Interface_UPAnimationAttackInterface_h_3802218612(TEXT("/Script/UnrealProject"),
		Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Interface_UPAnimationAttackInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Interface_UPAnimationAttackInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

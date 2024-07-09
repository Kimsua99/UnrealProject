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
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPCharacterStatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPCharacterStatComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUPCharacterStatComponent_Statics::ClassParams = {
		&UUPCharacterStatComponent::StaticClass,
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
		{ Z_Construct_UClass_UUPCharacterStatComponent, UUPCharacterStatComponent::StaticClass, TEXT("UUPCharacterStatComponent"), &Z_Registration_Info_UClass_UUPCharacterStatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUPCharacterStatComponent), 1465456055U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_CharacterStat_UPCharacterStatComponent_h_3278214807(TEXT("/Script/UnrealProject"),
		Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_CharacterStat_UPCharacterStatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_CharacterStat_UPCharacterStatComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

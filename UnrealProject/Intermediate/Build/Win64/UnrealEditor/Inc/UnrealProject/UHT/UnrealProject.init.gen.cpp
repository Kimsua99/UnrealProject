// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UnrealProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UnrealProject()
	{
		if (!Z_Registration_Info_UPackage__Script_UnrealProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UnrealProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xF137DA82,
				0xBC9D5DB5,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UnrealProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UnrealProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UnrealProject(Z_Construct_UPackage__Script_UnrealProject, TEXT("/Script/UnrealProject"), Z_Registration_Info_UPackage__Script_UnrealProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF137DA82, 0xBC9D5DB5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

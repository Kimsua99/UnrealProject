// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealProject/Character/UPCharacterControlData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPCharacterControlData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UNREALPROJECT_API UClass* Z_Construct_UClass_UUPCharacterControlData();
	UNREALPROJECT_API UClass* Z_Construct_UClass_UUPCharacterControlData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealProject();
// End Cross Module References
	void UUPCharacterControlData::StaticRegisterNativesUUPCharacterControlData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUPCharacterControlData);
	UClass* Z_Construct_UClass_UUPCharacterControlData_NoRegister()
	{
		return UUPCharacterControlData::StaticClass();
	}
	struct Z_Construct_UClass_UUPCharacterControlData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseControllerRotationYaw_MetaData[];
#endif
		static void NewProp_bUseControllerRotationYaw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseControllerRotationYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOrientRotationToMovement_MetaData[];
#endif
		static void NewProp_bOrientRotationToMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientRotationToMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUserControllerDesiredRotation_MetaData[];
#endif
		static void NewProp_bUserControllerDesiredRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUserControllerDesiredRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetArmLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetArmLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePawnControlRotation_MetaData[];
#endif
		static void NewProp_bUsePawnControlRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePawnControlRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInheritPitch_MetaData[];
#endif
		static void NewProp_bInheritPitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInteritRoll_MetaData[];
#endif
		static void NewProp_bInteritRoll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInteritRoll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInteritYaw_MetaData[];
#endif
		static void NewProp_bInteritYaw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInteritYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoCollisionTest_MetaData[];
#endif
		static void NewProp_bDoCollisionTest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoCollisionTest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPCharacterControlData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPCharacterControlData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Character/UPCharacterControlData.h" },
		{ "ModuleRelativePath", "Character/UPCharacterControlData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bUseControllerRotationYaw_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "//\xef\xbf\xbd\xcf\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Yaw\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe9\xbc\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb4\xef\xbf\xbd.\n" },
		{ "ModuleRelativePath", "Character/UPCharacterControlData.h" },
		{ "ToolTip", "\xef\xbf\xbd\xcf\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Yaw\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe9\xbc\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb4\xef\xbf\xbd." },
	};
#endif
	void Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bUseControllerRotationYaw_SetBit(void* Obj)
	{
		((UUPCharacterControlData*)Obj)->bUseControllerRotationYaw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bUseControllerRotationYaw = { "bUseControllerRotationYaw", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UUPCharacterControlData), &Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bUseControllerRotationYaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bUseControllerRotationYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bUseControllerRotationYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bOrientRotationToMovement_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd.\n" },
		{ "ModuleRelativePath", "Character/UPCharacterControlData.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd." },
	};
#endif
	void Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bOrientRotationToMovement_SetBit(void* Obj)
	{
		((UUPCharacterControlData*)Obj)->bOrientRotationToMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bOrientRotationToMovement = { "bOrientRotationToMovement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UUPCharacterControlData), &Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bOrientRotationToMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bOrientRotationToMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bOrientRotationToMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bUserControllerDesiredRotation_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "ModuleRelativePath", "Character/UPCharacterControlData.h" },
	};
#endif
	void Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bUserControllerDesiredRotation_SetBit(void* Obj)
	{
		((UUPCharacterControlData*)Obj)->bUserControllerDesiredRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bUserControllerDesiredRotation = { "bUserControllerDesiredRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UUPCharacterControlData), &Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bUserControllerDesiredRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bUserControllerDesiredRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bUserControllerDesiredRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_RotationRate_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "ModuleRelativePath", "Character/UPCharacterControlData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUPCharacterControlData, RotationRate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_RotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_RotationRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "//\xef\xbf\xbd\xd4\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \xef\xbf\xbd\xcc\xb0\xc5\xb4\xef\xbf\xbd Movement\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n" },
		{ "ModuleRelativePath", "Character/UPCharacterControlData.h" },
		{ "ToolTip", "\xef\xbf\xbd\xd4\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \xef\xbf\xbd\xcc\xb0\xc5\xb4\xef\xbf\xbd Movement\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUPCharacterControlData, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_InputMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_InputMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_TargetArmLength_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n" },
		{ "ModuleRelativePath", "Character/UPCharacterControlData.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_TargetArmLength = { "TargetArmLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUPCharacterControlData, TargetArmLength), METADATA_PARAMS(Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_TargetArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_TargetArmLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_RelativeRotation_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Character/UPCharacterControlData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_RelativeRotation = { "RelativeRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUPCharacterControlData, RelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_RelativeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_RelativeRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bUsePawnControlRotation_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Character/UPCharacterControlData.h" },
	};
#endif
	void Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bUsePawnControlRotation_SetBit(void* Obj)
	{
		((UUPCharacterControlData*)Obj)->bUsePawnControlRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bUsePawnControlRotation = { "bUsePawnControlRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UUPCharacterControlData), &Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bUsePawnControlRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bUsePawnControlRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bUsePawnControlRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bInheritPitch_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Character/UPCharacterControlData.h" },
	};
#endif
	void Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bInheritPitch_SetBit(void* Obj)
	{
		((UUPCharacterControlData*)Obj)->bInheritPitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bInheritPitch = { "bInheritPitch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UUPCharacterControlData), &Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bInheritPitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bInheritPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bInheritPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bInteritRoll_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Character/UPCharacterControlData.h" },
	};
#endif
	void Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bInteritRoll_SetBit(void* Obj)
	{
		((UUPCharacterControlData*)Obj)->bInteritRoll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bInteritRoll = { "bInteritRoll", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UUPCharacterControlData), &Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bInteritRoll_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bInteritRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bInteritRoll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bInteritYaw_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Character/UPCharacterControlData.h" },
	};
#endif
	void Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bInteritYaw_SetBit(void* Obj)
	{
		((UUPCharacterControlData*)Obj)->bInteritYaw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bInteritYaw = { "bInteritYaw", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UUPCharacterControlData), &Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bInteritYaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bInteritYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bInteritYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bDoCollisionTest_MetaData[] = {
		{ "Category", "SpringArm" },
		{ "ModuleRelativePath", "Character/UPCharacterControlData.h" },
	};
#endif
	void Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bDoCollisionTest_SetBit(void* Obj)
	{
		((UUPCharacterControlData*)Obj)->bDoCollisionTest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bDoCollisionTest = { "bDoCollisionTest", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UUPCharacterControlData), &Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bDoCollisionTest_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bDoCollisionTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bDoCollisionTest_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUPCharacterControlData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bUseControllerRotationYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bOrientRotationToMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bUserControllerDesiredRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_RotationRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_InputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_TargetArmLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_RelativeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bUsePawnControlRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bInheritPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bInteritRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bInteritYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPCharacterControlData_Statics::NewProp_bDoCollisionTest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPCharacterControlData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPCharacterControlData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUPCharacterControlData_Statics::ClassParams = {
		&UUPCharacterControlData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUPCharacterControlData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUPCharacterControlData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUPCharacterControlData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPCharacterControlData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPCharacterControlData()
	{
		if (!Z_Registration_Info_UClass_UUPCharacterControlData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUPCharacterControlData.OuterSingleton, Z_Construct_UClass_UUPCharacterControlData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUPCharacterControlData.OuterSingleton;
	}
	template<> UNREALPROJECT_API UClass* StaticClass<UUPCharacterControlData>()
	{
		return UUPCharacterControlData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPCharacterControlData);
	UUPCharacterControlData::~UUPCharacterControlData() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPCharacterControlData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPCharacterControlData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUPCharacterControlData, UUPCharacterControlData::StaticClass, TEXT("UUPCharacterControlData"), &Z_Registration_Info_UClass_UUPCharacterControlData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUPCharacterControlData), 1336697966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPCharacterControlData_h_1256285016(TEXT("/Script/UnrealProject"),
		Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPCharacterControlData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Character_UPCharacterControlData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

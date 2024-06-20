// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealProject/Animation/UPAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPAnimInstance() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	UNREALPROJECT_API UClass* Z_Construct_UClass_UUPAnimInstance();
	UNREALPROJECT_API UClass* Z_Construct_UClass_UUPAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealProject();
// End Cross Module References
	void UUPAnimInstance::StaticRegisterNativesUUPAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUPAnimInstance);
	UClass* Z_Construct_UClass_UUPAnimInstance_NoRegister()
	{
		return UUPAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UUPAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Movement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsIdle_MetaData[];
#endif
		static void NewProp_bIsIdle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsIdle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovingThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFalling_MetaData[];
#endif
		static void NewProp_bIsFalling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFalling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsJumping_MetaData[];
#endif
		static void NewProp_bIsJumping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsJumping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpingThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUPAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/UPAnimInstance.h" },
		{ "ModuleRelativePath", "Animation/UPAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_Owner_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Animation/UPAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUPAnimInstance, Owner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_Movement_MetaData[] = {
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Animation/UPAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUPAnimInstance, Movement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_Movement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Animation/UPAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUPAnimInstance, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_GroundSpeed_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Animation/UPAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_GroundSpeed = { "GroundSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUPAnimInstance, GroundSpeed), METADATA_PARAMS(Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_GroundSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_GroundSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_bIsIdle_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Animation/UPAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_bIsIdle_SetBit(void* Obj)
	{
		((UUPAnimInstance*)Obj)->bIsIdle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_bIsIdle = { "bIsIdle", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UUPAnimInstance), &Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_bIsIdle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_bIsIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_bIsIdle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_MovingThreshold_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Animation/UPAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_MovingThreshold = { "MovingThreshold", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUPAnimInstance, MovingThreshold), METADATA_PARAMS(Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_MovingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_MovingThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_bIsFalling_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Animation/UPAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_bIsFalling_SetBit(void* Obj)
	{
		((UUPAnimInstance*)Obj)->bIsFalling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_bIsFalling = { "bIsFalling", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UUPAnimInstance), &Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_bIsFalling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_bIsFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_bIsFalling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_bIsJumping_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Animation/UPAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_bIsJumping_SetBit(void* Obj)
	{
		((UUPAnimInstance*)Obj)->bIsJumping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_bIsJumping = { "bIsJumping", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UUPAnimInstance), &Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_bIsJumping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_bIsJumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_bIsJumping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_JumpingThreshold_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Animation/UPAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_JumpingThreshold = { "JumpingThreshold", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUPAnimInstance, JumpingThreshold), METADATA_PARAMS(Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_JumpingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_JumpingThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUPAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_Movement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_GroundSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_bIsIdle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_MovingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_bIsFalling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_bIsJumping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPAnimInstance_Statics::NewProp_JumpingThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUPAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUPAnimInstance_Statics::ClassParams = {
		&UUPAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUPAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUPAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUPAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUPAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUPAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UUPAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUPAnimInstance.OuterSingleton, Z_Construct_UClass_UUPAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUPAnimInstance.OuterSingleton;
	}
	template<> UNREALPROJECT_API UClass* StaticClass<UUPAnimInstance>()
	{
		return UUPAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUPAnimInstance);
	UUPAnimInstance::~UUPAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Animation_UPAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Animation_UPAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUPAnimInstance, UUPAnimInstance::StaticClass, TEXT("UUPAnimInstance"), &Z_Registration_Info_UClass_UUPAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUPAnimInstance), 3364377681U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Animation_UPAnimInstance_h_3371189162(TEXT("/Script/UnrealProject"),
		Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Animation_UPAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_UnrealProject_Source_UnrealProject_Animation_UPAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

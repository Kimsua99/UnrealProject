// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UPCharacterControlData.generated.h"

/**
 * 
 */
UCLASS()
class UNREALPROJECT_API UUPCharacterControlData : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UUPCharacterControlData();

	//일반적으로 캐릭터의 경우 Yaw를 기반으로 폰을 이래저래 돌리면서 움직인다.
	UPROPERTY(EditAnywhere, Category = Pawn)
	uint32 bUseControllerRotationYaw : 1;
	//다음에는 움직임에 관련한 것을 정의한다.
	UPROPERTY(EditAnywhere, Category = CharacterMovement)
	uint32 bOrientRotationToMovement : 1;

	UPROPERTY(EditAnywhere, Category = CharacterMovement)
	uint32 bUserControllerDesiredRotation : 1;

	UPROPERTY(EditAnywhere, Category = CharacterMovement)
	FRotator RotationRate;
	//입력 매핑 컨텍스트를 지정. 이거는 Movement를 위함.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	TObjectPtr<class UInputMappingContext> InputMappingContext;

	//스프링 암을 위한 변수들을 지정.
	UPROPERTY(EditAnywhere, Category = SpringArm)
	float TargetArmLength;

	UPROPERTY(EditAnywhere, Category = SpringArm)
	FRotator RelativeRotation;

	UPROPERTY(EditAnywhere, Category = SpringArm)
	uint32 bUsePawnControlRotation : 1;

	UPROPERTY(EditAnywhere, Category = SpringArm)
	uint32 bInheritPitch : 1;

	UPROPERTY(EditAnywhere, Category = SpringArm)
	uint32 bInteritRoll : 1;

	UPROPERTY(EditAnywhere, Category = SpringArm)
	uint32 bInteritYaw : 1;

	UPROPERTY(EditAnywhere, Category = SpringArm)
	uint32 bDoCollisionTest : 1;
};

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

	//�Ϲ������� ĳ������ ��� Yaw�� ������� ���� �̷����� �����鼭 �����δ�.
	UPROPERTY(EditAnywhere, Category = Pawn)
	uint32 bUseControllerRotationYaw : 1;
	//�������� �����ӿ� ������ ���� �����Ѵ�.
	UPROPERTY(EditAnywhere, Category = CharacterMovement)
	uint32 bOrientRotationToMovement : 1;

	UPROPERTY(EditAnywhere, Category = CharacterMovement)
	uint32 bUserControllerDesiredRotation : 1;

	UPROPERTY(EditAnywhere, Category = CharacterMovement)
	FRotator RotationRate;
	//�Է� ���� ���ؽ�Ʈ�� ����. �̰Ŵ� Movement�� ����.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	TObjectPtr<class UInputMappingContext> InputMappingContext;

	//������ ���� ���� �������� ����.
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

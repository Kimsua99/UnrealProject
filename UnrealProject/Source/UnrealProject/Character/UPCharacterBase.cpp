// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/UPCharacterBase.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AUPCharacterBase::AUPCharacterBase()
{
	//Pawn의 기본 설정
	//회전 관련 변수들
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	//루트 컴포넌트인 캡슐에 관련된 변수들
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Pawn"));

	//움직임 해당하는 무브 컴포넌트 관련 변수들
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 700.0f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.0f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.0f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;


	//Mesh 관련 설정
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -100.0f), FRotator(0.0f, -90.0f, 0.0f));
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	GetMesh()->SetCollisionProfileName(TEXT("CharacterMesh"));

	//생성된 메쉬에 에셋 부착
	static ConstructorHelpers::FObjectFinder<USkeletalMesh>CharacterMeshRef(TEXT("/Game/Characters/Mannequins/Meshes/SKM_Quinn_Simple.SKM_Quinn_Simple"));
	if (CharacterMeshRef.Object)
		GetMesh()->SetSkeletalMesh(CharacterMeshRef.Object);

	static ConstructorHelpers::FClassFinder<UAnimInstance>AnimInstanceClassRef(TEXT("/Game/Characters/Mannequins/Animations/ABP_Quinn.ABP_Quinn_C"));
	if (AnimInstanceClassRef.Class)
		GetMesh()->SetAnimInstanceClass(AnimInstanceClassRef.Class);

}

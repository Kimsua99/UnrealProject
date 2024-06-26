// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/UPCharacterBase.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Animation/AnimMontage.h"

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
	static ConstructorHelpers::FObjectFinder<USkeletalMesh>CharacterMeshRef(TEXT("/Game/Animations/Idle.Idle"));
	if (CharacterMeshRef.Object)
		GetMesh()->SetSkeletalMesh(CharacterMeshRef.Object);

	static ConstructorHelpers::FClassFinder<UAnimInstance>AnimInstanceClassRef(TEXT("/Game/Animations/ABP_UPCharacter.ABP_UPCharacter_C"));
	if (AnimInstanceClassRef.Class)
		GetMesh()->SetAnimInstanceClass(AnimInstanceClassRef.Class);

}

void AUPCharacterBase::PressComboCommand()
{
	if (CurrentCombo == 0)//플레이가 시작 안 했음
	{
		ComboActionBegin();
	}
}

void AUPCharacterBase::ComboActionBegin()
{
	CurrentCombo = 1;

	//무브먼트 세팅
	GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_None);//이동 기능 제한

	//애니메이션 추가
	const float AttackSpeedRate = 1.0f;//재생 속도

	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	AnimInstance->Montage_Play(ComboActionMontage, AttackSpeedRate);

	//몽타주 종료 시 다음 함수 호출
	FOnMontageEnded EndDelegate;//구조체처럼 선언하고 여기에 관련된 함수 정보를 넣음.
	EndDelegate.BindUObject(this, &AUPCharacterBase::ComboActionEnd);//구조체에 바인딩할 정보를 추가함. 현재 인스턴스의 end 함수 매핑
	AnimInstance->Montage_SetEndDelegate(EndDelegate, ComboActionMontage);//바인드 시킨 구조체 넘겨줌. ComboActionMontage= 종료되면 해당 함수 호출되도록 함.
}

void AUPCharacterBase::ComboActionEnd(UAnimMontage* TargetMontage, bool isProperlyEnded)
{
	ensure(CurrentCombo != 0);//몽타주가 종료된 시점에 CurrentCombo 값이 0이 나오면 안되므로 ensure을 통해 체크함

	CurrentCombo = 0;
	GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);//이동 다시 가능하게 함.
}

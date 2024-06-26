// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/UPCharacterBase.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Animation/AnimMontage.h"

// Sets default values
AUPCharacterBase::AUPCharacterBase()
{
	//Pawn�� �⺻ ����
	//ȸ�� ���� ������
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	//��Ʈ ������Ʈ�� ĸ���� ���õ� ������
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Pawn"));

	//������ �ش��ϴ� ���� ������Ʈ ���� ������
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 700.0f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.0f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.0f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;


	//Mesh ���� ����
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -100.0f), FRotator(0.0f, -90.0f, 0.0f));
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	GetMesh()->SetCollisionProfileName(TEXT("CharacterMesh"));

	//������ �޽��� ���� ����
	static ConstructorHelpers::FObjectFinder<USkeletalMesh>CharacterMeshRef(TEXT("/Game/Animations/Idle.Idle"));
	if (CharacterMeshRef.Object)
		GetMesh()->SetSkeletalMesh(CharacterMeshRef.Object);

	static ConstructorHelpers::FClassFinder<UAnimInstance>AnimInstanceClassRef(TEXT("/Game/Animations/ABP_UPCharacter.ABP_UPCharacter_C"));
	if (AnimInstanceClassRef.Class)
		GetMesh()->SetAnimInstanceClass(AnimInstanceClassRef.Class);

}

void AUPCharacterBase::PressComboCommand()
{
	if (CurrentCombo == 0)//�÷��̰� ���� �� ����
	{
		ComboActionBegin();
	}
}

void AUPCharacterBase::ComboActionBegin()
{
	CurrentCombo = 1;

	//�����Ʈ ����
	GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_None);//�̵� ��� ����

	//�ִϸ��̼� �߰�
	const float AttackSpeedRate = 1.0f;//��� �ӵ�

	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	AnimInstance->Montage_Play(ComboActionMontage, AttackSpeedRate);

	//��Ÿ�� ���� �� ���� �Լ� ȣ��
	FOnMontageEnded EndDelegate;//����üó�� �����ϰ� ���⿡ ���õ� �Լ� ������ ����.
	EndDelegate.BindUObject(this, &AUPCharacterBase::ComboActionEnd);//����ü�� ���ε��� ������ �߰���. ���� �ν��Ͻ��� end �Լ� ����
	AnimInstance->Montage_SetEndDelegate(EndDelegate, ComboActionMontage);//���ε� ��Ų ����ü �Ѱ���. ComboActionMontage= ����Ǹ� �ش� �Լ� ȣ��ǵ��� ��.
}

void AUPCharacterBase::ComboActionEnd(UAnimMontage* TargetMontage, bool isProperlyEnded)
{
	ensure(CurrentCombo != 0);//��Ÿ�ְ� ����� ������ CurrentCombo ���� 0�� ������ �ȵǹǷ� ensure�� ���� üũ��

	CurrentCombo = 0;
	GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);//�̵� �ٽ� �����ϰ� ��.
}

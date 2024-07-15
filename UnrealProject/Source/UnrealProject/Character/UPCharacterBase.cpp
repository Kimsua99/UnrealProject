// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/UPCharacterBase.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Animation/AnimMontage.h"
#include "UPComboActionData.h"
#include "Physics/UPCollision.h"
#include "Engine/DamageEvents.h"
#include "CharacterStat/UPCharacterStatComponent.h"
#include "UI/UPWidgetComponent.h"
#include "UI/UPHPBarWidget.h"

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
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("UPCapsule"));

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
	GetMesh()->SetCollisionProfileName(TEXT("NoCollision"));

	//������ �޽��� ���� ����
	static ConstructorHelpers::FObjectFinder<USkeletalMesh>CharacterMeshRef(TEXT("/Game/Animations/Idle.Idle"));
	if (CharacterMeshRef.Object)
		GetMesh()->SetSkeletalMesh(CharacterMeshRef.Object);

	static ConstructorHelpers::FClassFinder<UAnimInstance>AnimInstanceClassRef(TEXT("/Game/Animations/ABP_UPCharacter.ABP_UPCharacter_C"));
	if (AnimInstanceClassRef.Class)
		GetMesh()->SetAnimInstanceClass(AnimInstanceClassRef.Class);

	static ConstructorHelpers::FObjectFinder<UAnimMontage>ComboActionMontageRef(TEXT("/Script/Engine.AnimMontage'/Game/Animations/AM_ComboAttack.AM_ComboAttack'"));
	if (ComboActionMontageRef.Object)
		ComboActionMontage = ComboActionMontageRef.Object;

	static ConstructorHelpers::FObjectFinder<UUPComboActionData>ComboActionDataRef(TEXT("/Script/UnrealProject.UPComboActionData'/Game/UnrealProject/CharacterAction/UPA_ComboAttack.UPA_ComboAttack'"));
	if (ComboActionDataRef.Object)
		ComboActionData = ComboActionDataRef.Object;

	static ConstructorHelpers::FObjectFinder<UAnimMontage>DeadMontageRef(TEXT("/Script/Engine.AnimMontage'/Game/Animations/EnemyAnim/AM_EnemyDead.AM_EnemyDead'"));
	if (DeadMontageRef.Object)
		DeadMontage = DeadMontageRef.Object;

	//Stat Component
	Stat = CreateDefaultSubobject<UUPCharacterStatComponent>(TEXT("Stat"));

	//Widget Component
	HPBar = CreateDefaultSubobject<UUPWidgetComponent>(TEXT("Widget"));

	HPBar->SetupAttachment(GetMesh());
	HPBar->SetRelativeLocation(FVector(0.0f, 0.0f, 180.0f));

	static ConstructorHelpers::FClassFinder<UUserWidget>HPBarWidgetRef(TEXT("/Game/UI/WBP_HPBar.WBP_HPBar_C"));

	if (HPBarWidgetRef.Class)
	{
		HPBar->SetWidgetClass(HPBarWidgetRef.Class);
		HPBar->SetWidgetSpace(EWidgetSpace::Screen);
		HPBar->SetDrawSize(FVector2D(150.0f, 15.0f));
		HPBar->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

void AUPCharacterBase::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	Stat->OnHPZero.AddUObject(this, &AUPCharacterBase::SetDead);
}

void AUPCharacterBase::PressComboCommand()
{
	if (CurrentCombo == 0)//�÷��̰� ���� �� ����
	{
		ComboActionBegin();
		return;
	}

	if (!ComboTimerHandle.IsValid())
	{
		HasNextComboCommand = false;
	}
	else
	{
		HasNextComboCommand = true;
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

	ComboTimerHandle.Invalidate();
	SetComboCheckTimer();
}

void AUPCharacterBase::ComboActionEnd(UAnimMontage* TargetMontage, bool isProperlyEnded)
{
	ensure(CurrentCombo != 0);//��Ÿ�ְ� ����� ������ CurrentCombo ���� 0�� ������ �ȵǹǷ� ensure�� ���� üũ��

	CurrentCombo = 0;
	GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);//�̵� �ٽ� �����ϰ� ��.
}

void AUPCharacterBase::SetComboCheckTimer()//Ÿ�̸� �ߵ� �Լ�
{
	//�迭�� ����Ǿ��ִ� Ÿ�̸� ����(������ ����)�� ��� ���� �ε��� �� ����
	int32 ComboIndex = CurrentCombo - 1;
	ensure(ComboActionData->EffectiveFrameCount.IsValidIndex(ComboIndex));//true���� ��

	const float AttackSpeedRate = 1.0f;
	//���� �ӵ��� �������� �� �ҿ�� �ð� ���. �ߵ��� �ð� ���� ��.
	float ComboEffectiveTime = (ComboActionData->EffectiveFrameCount[ComboIndex] / ComboActionData->FrameRate) / AttackSpeedRate;

	if (ComboEffectiveTime > 0.0f)//0���� ������ �ߵ���ų �ʿ䰡 ����.
	{
		//����κ��� �ð� ���񽺸� ����. �� ���� �ߵ��ϵ��� ��
		GetWorld()->GetTimerManager().SetTimer(ComboTimerHandle, this, &AUPCharacterBase::ComboCheck, ComboEffectiveTime, false);
	}
}

void AUPCharacterBase::ComboCheck()//Ÿ�̸� �ߵ� �ÿ� �Է��� ���Դ��� �ƴ��� üũ�ϴ� �Լ�
{
	//Ÿ�̸Ӱ� �ߵ��Ǹ� ComboTimerHandle �ʱ�ȭ
	ComboTimerHandle.Invalidate();
	if (HasNextComboCommand)//���� Ŀ�ǵ� ��������(Ÿ�̸� �ߵ� ���� �Է��� ���� true�� �Ǿ��ٸ�)
	{
		//���� �������� �Ѱ���.
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();

		//���� �޺� �� �ϳ� �߰�. 
		//������ �޺� ���� ����� �ȵǹǷ� MaxComboCount�� ����� �ʵ��� Clamp�� �ɾ���.
		CurrentCombo = FMath::Clamp(CurrentCombo + 1, 1, ComboActionData->MaxComboCount);
		//���� ���ǿ� ���� �̸� ������ ������,
		//���λ� ������ ��������, �޺� ���� �����ؼ� ��Ʈ������ �����
		//�̰��� �������� ��ȯ�� ���� �̸��� ����
		FName NextSection = *FString::Printf(TEXT("%s%d"), *ComboActionData->MontageSectionNamePrefix, CurrentCombo);
		//�ش� �������� ����� �ٷ� ������.
		AnimInstance->Montage_JumpToSection(NextSection, ComboActionMontage);
		//Ÿ�̸� �ɾ���.
		SetComboCheckTimer();
		//�Է°� �ʱ�ȭ
		HasNextComboCommand = false;
	}
}

void AUPCharacterBase::AttackHitCheck()	//Ʈ���̽� ä�� Ȱ���� ��ü �浹�ϴ��� �˻��ϴ� ����
{	
	TArray<FHitResult> OutHitResult;//��� ���� �޾ƿ� ����ü

	FCollisionQueryParams Params(SCENE_QUERY_STAT(Attack), false, this);//�Ķ����. (�ݸ��� �м� �� �ĺ��� ����, ������ �浹ü�� ���� ����, ������ ����)

	const float AttackRange = 40.0f;//Start ~ End ����
	const float AttackRadius = 50.0f;//��ü�� ������
	const float AttackDamage = 30.0f;

	//���������� ��� ���� ���� ��ġ�� ���� �ü� ���⿡ ĸ�� ������Ʈ�� ������ ���� ���� ���ؼ� ������ ��ġ���� ���۵Ǵ� ���� �ƴ϶� ���鿡 �ִ� ĸ���� ��ġ�������� ���۵ǵ��� ����
	const FVector Start = GetActorLocation() + GetActorForwardVector() * GetCapsuleComponent()->GetScaledCapsuleRadius();
	const FVector End = Start + GetActorForwardVector() * AttackRange;

	bool HitDetected = GetWorld()->SweepMultiByChannel(OutHitResult, Start, End, FQuat::Identity, ECC_GameTraceChannel1,
		FCollisionShape::MakeSphere(AttackRadius), Params);
	//(����� ����ü, ���� ��������, ���� ������, ȸ�� ��� x, ��ó�� ������ Ʈ���̽� ä�θ�, ��ü ���� ����(��ü ������), �Ķ����)
	//�浹 �����Ǹ� true ��ȯ
	UE_LOG(LogTemp, Log, TEXT("WW"));
	if (HitDetected)
	{
		for (FHitResult Enemy : OutHitResult)
		{
			if (Enemy.GetActor()->IsValidLowLevel())
			{
				//UE_LOG(LogTemp, Error, TEXT("Hit Actor Name : %s"), *OutHitResult.GetActor()->GetName());
				FDamageEvent DamageEvent;

				Enemy.GetActor()->TakeDamage(AttackDamage, DamageEvent, Controller, Controller->GetPawn());
				//OutHitResult.GetActor()->TakeDamage(AttackDamage, DamageEvent, GetController(), this);
			}
		}
	}

	//�浹 ���� ���� ������ ���� ǥ�� -> ���Ǻ� ������
#if ENABLE_DRAW_DEBUG

	FVector CapsuleOrigin = Start + (End - Start) * 0.5f;
	float CapsuleHalfHeight = AttackRange * 0.5f;
	FColor DrawColor = HitDetected ? FColor::Green : FColor::Red;

	DrawDebugCapsule(GetWorld(), CapsuleOrigin, CapsuleHalfHeight, AttackRadius, FRotationMatrix::MakeFromZ(GetActorForwardVector()).ToQuat(), DrawColor, false, 5.0f);

#endif
}

float AUPCharacterBase::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	Stat->ApplyDamage(DamageAmount);

	return DamageAmount;
}

void AUPCharacterBase::SetDead()
{
	GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_None);
	PlayDeadAnimation();
	SetActorEnableCollision(false);
	HPBar->SetHiddenInGame(true);
}

void AUPCharacterBase::PlayDeadAnimation()
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	AnimInstance->StopAllMontages(0.0f);
	AnimInstance->Montage_Play(DeadMontage, 1.0f);
}

void AUPCharacterBase::SetUpCharacterWidget(UUPUserWidget* InUserWidget)
{
	UUPHPBarWidget* HPBarWidget = Cast<UUPHPBarWidget>(InUserWidget);

	if (HPBarWidget)
	{
		HPBarWidget->SetMaxHp(Stat->GetMaxHP());
		HPBarWidget->UpdateHpBar(Stat->GetCurrentHP());
		Stat->OnHPChanged.AddUObject(HPBarWidget, &UUPHPBarWidget::UpdateHpBar);
	}
}

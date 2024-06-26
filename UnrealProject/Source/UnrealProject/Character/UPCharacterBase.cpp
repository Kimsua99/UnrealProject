// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/UPCharacterBase.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Animation/AnimMontage.h"
#include "UPComboActionData.h"

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

	ComboTimerHandle.Invalidate();
	SetComboCheckTimer();
}

void AUPCharacterBase::ComboActionEnd(UAnimMontage* TargetMontage, bool isProperlyEnded)
{
	ensure(CurrentCombo != 0);//몽타주가 종료된 시점에 CurrentCombo 값이 0이 나오면 안되므로 ensure을 통해 체크함

	CurrentCombo = 0;
	GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);//이동 다시 가능하게 함.
}

void AUPCharacterBase::SetComboCheckTimer()//타이머 발동 함수
{
	//배열에 선언되어있는 타이머 정보(프레임 정보)를 얻기 위해 인덱스 값 조정
	int32 ComboIndex = CurrentCombo - 1;
	ensure(ComboActionData->EffectiveFrameCount.IsValidIndex(ComboIndex));//true여야 함

	const float AttackSpeedRate = 1.0f;
	//정상 속도로 진행했을 때 소요된 시간 계산. 발동할 시간 정보 얻어냄.
	float ComboEffectiveTime = (ComboActionData->EffectiveFrameCount[ComboIndex] / ComboActionData->FrameRate) / AttackSpeedRate;

	if (ComboEffectiveTime > 0.0f)//0보다 작으면 발동시킬 필요가 없음.
	{
		//월드로부터 시간 서비스를 받음. 한 번만 발동하도록 함
		GetWorld()->GetTimerManager().SetTimer(ComboTimerHandle, this, &AUPCharacterBase::ComboCheck, ComboEffectiveTime, false);
	}
}

void AUPCharacterBase::ComboCheck()//타이머 발동 시에 입력이 들어왔는지 아닌지 체크하는 함수
{
	//타이머가 발동되면 ComboTimerHandle 초기화
	ComboTimerHandle.Invalidate();
	if (HasNextComboCommand)//다음 커맨드 들어왔으면(타이머 발동 전에 입력이 들어와 true가 되었다면)
	{
		//다음 섹션으로 넘겨줌.
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();

		//현재 콤보 값 하나 추가. 
		//지정한 콤보 값을 벗어나면 안되므로 MaxComboCount를 벗어나지 않도록 Clamp를 걸어줌.
		CurrentCombo = FMath::Clamp(CurrentCombo + 1, 1, ComboActionData->MaxComboCount);
		//다음 섹션에 대한 이름 정보를 가져옴,
		//접두사 정보를 가져오고, 콤보 값을 조합해서 스트링으로 만들고
		//이것을 네임으로 변환해 섹션 이름을 지정
		FName NextSection = *FString::Printf(TEXT("%s%d"), *ComboActionData->MontageSectionNamePrefix, CurrentCombo);
		//해당 섹션으로 재생이 바로 점프됨.
		AnimInstance->Montage_JumpToSection(NextSection, ComboActionMontage);
		//타이머 걸어줌.
		SetComboCheckTimer();
		//입력값 초기화
		HasNextComboCommand = false;
	}
}

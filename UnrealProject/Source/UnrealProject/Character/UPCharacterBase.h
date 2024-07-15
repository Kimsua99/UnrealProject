// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interface/UPAnimationAttackInterface.h"
#include "Interface/UPCharacterWidgetInterface.h"
#include "UPCharacterBase.generated.h"

UCLASS()
class UNREALPROJECT_API AUPCharacterBase : public ACharacter, public IUPAnimationAttackInterface, public IUPCharacterWidgetInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AUPCharacterBase();

	virtual void PostInitializeComponents() override;

//Combo Action Section
protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animation)
	TObjectPtr<class UAnimMontage> ComboActionMontage;
	
	//몽타주 정보에 대한 데이터 에셋 로딩 위한 변수
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UUPComboActionData> ComboActionData;

	void PressComboCommand();

	void ComboActionBegin();//몽타주 시작될 때 호출
	void ComboActionEnd(class UAnimMontage* TargetMontage, bool isProperlyEnded);//몽타주 종료 시 호출 함수. 몽타주에 설정된 델리게이트 통해 바로 호출되도록 파라미터 맞춤.

	void SetComboCheckTimer();
	void ComboCheck();

	int32 CurrentCombo = 0;
	FTimerHandle ComboTimerHandle;
	bool HasNextComboCommand = false;

	// Attack Hit Section
protected:
	virtual void AttackHitCheck() override;
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	// Dead Section
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Stat, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UAnimMontage> DeadMontage;

	virtual void SetDead();
	void PlayDeadAnimation();

	float DeadEventDelayTime = 5.0f;

	//Stat Section
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Stat, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UUPCharacterStatComponent> Stat;

	//UI Widget Section
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Widget, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UUPWidgetComponent> HPBar;
	
	virtual void SetUpCharacterWidget(class UUPUserWidget* InUserWidget) override;

};

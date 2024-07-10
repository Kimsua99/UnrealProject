// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UPCharacterStatComponent.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnHPZeroDelegate);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnHPChangedDelegate, float /*CurrentHP*/);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UNREALPROJECT_API UUPCharacterStatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UUPCharacterStatComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	FOnHPZeroDelegate OnHPZero;
	FOnHPChangedDelegate OnHPChanged;

public:
	FORCEINLINE float GetMaxHP() { return maxHP; }
	FORCEINLINE float GetCurrentHP() { return CurrentHP; }

	float ApplyDamage(float InDamage);

protected:
	void SetHP(float NewHP);

	UPROPERTY(VisibleInstanceOnly, Category = Stat)//체력은 캐릭터 마다 별도이므로 인스턴스 온리로 지정
	float maxHP;

	UPROPERTY(Transient, VisibleInstanceOnly, Category = Stat)//현재 체력은 게임을 할 때 마다 새롭게 되므로 디스크에 저장되지 않게 Transient 붙여줌.
	float CurrentHP;
};

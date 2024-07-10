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

	UPROPERTY(VisibleInstanceOnly, Category = Stat)//ü���� ĳ���� ���� �����̹Ƿ� �ν��Ͻ� �¸��� ����
	float maxHP;

	UPROPERTY(Transient, VisibleInstanceOnly, Category = Stat)//���� ü���� ������ �� �� ���� ���Ӱ� �ǹǷ� ��ũ�� ������� �ʰ� Transient �ٿ���.
	float CurrentHP;
};

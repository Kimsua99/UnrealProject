
#include "CharacterStat/UPCharacterStatComponent.h"

UUPCharacterStatComponent::UUPCharacterStatComponent()
{
	maxHP = 200.0f;
	CurrentHP = maxHP;
}


// Called when the game starts
void UUPCharacterStatComponent::BeginPlay()
{
	Super::BeginPlay();

	SetHP(maxHP);
}

float UUPCharacterStatComponent::ApplyDamage(float InDamage)
{
	const float PrevHP = CurrentHP;
	const float ActualDamage = FMath::Clamp<float>(InDamage, 0, InDamage);

	SetHP(PrevHP - ActualDamage);

	if (CurrentHP <= KINDA_SMALL_NUMBER)
	{
		OnHPZero.Broadcast();
		//Á×À½
	}
	return ActualDamage;
}

void UUPCharacterStatComponent::SetHP(float NewHP)
{
	CurrentHP = FMath::Clamp<float>(NewHP, 0.0f, maxHP);

	OnHPChanged.Broadcast(CurrentHP);
}


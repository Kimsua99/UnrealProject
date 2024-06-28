// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/UPCharacterEnemy.h"

AUPCharacterEnemy::AUPCharacterEnemy()
{

}

void AUPCharacterEnemy::SetDead()
{
	Super::SetDead();

	FTimerHandle DeadTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(DeadTimerHandle, FTimerDelegate::CreateLambda(
		[&]()
		{
			Destroy();
		}
	), DeadEventDelayTime, false);
}

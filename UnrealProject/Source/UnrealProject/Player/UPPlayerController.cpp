// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/UPPlayerController.h"

void AUPPlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameOnly GameOnlyInputMode;//구조체
	SetInputMode(GameOnlyInputMode);//시작하자마자 포커스가 뷰포트 안으로 들어감.
}
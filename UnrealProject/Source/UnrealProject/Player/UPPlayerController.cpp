// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/UPPlayerController.h"

void AUPPlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameOnly GameOnlyInputMode;//����ü
	SetInputMode(GameOnlyInputMode);//�������ڸ��� ��Ŀ���� ����Ʈ ������ ��.
}
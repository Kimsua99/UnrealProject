// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/UPGameModeBase.h"
#include "UPGameModeBase.h"

AUPGameModeBase::AUPGameModeBase()
{
	//static ConstructorHelpers::FClassFinder<APawn>ThirdPersonClassRef(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C"));

	//if (ThirdPersonClassRef.Class)
	//{
	//	DefaultPawnClass = ThirdPersonClassRef.Class;
	//}

	static ConstructorHelpers::FClassFinder<APawn>DefaultPawnCalssRef(TEXT("/Script/UnrealProject.UPCharacterPlayer"));

	if (DefaultPawnCalssRef.Class)
	{
		DefaultPawnClass = DefaultPawnCalssRef.Class;
	}
	static ConstructorHelpers::FClassFinder<APlayerController>PlayerControllerClassRef(TEXT("/Script/UnrealProject.UPPlayerController"));

	if (PlayerControllerClassRef.Class)
	{
		PlayerControllerClass = PlayerControllerClassRef.Class;
	}
}

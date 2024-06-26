// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UPComboActionData.generated.h"

/**
 * 
 */
UCLASS()
class UNREALPROJECT_API UUPComboActionData : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UUPComboActionData();

	UPROPERTY(EditAnywhere, Category = Name)
	FString MontageSectionNamePrefix;//몽타주 섹션 이름

	UPROPERTY(EditAnywhere, Category = Name)
	uint8 MaxComboCount;//총 몇개의 콤보 액션이 있는지

	UPROPERTY(EditAnywhere, Category = Name)
	float FrameRate;//프레임의 기준 재생 속도

	UPROPERTY(EditAnywhere, Category = Name)
	TArray<float> EffectiveFrameCount;//각 프레임마다 입력 감지 위한 프레임. 해당 프레임쯤에 같은 입력이 들어왔는지 체크하고 이에 따라 다음 프레임 재생 여부 결정
};

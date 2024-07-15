// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UPUserWidget.h"
#include "UPHPBarWidget.generated.h"

/**
 * 
 */
UCLASS()
class UNREALPROJECT_API UUPHPBarWidget : public UUPUserWidget
{
	GENERATED_BODY()

public:
	UUPHPBarWidget(const FObjectInitializer& ObjectInitializer);//위젯의 경우 FObjectInitializer 라는 생성자 사용

protected:
	//위젯이 초기화될 때 HpProgressBar를 가져와서 포인터를 가져오는 기능 추가.
	virtual void NativeConstruct() override;

public:
	FORCEINLINE void SetMaxHp(float NewMaxHp) { MaxHp = NewMaxHp; }
	//현재 hp 상태에 따라서 hp 바의 비율 계산해 업데이트 하는 함수
	void UpdateHpBar(float NewCurrentHp);

protected:
	UPROPERTY()
	TObjectPtr<class UProgressBar> HpProgressBar;//hp바를 표시하는데 사용할 프로그레스 바 컨트롤에 대한 오브젝트 포인터 지정

	UPROPERTY()
	float MaxHp;

};

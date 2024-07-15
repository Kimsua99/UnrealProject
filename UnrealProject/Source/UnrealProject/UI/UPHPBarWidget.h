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
	UUPHPBarWidget(const FObjectInitializer& ObjectInitializer);//������ ��� FObjectInitializer ��� ������ ���

protected:
	//������ �ʱ�ȭ�� �� HpProgressBar�� �����ͼ� �����͸� �������� ��� �߰�.
	virtual void NativeConstruct() override;

public:
	FORCEINLINE void SetMaxHp(float NewMaxHp) { MaxHp = NewMaxHp; }
	//���� hp ���¿� ���� hp ���� ���� ����� ������Ʈ �ϴ� �Լ�
	void UpdateHpBar(float NewCurrentHp);

protected:
	UPROPERTY()
	TObjectPtr<class UProgressBar> HpProgressBar;//hp�ٸ� ǥ���ϴµ� ����� ���α׷��� �� ��Ʈ�ѿ� ���� ������Ʈ ������ ����

	UPROPERTY()
	float MaxHp;

};

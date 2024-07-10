// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/UPHPBarWidget.h"
#include "Components/ProgressBar.h"


UUPHPBarWidget::UUPHPBarWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	MaxHp = -1.0f;//������ ǥ������ ������ ������ ������ ����Ƿ� �ʱ�ȭ �ÿ��� �ùٸ� ������ �����ϵ��� �ȳ�
}

void UUPHPBarWidget::NativeConstruct()
{
	Super::NativeConstruct();//�� �Լ��� ȣ��Ǹ� UI�� ���õ� ��� ��ɵ��� �ʱ�ȭ �Ϸ�� ����

	HpProgressBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("PbHpBar")));//������ ��Ʈ�ѿ� ���� ���α׷��� �ٸ� �̸����� ã��
	ensure(HpProgressBar);
}

void UUPHPBarWidget::UpdateHpBar(float NewCurrentHp)
{
	//Ȯ���� üũ�ϰ� �Ѿ. 0���� ū��
	ensure(MaxHp > 0.0f);

	if (HpProgressBar)//�����ͷ� ������ ��ü�� ������ 
	{
		HpProgressBar->SetPercent(NewCurrentHp / MaxHp);
	}
}
 
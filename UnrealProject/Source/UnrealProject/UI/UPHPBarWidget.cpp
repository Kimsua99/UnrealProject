// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/UPHPBarWidget.h"
#include "Components/ProgressBar.h"
#include "Interface/UPCharacterWidgetInterface.h"


UUPHPBarWidget::UUPHPBarWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	MaxHp = -1.0f;//음수로 표시하지 않으면 설정에 문제가 생기므로 초기화 시에는 올바른 값으로 지정하도록 안내
}

void UUPHPBarWidget::NativeConstruct()
{
	Super::NativeConstruct();

	HpProgressBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("PbHPBar")));
	ensure(HpProgressBar);

	IUPCharacterWidgetInterface* CharacterWidget = Cast<IUPCharacterWidgetInterface>(OwningActor);

	if (CharacterWidget)
	{
		CharacterWidget->SetUpCharacterWidget(this);
	}
}

void UUPHPBarWidget::UpdateHpBar(float NewCurrentHp)
{
	//확실히 체크하고 넘어감. 0보다 큰지
	ensure(MaxHp > 0.0f);

	if (HpProgressBar)//포인터로 선언한 객체가 있으면 
	{
		HpProgressBar->SetPercent(NewCurrentHp / MaxHp);
	}
}
 
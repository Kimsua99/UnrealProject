// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/UPWidgetComponent.h"
#include "UPUserWidget.h"

void UUPWidgetComponent::InitWidget()//BeginPlay가 호출되면 이 함수가 호출되는데, 이때 내부의 CreateWidget 함수를 통해 위젯이 생성된다. 이후 NativeConstruct 함수가 실행된다.
{
	Super::InitWidget();

	UUPUserWidget* UPUserWidget = Cast<UUPUserWidget>(GetWidget());//인스턴스화 되어 위젯 생성 완료되었으므로 캐스팅해서 위젯 받아올 수 있음.
	if (UPUserWidget)
	{
		UPUserWidget->SetOwningActor(GetOwner());//자신을 소유하고 있는 액터 정보를 얻어옴.
	}
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/UPWidgetComponent.h"
#include "UPUserWidget.h"

void UUPWidgetComponent::InitWidget()//BeginPlay�� ȣ��Ǹ� �� �Լ��� ȣ��Ǵµ�, �̶� ������ CreateWidget �Լ��� ���� ������ �����ȴ�. ���� NativeConstruct �Լ��� ����ȴ�.
{
	Super::InitWidget();

	UUPUserWidget* UPUserWidget = Cast<UUPUserWidget>(GetWidget());//�ν��Ͻ�ȭ �Ǿ� ���� ���� �Ϸ�Ǿ����Ƿ� ĳ�����ؼ� ���� �޾ƿ� �� ����.
	if (UPUserWidget)
	{
		UPUserWidget->SetOwningActor(GetOwner());//�ڽ��� �����ϰ� �ִ� ���� ������ ����.
	}
}

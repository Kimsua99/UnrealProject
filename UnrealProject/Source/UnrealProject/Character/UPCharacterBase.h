// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "UPCharacterBase.generated.h"

UCLASS()
class UNREALPROJECT_API AUPCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AUPCharacterBase();

//Combo Action Section
protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animation)
	TObjectPtr<class UAnimMontage> ComboActionMontage;
	
	//��Ÿ�� ������ ���� ������ ���� �ε� ���� ����
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UUPComboActionData> ComboActionData;

	void PressComboCommand();

	void ComboActionBegin();//��Ÿ�� ���۵� �� ȣ��
	void ComboActionEnd(class UAnimMontage* TargetMontage, bool isProperlyEnded);//��Ÿ�� ���� �� ȣ�� �Լ�. ��Ÿ�ֿ� ������ ��������Ʈ ���� �ٷ� ȣ��ǵ��� �Ķ���� ����.

	int32 CurrentCombo = 0;
};

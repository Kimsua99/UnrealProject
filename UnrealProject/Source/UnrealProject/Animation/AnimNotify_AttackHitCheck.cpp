// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/AnimNotify_AttackHitCheck.h"
#include "Interface/UPAnimationAttackInterface.h"//���� ���� ���� ĳ���� Ȯ���� ���� ĳ���� ��� �߰��ϴ� ��� ������ ���߱� ���� �������̽� ����

void UAnimNotify_AttackHitCheck::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);

	if (MeshComp)
	{
		//�޽� ������Ʈ�� ������ �̸� �����ϰ� �ִ� owner ������. �޾ƿ� �޽� ������Ʈ�� owner�� �������̽� �����ߴ��� üũ
		IUPAnimationAttackInterface* AttackPawn = Cast<IUPAnimationAttackInterface> (MeshComp->GetOwner());

		if (AttackPawn)//����� owner�� �޾ƿԴٸ� nullptr�� �ƴϰ� ��. �������̽� ���� üũ �뵵
		{
			AttackPawn->AttackHitCheck();
		}
	}
}

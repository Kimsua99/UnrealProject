// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/AnimNotify_AttackHitCheck.h"
#include "Interface/UPAnimationAttackInterface.h"//공격 판정 위해 캐릭터 확인을 위한 캐릭터 헤더 추가하는 대신 의존성 낮추기 위한 인터페이스 생성

void UAnimNotify_AttackHitCheck::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);

	if (MeshComp)
	{
		//메시 컴포넌트가 있으면 이를 소유하고 있는 owner 가져옴. 받아온 메쉬 컴포넌트의 owner가 인터페이스 구현했는지 체크
		IUPAnimationAttackInterface* AttackPawn = Cast<IUPAnimationAttackInterface> (MeshComp->GetOwner());

		if (AttackPawn)//제대로 owner를 받아왔다면 nullptr이 아니게 됨. 인터페이스 구현 체크 용도
		{
			AttackPawn->AttackHitCheck();
		}
	}
}

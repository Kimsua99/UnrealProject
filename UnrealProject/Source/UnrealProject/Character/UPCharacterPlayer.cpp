// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/UPCharacterPlayer.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "InputMappingContext.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

AUPCharacterPlayer::AUPCharacterPlayer()
{
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));//������Ʈ ����
	CameraBoom->SetupAttachment(RootComponent);//��Ʈ�� ����
	CameraBoom->TargetArmLength = 400.0f; //���� 4M
	CameraBoom->bUsePawnControlRotation = true;//�θ��� ȸ���� ����Ұ���

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); //ī�޶� �����뿡 �����ϴµ�, �����̶�� Ư���� �̸� ������ �����ϸ� �ڵ����� ���� �޶����
	FollowCamera->bUsePawnControlRotation = false;

	static ConstructorHelpers::FObjectFinder<UInputMappingContext> MappingContext(TEXT("/Script/EnhancedInput.InputMappingContext'/Game/UnrealProject/Input/IMC_Default.IMC_Default'"));
	if (MappingContext.Object) {
		DefaultMappingContext = MappingContext.Object;
	}
	static ConstructorHelpers::FObjectFinder<UInputAction> JUMPACTION(TEXT("/Script/EnhancedInput.InputAction'/Game/UnrealProject/Input/Actions/IA_Jump.IA_Jump'"));
	if (JUMPACTION.Object) {
		JumpAction = JUMPACTION.Object;
	}

	static ConstructorHelpers::FObjectFinder<UInputAction> MOVEACTION(TEXT("/Script/EnhancedInput.InputAction'/Game/UnrealProject/Input/Actions/IA_Move.IA_Move'"));
	if (MOVEACTION.Object) {
		MoveAction = MOVEACTION.Object;
	}

	static ConstructorHelpers::FObjectFinder<UInputAction> LOOKACTION(TEXT("/Script/EnhancedInput.InputAction'/Game/UnrealProject/Input/Actions/IA_Look.IA_Look'"));
	if (LOOKACTION.Object) {
		LookAction = LOOKACTION.Object;
	}
}

void AUPCharacterPlayer::BeginPlay()//���� ���ؽ�Ʈ �߰�. �÷��̾ ������� ����� ���� Ŭ�����̹Ƿ� CastChecked�� ���.
{
	Super::BeginPlay();

	APlayerController* PlayerController = CastChecked<APlayerController>(GetController());
	//Subsystem�̶�� �ϴ� ��ǲ �ý����� �����ͼ� ���� ���ؽ�Ʈ ������ �߰�����.
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
	{
		//�켱������ �����ؼ� �پ��� �Էµ��� ���� ��ĥ ������ �켱������ ���� �Է¿� ���� �׼ǵ��� ���ε��Ǿ� ������ �� �ֵ��� ����.
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
		//Subsystem->RemoveMappingContext(DefaultMappingContext);
	}

}
//���⼭ �Է��� ���� �� EnhancedInputComponent�� ����ϴµ�, ������ ���� ��쵵 �����Ƿ� ������ �߻��ϵ��� CastChecked �Լ��� ���. �ݵ�� EnhancedInputComponent�� ����ϰ� ����.
void AUPCharacterPlayer::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);
	//���������� ĳ������ �� ���, �ռ� ������ �𸮾� ������Ʈ��� Move, Look �Լ��� ���� ���ε� ����.
	//������ ��� ���� ĳ���Ͱ� �����ϴ� Jump�� StopJumping �Լ��� ���� ������ ���� �׼� �����ϵ��� ����.
	EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
	EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);
	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AUPCharacterPlayer::Move);
	EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AUPCharacterPlayer::Look);
}

//FInputActionValue���� x,y���� ������ �Ŀ� �̰͵��� �����Ʈ ������Ʈ�� �����Ͽ� ���������� �̵��̳� ȸ���� ���������ν� SpringArm�� ��Ʈ�ѷ��� �ٶ󺸰� ����
void AUPCharacterPlayer::Move(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();

	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);

	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	AddMovementInput(ForwardDirection, MovementVector.X);
	AddMovementInput(RightDirection, MovementVector.Y);
}

void AUPCharacterPlayer::Look(const FInputActionValue& Value)
{
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	AddControllerYawInput(LookAxisVector.X);
	AddControllerPitchInput(LookAxisVector.Y);
}
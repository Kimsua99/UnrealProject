// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/UPCharacterPlayer.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "InputMappingContext.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

AUPCharacterPlayer::AUPCharacterPlayer()
{
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));//컴포넌트 생성
	CameraBoom->SetupAttachment(RootComponent);//루트에 부착
	CameraBoom->TargetArmLength = 400.0f; //길이 4M
	CameraBoom->bUsePawnControlRotation = true;//부모의 회전값 사용할건지

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); //카메라 지지대에 부착하는데, 소켓이라는 특별한 이름 지시자 지정하면 자동으로 끝에 달라붙음
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

void AUPCharacterPlayer::BeginPlay()//매핑 컨텍스트 추가. 플레이어를 대상으로 설계된 전용 클래스이므로 CastChecked를 사용.
{
	Super::BeginPlay();

	APlayerController* PlayerController = CastChecked<APlayerController>(GetController());
	//Subsystem이라고 하는 인풋 시스템을 가져와서 매핑 컨텍스트 에셋을 추가해줌.
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
	{
		//우선순위를 지정해서 다양한 입력들이 서로 겹칠 때에도 우선순위가 높은 입력에 대해 액션들이 바인딩되어 수행할 수 있도록 지정.
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
		//Subsystem->RemoveMappingContext(DefaultMappingContext);
	}

}
//여기서 입력을 받을 때 EnhancedInputComponent를 사용하는데, 사용되지 않은 경우도 있으므로 에러를 발생하도록 CastChecked 함수를 사용. 반드시 EnhancedInputComponent를 사용하게 해줌.
void AUPCharacterPlayer::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);
	//성공적으로 캐스팅이 된 경우, 앞서 지정한 언리얼 오브젝트들과 Move, Look 함수에 대해 바인딩 진행.
	//점프의 경우 실제 캐릭터가 제공하는 Jump와 StopJumping 함수를 직접 연결해 관련 액션 수행하도록 연결.
	EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
	EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);
	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AUPCharacterPlayer::Move);
	EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AUPCharacterPlayer::Look);
}

//FInputActionValue에서 x,y값을 가져온 후에 이것들을 무브먼트 컴포넌트와 연결하여 실질적으로 이동이나 회전을 설정함으로써 SpringArm이 컨트롤러를 바라보게 설정
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
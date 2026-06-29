#include "CH3_5_Player.h"
#include "CH3_5_PlayerController.h"
#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/TextBlock.h"
#include "Blueprint/UserWidget.h"
#include "CH3_5_GameState.h"

ACH3_5_Player::ACH3_5_Player()
{
	PrimaryActorTick.bCanEverTick = false;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->TargetArmLength = 300.0f;
	SpringArmComp->bUsePawnControlRotation = true;

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);
	CameraComp->bUsePawnControlRotation = false;

    OverheadWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("OverheadWidget"));
    OverheadWidget->SetupAttachment(GetMesh());
    OverheadWidget->SetWidgetSpace(EWidgetSpace::Screen);

    MaxHealth = 100.0f;
    Health = MaxHealth;
}

void ACH3_5_Player::BeginPlay()
{
	Super::BeginPlay();

    UpdateOverheadHP();
}

void ACH3_5_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACH3_5_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        if (ACH3_5_PlayerController* PlayerController = Cast<ACH3_5_PlayerController>(GetController()))
        {
            if (PlayerController->MoveAction)
            {
                EnhancedInput->BindAction(
                    PlayerController->MoveAction,
                    ETriggerEvent::Triggered,
                    this,
                    &ACH3_5_Player::Move
                );
            }

            if (PlayerController->JumpAction)
            {
                EnhancedInput->BindAction(
                    PlayerController->JumpAction,
                    ETriggerEvent::Triggered,
                    this,
                    &ACH3_5_Player::StartJump
                );

                EnhancedInput->BindAction(
                    PlayerController->JumpAction,
                    ETriggerEvent::Completed,
                    this,
                    &ACH3_5_Player::StopJump
                );
            }

            if (PlayerController->LookAction)
            {
                EnhancedInput->BindAction(
                    PlayerController->LookAction,
                    ETriggerEvent::Triggered,
                    this,
                    &ACH3_5_Player::Look
                );
            }
        }
    }
}

void ACH3_5_Player::Move(const FInputActionValue& value)
{
    if (!Controller) return;

    const FVector2D MoveInput = value.Get<FVector2D>();

    const FRotator Rotation = Controller->GetControlRotation();
    const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

    const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
    const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

    if (!FMath::IsNearlyZero(MoveInput.Y))
    {
        AddMovementInput(ForwardDirection, MoveInput.Y);
    }

    if (!FMath::IsNearlyZero(MoveInput.X))
    {
        AddMovementInput(RightDirection, MoveInput.X);
    }
}

void ACH3_5_Player::StartJump(const FInputActionValue& value)
{
    if (value.Get<bool>())
    {
        Jump();
    }
}

void ACH3_5_Player::StopJump(const FInputActionValue& value)
{
    if (!value.Get<bool>())
    {
        StopJumping();
    }
}

void ACH3_5_Player::Look(const FInputActionValue& value)
{
    FVector2D LookInput = value.Get<FVector2D>();

    AddControllerYawInput(LookInput.X);
    AddControllerPitchInput(LookInput.Y);
}

// 체력 회복 함수
void ACH3_5_Player::AddHealth(float Amount)
{
    // 체력을 회복시킴. 최대 체력을 초과하지 않도록 제한함
    Health = FMath::Clamp(Health + Amount, 0.0f, MaxHealth);
    UpdateOverheadHP();
}

// 데미지 처리 함수
float ACH3_5_Player::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
    // 기본 데미지 처리 로직 호출
    float ActualDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

    // 체력을 데미지만큼 감소시키고, 0 이하로 떨어지지 않도록 Clamp
    Health = FMath::Clamp(Health - DamageAmount, 0.0f, MaxHealth);
    UpdateOverheadHP();

    // 체력이 0 이하가 되면 사망 처리
    if (Health <= 0.0f)
    {
        OnDeath();
    }

    // 실제 적용된 데미지를 반환
    return ActualDamage;
}

// 사망 처리 함수
void ACH3_5_Player::OnDeath()
{
    ACH3_5_GameState* CH3_5_GameState = GetWorld() ? GetWorld()->GetGameState<ACH3_5_GameState>() : nullptr;
    if (CH3_5_GameState)
    {
        CH3_5_GameState->OnGameOver();
    }
}

int32 ACH3_5_Player::GetHealth() const
{
    return FMath::RoundToInt(Health);
}

void ACH3_5_Player::UpdateOverheadHP()
{
    if (!OverheadWidget) return;

    UUserWidget* OverheadWidgetInstance = OverheadWidget->GetUserWidgetObject();
    if (!OverheadWidgetInstance) return;

    if (UTextBlock* HPText = Cast<UTextBlock>(OverheadWidgetInstance->GetWidgetFromName(TEXT("OverHeadHP"))))
    {
        HPText->SetText(FText::FromString(FString::Printf(TEXT("%.0f / %.0f"), Health, MaxHealth)));
    }
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "GameFramework\SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "Engine/SkeletalMeshSocket.h"
#include "DrawDebugHelpers.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
AMainCharacter::AMainCharacter() :

	baseTurnRate(45.f),
	baseLookupRate(45.f),
	bAiming(false),
	cameraZoomedFOV(40.f),
	zoomInterpSpeed(20.f)
	
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create a camera boom 
	cameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("cameraBoom"));
	cameraBoom->SetupAttachment(RootComponent);
	cameraBoom->TargetArmLength = 400.f;
	cameraBoom->bUsePawnControlRotation = true; //Rotete the arm based on controler
	cameraBoom->SocketOffset = FVector(0,50.f,70.f);

	//Create a follow camera
	followingCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("followCamera"));
	followingCamera->SetupAttachment(cameraBoom, USpringArmComponent::SocketName);
	followingCamera->bUsePawnControlRotation = false;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f);
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;


}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (followingCamera) {
		cameraDefaultFOV = getFollowingCamera()->FieldOfView;
	}
}

void AMainCharacter::MoveForward(float value)
{
	if (Controller != nullptr && value != 0.0f) {
		const FRotator rotation{ Controller->GetControlRotation() };
		const FRotator yawRotation{ 0,rotation.Yaw,0 };

		const FVector direction{ FRotationMatrix{yawRotation}.GetUnitAxis(EAxis::X) };

		AddMovementInput(direction, value);

	}
}

void AMainCharacter::MoveRight(float value)
{
	if (Controller != nullptr && value != 0.0f) {
		const FRotator rotation{ Controller->GetControlRotation() };
		const FRotator yawRotation{ 0,rotation.Yaw,0 };

		const FVector direction{ FRotationMatrix{yawRotation}.GetUnitAxis(EAxis::Y) };

		AddMovementInput(direction, value);

	}
}

void AMainCharacter::TurnAtRate(float value)
{
	AddControllerYawInput(value * baseTurnRate * GetWorld()->GetDeltaSeconds());

}

void AMainCharacter::LookUpAtRate(float value)
{
	AddControllerPitchInput(value * baseLookupRate * GetWorld()->GetDeltaSeconds());
}

void AMainCharacter::FireWepon()
{
	if (fireSound) {
		
	//	UE_LOG(LogTemp, Warning, TEXT("FIRE"));
		UGameplayStatics::PlaySound2D(this, fireSound);
	}

	const USkeletalMeshSocket* barrelSocket = GetMesh()->GetSocketByName("BarrelSocket");

	if (barrelSocket) {

		const FTransform socketTransform = barrelSocket->GetSocketTransform(GetMesh());

		if (particleSystem) {
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), particleSystem, socketTransform);
		}

		FVector beamEnd;
		bool bBeamEnd = GetBeamEndLocation(socketTransform.GetLocation(), beamEnd);
		if (bBeamEnd) {

			if (impactParticle) {
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), impactParticle, beamEnd);
			}

			UParticleSystemComponent* beam = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), smokeBeamParticle, socketTransform);
			if (beam) {
				beam->SetVectorParameter(FName("Target"), beamEnd);
			}
		}

	}
	UAnimInstance* animInstance = GetMesh()->GetAnimInstance();

	if (animInstance && hipsFireMontage) {
		animInstance->Montage_Play(hipsFireMontage);
		animInstance->Montage_JumpToSection(FName("start-fire"));
	}
}

bool AMainCharacter::GetBeamEndLocation(const FVector& muzzzleSocketLocation, FVector& outBeamLocation)
{
	FVector2D viewPortSize;

	if (GEngine && GEngine->GameViewport) {
		GEngine->GameViewport->GetViewportSize(viewPortSize);
	}

	FVector2D corsshairLoacation(viewPortSize.X / 2.f, viewPortSize.Y / 2.f);
	corsshairLoacation.X += 30.f;
	corsshairLoacation.Y -= 30.f;


	FVector corsshairWorldPosition;
	FVector corsshairWorldDirection;
	bool bScreenToWorld = UGameplayStatics::DeprojectScreenToWorld(UGameplayStatics::GetPlayerController(this, 0),
		corsshairLoacation,
		corsshairWorldPosition,
		corsshairWorldDirection
	);

	if (bScreenToWorld) {
		FHitResult screenTraceHit;
		const FVector start{ corsshairWorldPosition };
		const FVector end{ corsshairWorldPosition + corsshairWorldDirection * 50'000.f };

		outBeamLocation= end ;

		GetWorld()->LineTraceSingleByChannel(screenTraceHit, start, end, ECollisionChannel::ECC_Visibility);
		if (screenTraceHit.bBlockingHit) {
			outBeamLocation = screenTraceHit.Location;
		}

		FHitResult weaponTraceHit;

		const FVector weaponTraceStart{ muzzzleSocketLocation };
		const FVector weaponTraceEnd{ outBeamLocation };
		GetWorld()->LineTraceSingleByChannel(weaponTraceHit, weaponTraceStart, weaponTraceEnd, ECollisionChannel::ECC_Visibility);

		if (weaponTraceHit.bBlockingHit) {
			outBeamLocation = weaponTraceHit.Location;
		}
		return true;
	}


	return false;
}

void AMainCharacter::IsAimingButtonPressed()
{
	bAiming = true;
	getFollowingCamera()->SetFieldOfView(cameraZoomedFOV);
}

void AMainCharacter::isAimingButtonReleased()
{
	bAiming = false;
	getFollowingCamera()->SetFieldOfView(cameraDefaultFOV);
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveFowward", this, &AMainCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMainCharacter::MoveRight);
	PlayerInputComponent->BindAxis("LookupRate", this, &AMainCharacter::LookUpAtRate);
	PlayerInputComponent->BindAxis("TurnRate", this, &AMainCharacter::TurnAtRate);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Lookup", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Jump",IE_Pressed ,this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jumo",IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("FireButton", IE_Pressed, this, &AMainCharacter::FireWepon);

	PlayerInputComponent->BindAction("Aiming", IE_Pressed, this, &AMainCharacter::IsAimingButtonPressed);
	PlayerInputComponent->BindAction("Aiming", IE_Released, this, &AMainCharacter::isAimingButtonReleased);
}


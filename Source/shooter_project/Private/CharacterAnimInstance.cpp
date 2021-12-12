// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterAnimInstance.h"
#include "MainCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"


void UCharacterAnimInstance::UpdateAnimationProperties(float delta) {
	if (mainCharacter == nullptr) {
		mainCharacter = Cast<AMainCharacter>(TryGetPawnOwner());
	}
	if (mainCharacter) {
		FVector velocity{ mainCharacter->GetVelocity() };
		velocity.Z = 0;
		speed = velocity.Size();

		bIsInAir = mainCharacter->GetCharacterMovement()->IsFalling();

		if (mainCharacter->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.f) {
			bIsAccelerating = true;
		}
		else
		{

			bIsAccelerating = false;
		}

		FRotator aimRotation = mainCharacter->GetBaseAimRotation();
		FString rotationMessage = FString::Printf(TEXT("Base Aim Rotation: %f"), aimRotation.Yaw);

		FRotator movementRotation = UKismetMathLibrary::MakeRotFromX(mainCharacter->GetVelocity());
		FString movementRotationMessage = FString::Printf(TEXT("MovementRotation: %f"),movementRotation.Yaw);

		movementOffest= UKismetMathLibrary::NormalizedDeltaRotator(movementRotation,aimRotation).Yaw;
		FString offsetMessage = FString::Printf(TEXT("movementOffest: %f"), movementOffest);
		
		if (mainCharacter->GetVelocity().Size() > 0.f) {
			lastMovementOffest = movementOffest;
		}

		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(1, 0.f, FColor::White, offsetMessage);

		}
	}
	
}

void UCharacterAnimInstance::NativeInitializeAnimation()
{
	mainCharacter = Cast<AMainCharacter>(TryGetPawnOwner());
}

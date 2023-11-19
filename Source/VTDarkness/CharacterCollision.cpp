// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterCollision.h"
#include "Camera/CameraComponent.h"
#include "CollidingPawnMovementComponent.h"
#include "Components/InputComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
// does not load
//#include "ConstructorHelpers.h"
#include "GameFramework/SpringArmComponent.h"
#include "Particles/ParticleSystemComponent.h"

void ACharacterCollision::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAction("ParticleToggle", IE_Pressed, this, &ACharacterCollision::ParticleToggle);

    PlayerInputComponent->BindAxis("MoveForward", this, &ACharacterCollision::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ACharacterCollision::MoveRight);
    PlayerInputComponent->BindAxis("Turn", this, &ACharacterCollision::Turn);
}

UPawnMovementComponent* ACharacterCollision::GetMovementComponent() const
{
    return OurMovementComponent;
}

void ACharacterCollision::MoveForward(float AxisValue)
{
    if (OurMovementComponent && (OurMovementComponent->UpdatedComponent == RootComponent))
    {
        OurMovementComponent->AddInputVector(GetActorForwardVector() * AxisValue);
    }
}

void ACharacterCollision::MoveRight(float AxisValue)
{
    if (OurMovementComponent && (OurMovementComponent->UpdatedComponent == RootComponent))
    {
        OurMovementComponent->AddInputVector(GetActorRightVector() * AxisValue);
    }
}

void ACharacterCollision::Turn(float AxisValue)
{
    FRotator NewRotation = GetActorRotation();
    NewRotation.Yaw += AxisValue;
    SetActorRotation(NewRotation);
}

void ACharacterCollision::ParticleToggle()
{
    if (OurParticleSystem && OurParticleSystem->Template)
    {
        OurParticleSystem->ToggleActive();
    }
}


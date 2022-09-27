// Created by Alexander Rodin. Simple Shooter Game. All Rights Reserved.


#include "Components/SSCharacterMovementComponent.h"
#include "Player/SSCharacter.h"

float USSCharacterMovementComponent::GetMaxSpeed() const
{
    const float MaxSpeed = Super::GetMaxSpeed();
    const ASSCharacter* Player = Cast<ASSCharacter>(GetPawnOwner());
    return Player && Player->IsRunning() ? MaxSpeed * RunModifier : MaxSpeed;
}

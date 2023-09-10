// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomMovement.h"

// Sets default values for this component's properties
URandomMovement::URandomMovement()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	MovementRadius = 20.0f;

}


// Called when the game starts
void URandomMovement::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void URandomMovement::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

    AActor* Parent = GetOwner();
    if (Parent)
    {
        // Find a new position for the object to go to
        auto NewPos = Parent->GetActorLocation() + FVector(FMath::FRandRange(-1, 1) *MovementRadius, FMath::FRandRange(-1, 1) *MovementRadius, 0.0);
        Parent->SetActorLocation(NewPos);

		// Find a new Rotation for the object
		auto NewRot = Parent->GetActorRotation() + FRotator(FMath::FRandRange(-1, 1) * MovementRadius, FMath::FRandRange(-1, 1) * MovementRadius,0.0);
		Parent->SetActorRotation(NewRot);
    }

}


// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombie.h"
#include <cstdlib> 
#include <ctime>
// Sets default values
AZombie::AZombie()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ZombieMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ZombieMesh"));

	RootComponent = ZombieMesh;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	if (ZombieMeshAsset.Succeeded())
	{
		ZombieMesh->SetStaticMesh(ZombieMeshAsset.Object);
	}
}

// Called when the game starts or when spawned
void AZombie::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AZombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float MinSpeed = 10.0f;
	float MaxSpeed = 1000.0f;
	Speed = FMath::FRandRange(MinSpeed, MaxSpeed);

	FVector NewLocation = GetActorLocation();
	NewLocation.Y -= Speed * DeltaTime;
	SetActorLocation(NewLocation);

	if (NewLocation.Y <= 50.0)
	{
		// Detén el movimiento estableciendo la velocidad en 0 y ajusta la posición exacta
		Speed = 0.0;
		NewLocation.Y = 50.0;
		SetActorLocation(NewLocation);
	}

}


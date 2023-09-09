// Fill out your copyright notice in the Description page of Project Settings.


#include "Plant.h"
#include <cstdlib> 
#include <ctime>

// Sets default values
APlant::APlant()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PlantMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlantMesh"));

	RootComponent = PlantMesh;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));

	if (PlantMeshAsset.Succeeded())
	{
		PlantMesh->SetStaticMesh(PlantMeshAsset.Object);
	}
}

// Called when the game starts or when spawned
void APlant::BeginPlay()
{
	Super::BeginPlay();

	FVector posicion = GetActorForwardVector();
	FRotator rotacion = GetActorRotation();

	GetWorld()->SpawnActor<APVZ_LAB01_USFXProjectile>(posicion, rotacion);
	

	float MinEnergy = 100.0f;
	float MaxEnergy = 500.0f;
	Energy = FMath::FRandRange(MinEnergy, MaxEnergy);
}

// Called every frame
void APlant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}


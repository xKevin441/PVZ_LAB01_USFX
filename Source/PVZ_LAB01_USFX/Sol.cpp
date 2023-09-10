// Fill out your copyright notice in the Description page of Project Settings.


#include "Sol.h"

// Sets default values
ASol::ASol()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SolMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SolMesh"));
	RootComponent = SolMesh;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SolMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));

	if (SolMeshAsset.Succeeded())
		SolMesh->SetStaticMesh(SolMeshAsset.Object);

	MovimientoAleatorio = CreateDefaultSubobject<URandomMovement>(TEXT("MovimientoAleatorio"));

}

// Called when the game starts or when spawned
void ASol::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


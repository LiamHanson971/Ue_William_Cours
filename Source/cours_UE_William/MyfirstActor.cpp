// Fill out your copyright notice in the Description page of Project Settings.


#include "MyfirstActor.h"

// Sets default values
AMyfirstActor::AMyfirstActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Création du composant mesh et définition comme racine
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;

}

// Called when the game starts or when spawned
void AMyfirstActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyfirstActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


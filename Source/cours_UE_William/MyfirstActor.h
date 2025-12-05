// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include <GameFramework/SpringArmComponent.h>
#include <Camera/CameraComponent.h>
#include "MyfirstActor.generated.h"

UCLASS()
class COURS_UE_WILLIAM_API AMyfirstActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyfirstActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Mesh principale de l'acteur
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* MeshComponent;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

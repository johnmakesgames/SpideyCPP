// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Player_Base.generated.h"

class UStaticMeshComponent;

UCLASS()
class SIDEYCPP_API APlayer_Base : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayer_Base();
	UStaticMeshComponent* CharacterBody;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Movement") float movementSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Movement") float animMovementSpeedForward;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Movement") float animMovementSpeedRight;


private:
	FVector * directionalSpeed;
	float delta;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void MoveForward(float value);
	virtual void MoveRight(float value);
	virtual void Web(float value);
	virtual void Yaw(float value);
	virtual void Pitch(float value);
	virtual void JumpAction();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Core.h"
#include "GameFramework/Character.h"
#include "Player_Base.generated.h"

class UStaticMeshComponent;
class AWebPoint;

UCLASS()
class SIDEYCPP_API APlayer_Base : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayer_Base();

	class UCharacterMovementComponent* CharacterMovement = GetCharacterMovement();
	UStaticMeshComponent* CharacterBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Movement")
		float movementSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Movement")
		float animMovementSpeedForward;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Movement")
		float animMovementSpeedRight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Movement")
		bool grounded;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Movement")
		float yawChange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Movement")
		FRotator pitchChange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Movement")
		bool dancing = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Movement")
		bool tryingToSwing = false;

	//Variables for web swinging;
	TArray<AWebPoint*> PotentialWebPoints;
	float numScannedPoints;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Movement")
	bool swinging;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Movement")
	FVector swingPoint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Movement")
	float swingSpeed;
	FVector myPos;
	float dotProduct;
	float radius;
	float magPoint;
	float magMe;
	float angle;
	FVector newPos;

private:
	FVector * directionalSpeed;
	float delta;
	float rotationSpeed = 100;
	float currentRotX;
	float currentRotY;

	float maxWalkingSpeed = 250;
	float maxRunningSpeed = 1000;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void MoveForward(float value);
	virtual void MoveRight(float value);
	virtual void Web(float value);
	virtual void Yaw(float value);
	virtual void Pitch(float value);
	virtual void JumpAction();
	virtual void Dance();
	virtual void Swing();
	virtual void CalculateSwingSpeed(FVector newLocation, FVector currentLocation);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Player Movement")
		void FindSwingPoint();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Player Movement")
		void RotateAroundAxis(FVector adjustedPosition, float swingAngle);
	UFUNCTION(BlueprintCallable, Category = "Player Movement")
		void SetScannedObjects(TArray<AWebPoint*> scannedLocations);
};

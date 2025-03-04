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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Movement")
		FVector webStartPoint;

	//Variables for web swinging;
	TArray<AWebPoint*> PotentialWebPoints;
	float numScannedPoints;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Movement")
	bool swinging;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Movement")
	FVector offsetSwingPoint;
	FVector originalSwingPoint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Movement")
	float swingSpeed;
	float maxSwingSpeed = 5;
	float stackedVelocity = 0;
	float swingingGravityMod = 0.01f;
	FVector myPos;
	float dotProduct;
	float radius;
	float magPoint;
	float magMe;
	float angle;
	FVector newPos;
	bool hasJumpedInAir;
	float swingDelay = 25;
	float swingBuffer = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Movement")
	bool diving = false;
	int score;
	int boostsRemaining;
	float jumpHeldTime = 0;
	bool holdingJump;

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
	virtual void Dive(float value);
	virtual void JumpAction();
	virtual void JumpHold();
	virtual void JumpCharge();
	virtual void JumpRelease();
	virtual void Dance();
	virtual void Swing();
	virtual void CalculateSwingSpeed(FVector newLocation, FVector currentLocation);
	virtual void StopSwinging(bool jumping);
	virtual void CheckClosest(FVector playerPos, FVector webPos, FVector* currentClosest);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Player Movement")
		void FindSwingPoint();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Player Movement")
		void AddRumble(int type);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Player Movement")
		void RotateAroundAxis(FVector adjustedPosition, float swingAngle);
	UFUNCTION(BlueprintCallable, Category = "Player Movement")
		void SetScannedObjects(TArray<AWebPoint*> scannedLocations);
	UFUNCTION(BlueprintCallable, Category = "Player Movement")
		void HitWall(bool isFloor);
	void IncreaseScore(float increase);
	UFUNCTION(BlueprintCallable, Category = "UI")
	int GetScore() { return score; }
};
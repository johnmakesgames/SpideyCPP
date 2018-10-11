// Fill out your copyright notice in the Description page of Project Settings.

#include "Player_Base.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/GameEngine.h"

// Sets default values
APlayer_Base::APlayer_Base()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayer_Base::BeginPlay()
{
	Super::BeginPlay();
	directionalSpeed = new FVector(0,0,0);
	movementSpeed = 500.0f;
	
}

// Called every frame
void APlayer_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	delta = DeltaTime;
	FVector NewDirection;
	NewDirection.X = (directionalSpeed->X != 0) ? GetActorForwardVector().X + directionalSpeed->X * DeltaTime : 0;
	NewDirection.Y = (directionalSpeed->Y != 0) ? GetActorForwardVector().Y + directionalSpeed->Y * DeltaTime : 0;
	NewDirection.Z = (directionalSpeed->Z != 0) ? GetActorForwardVector().Z + directionalSpeed->Z * DeltaTime : 0;
	FVector NewLocation = GetActorLocation() + NewDirection;
	SetActorLocation(NewLocation);
}

// Called to bind functionality to input
void APlayer_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("Forward", this, &APlayer_Base::MoveForward);
	PlayerInputComponent->BindAxis("Right", this, &APlayer_Base::MoveRight);
	PlayerInputComponent->BindAxis("Web", this, &APlayer_Base::Web);
	PlayerInputComponent->BindAxis("Yaw", this, &APlayer_Base::Yaw);
	PlayerInputComponent->BindAxis("Pitch", this, &APlayer_Base::Pitch);
	//PlayerInputComponent->BindAction("Jump", this, &APlayer_Base::JumpAction);
}

void APlayer_Base::MoveForward(float value)
{
	if (value != 0)
	{
		directionalSpeed->X = value * movementSpeed;

	}
	else
	{
		if (directionalSpeed->X > 0)
		{
			directionalSpeed->X -= 1000 * delta;
			directionalSpeed->X = (directionalSpeed->X < 0) ? directionalSpeed->X = 0 : directionalSpeed->X;
		}
		else if (directionalSpeed->X < 0)
		{
			directionalSpeed->X += 1000 * delta;
			directionalSpeed->X = (directionalSpeed->X > 0) ? directionalSpeed->X = 0 : directionalSpeed->X;
		}
	}
	animMovementSpeedForward = (directionalSpeed->X > 0) ? directionalSpeed->X: (directionalSpeed->X)*-1;
}

void APlayer_Base::MoveRight(float value)
{
	if (value != 0)
	{
		directionalSpeed->Y = value * movementSpeed;

	}
	else
	{
		if (directionalSpeed->Y > 0)
		{
			directionalSpeed->Y -= 1000 * delta;
			directionalSpeed->Y = (directionalSpeed->Y < 0) ? directionalSpeed->Y = 0 : directionalSpeed->Y;
		}
		else if (directionalSpeed->Y < 0)
		{
			directionalSpeed->Y += 1000 * delta;
			directionalSpeed->Y = (directionalSpeed->Y > 0) ? directionalSpeed->Y = 0 : directionalSpeed->Y;
		}
	}
	
	animMovementSpeedRight = (directionalSpeed->Y < 0) ? directionalSpeed->Y : (directionalSpeed->Y);
	FString TheFloatStr = FString::SanitizeFloat(animMovementSpeedRight);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TheFloatStr);
}

void APlayer_Base::Web(float value)
{
	if (value > 0)
	{
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Web Pressed"));
	}
}

void APlayer_Base::Yaw(float value)
{

}

void APlayer_Base::Pitch(float value)
{

}

void APlayer_Base::JumpAction()
{

}




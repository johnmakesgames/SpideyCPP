// Fill out your copyright notice in the Description page of Project Settings.

#include "Player_Base.h"
#include "Engine.h"
#include "Engine/World.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/GameEngine.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "WebPoint.h"

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
	CharacterMovement->MaxWalkSpeed = maxWalkingSpeed;
	CharacterMovement->JumpZVelocity *= 2;
}

// Called every frame
void APlayer_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	delta = DeltaTime;
	
	//FVector NewDirection;
	if (!swinging)
	{
		AddMovementInput(GetActorForwardVector(), directionalSpeed->X * DeltaTime);
		AddMovementInput(GetActorRightVector(), directionalSpeed->Y * DeltaTime);
	}
	if (diving)
	{
		CharacterMovement->AddImpulse(FVector(0, 0, -1));
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Diving"));
	}

	yawChange = currentRotX * DeltaTime;
	pitchChange = FRotator{ currentRotY*DeltaTime, 0, 0 };
	CharacterMovement->MaxWalkSpeed = movementSpeed;
	Swing();
	dancing = false;
	if (swingBuffer > 0)
	{
		swingBuffer -= 1;
	}
	maxSwingSpeed += stackedVelocity/2;
}

// Called to bind functionality to input
void APlayer_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("Forward", this, &APlayer_Base::MoveForward);
	PlayerInputComponent->BindAxis("Right", this, &APlayer_Base::MoveRight);
	PlayerInputComponent->BindAxis("Right Trigger", this, &APlayer_Base::Web);
	PlayerInputComponent->BindAxis("Yaw", this, &APlayer_Base::Yaw);
	PlayerInputComponent->BindAxis("Pitch", this, &APlayer_Base::Pitch);
	PlayerInputComponent->BindAxis("Dive", this, &APlayer_Base::Dive);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &APlayer_Base::JumpAction);
	PlayerInputComponent->BindAction("Dance", IE_Pressed, this, &APlayer_Base::Dance);
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
	animMovementSpeedForward = (directionalSpeed->X / 5);
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
			directionalSpeed->Y -= (movementSpeed*4) * delta;
			directionalSpeed->Y = (directionalSpeed->Y < 0) ? directionalSpeed->Y = 0 : directionalSpeed->Y;
		}
		else if (directionalSpeed->Y < 0)
		{
			directionalSpeed->Y += (movementSpeed * 4) * delta;
			directionalSpeed->Y = (directionalSpeed->Y > 0) ? directionalSpeed->Y = 0 : directionalSpeed->Y;
		}
	}
	
	animMovementSpeedRight = (directionalSpeed->Y / 5) *-1;
}

void APlayer_Base::Web(float value)
{
	if (value >= 0.2f)
	{
		if (grounded)
		{
			swinging = false;
			if (movementSpeed <= maxWalkingSpeed)
			{
				movementSpeed = maxRunningSpeed;
			}
		}
		else if (swingBuffer <= 0)
		{
			if (!swinging)
			{
				FindSwingPoint();
				tryingToSwing = true;
			}
		}
	}
	else
	{
		if (swinging)
		{
			StopSwinging(false);
		}
		movementSpeed = maxWalkingSpeed;
	}
	
}

void APlayer_Base::Yaw(float value)
{
	currentRotX = value * rotationSpeed;
}

void APlayer_Base::Pitch(float value)
{
	currentRotY = value * rotationSpeed;
}

void APlayer_Base::JumpAction()
{
	if (!grounded && !hasJumpedInAir)
	{
		if (swinging)
		{
			StopSwinging(true);
		}
		hasJumpedInAir = true;
	}
	else
	{
		Jump();
	}
}

void APlayer_Base::Dance()
{
	dancing = true;
}

void APlayer_Base::SetScannedObjects(TArray<AWebPoint*> scannedLocations)
{
	PotentialWebPoints = scannedLocations;
	int scannedNum = PotentialWebPoints.Num();
	FVector currentClosest;
	FVector playerPos;
	for (int i = 0; i < scannedNum; i++)
	{	
		FVector webPos = PotentialWebPoints[i]->GetActorLocation();
		playerPos = GetActorLocation();

		if (i == 0)
		{
			currentClosest = PotentialWebPoints[i]->GetActorLocation();
		}
		else
		{
			if (GetActorForwardVector().X > 0)
			{
				if (webPos.X > playerPos.X)
				{
					if (GetActorForwardVector().Y > 0)
					{
						if (webPos.Y > playerPos.Y)
						{
							CheckClosest(playerPos, webPos, &currentClosest);
						}
					}
					else
					{
						if (webPos.Y < playerPos.Y)
						{
							CheckClosest(playerPos, webPos, &currentClosest);
						}
					}
				}
			}
			else
			{
				if (webPos.X < playerPos.X)
				{
					if (GetActorForwardVector().Y > 0)
					{
						if (webPos.Y > playerPos.Y)
						{
							CheckClosest(playerPos, webPos, &currentClosest);
						}
					}
					else
					{
						if (PotentialWebPoints[i]->GetActorLocation().Y > GetActorLocation().Y)
						{
							CheckClosest(playerPos, webPos, &currentClosest);
						}
					}
				}
			}
		}
	}
	originalSwingPoint = currentClosest;
	offsetSwingPoint = originalSwingPoint + ((playerPos - originalSwingPoint).GetSafeNormal() * 2000);
	offsetSwingPoint.Z = originalSwingPoint.Z;
	swinging = true;
	CharacterMovement->GravityScale = 0;
	hasJumpedInAir = false;
	angle = 0;
	swingSpeed = 1.0f;
	myPos = GetActorLocation();
	myPos -= offsetSwingPoint;
	radius = FMath::Sqrt(FMath::Square(GetActorLocation().X - offsetSwingPoint.X) + FMath::Square(GetActorLocation().Y - offsetSwingPoint.Y) + FMath::Square(GetActorLocation().Z - offsetSwingPoint.Z));
	myPos /= radius;
	angle = FMath::Acos((myPos.X * 0) + (myPos.Y * 0) + (myPos.Z * 1) / radius);
}

void APlayer_Base::HitWall(bool isFloor)
{
	stackedVelocity = 0;
	if (swinging)
	{
		if (!isFloor)
		{
			AddRumble(1);
		}
		swinging = false;
		swingBuffer = swingDelay;
	}
}

void APlayer_Base::Swing()
{
	if (swinging)
	{
		///New Swinging
		FVector forward = GetActorForwardVector();
		myPos = GetActorLocation();
		myPos += GetActorRightVector() * directionalSpeed->Y;
		myPos += GetActorForwardVector() * directionalSpeed->X;
		angle += swingSpeed * delta;
		newPos.Z = FMath::Cos(angle);
		newPos.X = (-1 * GetActorForwardVector().X) * FMath::Sin(angle);
		newPos.Y = (-1 * GetActorForwardVector().Y) * FMath::Sin(angle);
		newPos *= radius;
		newPos += offsetSwingPoint;
		SetActorLocation(newPos);
		CalculateSwingSpeed(newPos, myPos);
		GetWorld()->LineBatcher->DrawLine(webStartPoint, originalSwingPoint, FLinearColor(1,1,1,1), SDPG_World, 2, 1);
		FString TheFloatStr = FString::SanitizeFloat(swingSpeed);
	}
	else
	{
		CharacterMovement->GravityScale = 1;
	}
}

void APlayer_Base::CalculateSwingSpeed(FVector newLocation, FVector currentLocation)
{

	if (currentLocation.Z >= newLocation.Z)
	{
		if (swingSpeed < maxSwingSpeed)
		{
			swingSpeed += swingingGravityMod;
		}
	}
	else if (currentLocation.Z < newLocation.Z)
	{
		if (swingSpeed > 1.0f)
		{
			swingSpeed -= ((swingingGravityMod/3)*2);
		}
		else
		{
			swingSpeed = 1;
		}
	}
	else
	{
		swingSpeed = swingSpeed;
	}
}

void APlayer_Base::StopSwinging(bool jumping)
{
	swinging = false;
	CharacterMovement->AddImpulse((GetActorForwardVector() * (30000 * swingSpeed)));
	swingBuffer = swingDelay;
	AddRumble(0);
	stackedVelocity++;
	if (jumping)
	{
		swingBuffer *= 2;
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Jumped in air"));
		CharacterMovement->AddImpulse(FVector(0, 0, 2000), true);
	}
}

void APlayer_Base::CheckClosest(FVector playerPos, FVector webPos, FVector* currentClosest)
{
	if (FMath::Abs(playerPos.X - webPos.X) < FMath::Abs(playerPos.X - currentClosest->X))
	{
		if (FMath::Abs(playerPos.Y - webPos.Y) < FMath::Abs(playerPos.Y - currentClosest->Y))
		{
			*currentClosest = webPos;
		}
	}
}

void APlayer_Base::Dive(float value)
{
	if (value > 0)
	{
		diving = true;
	}
	else
	{
		diving = false;
	}
}
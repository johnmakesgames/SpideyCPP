// Code designed and written by John Whiles
#include "WebPoint.h"
#include "Engine/GameEngine.h"

// Sets default values
AWebPoint::AWebPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWebPoint::BeginPlay()
{
	Super::BeginPlay();
	pointLocation = GetActorLocation();
}

// Called every frame
void AWebPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	/*FString X = FString::SanitizeFloat(GetActorLocation.X);
	FString Y = FString::SanitizeFloat(GetActorLocation.Y);
	FString Z = FString::SanitizeFloat(GetActorLocation.Z);*/


	//if (GEngine)
	//	GEngine->AddOnScreenDebugMessage(-1, 1.0, FColor::Red, FString::Printf(TEXT("Pos %f %f %f"), pointLocation.X, pointLocation.Y, pointLocation.Z));

}


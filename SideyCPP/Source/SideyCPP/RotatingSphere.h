// Code designed and written by John Whiles

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotatingSphere.generated.h"

UCLASS()
class SIDEYCPP_API ARotatingSphere : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotatingSphere();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FVector rotationPoint;
	FVector myPos;
	float dotProduct;
	float radius;
	float magPoint;
	float magMe;
	float angle;
	FVector newPos;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Rotation(float deltaTime);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Movement")
	FVector moveDirection;	
};

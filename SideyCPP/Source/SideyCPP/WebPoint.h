// Code designed and written by John Whiles
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WebPoint.generated.h"

UCLASS()
class SIDEYCPP_API AWebPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWebPoint();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Web Variables")
		FVector pointLocation;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};

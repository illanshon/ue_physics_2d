#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActorCPP.generated.h"

UCLASS()
class MYPROJECTCPP_API AMyActorCPP : public AActor
{
	GENERATED_BODY()
		
public:	
	// Sets default values for this actor's properties
	AMyActorCPP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable, Category=Analytics)
	void Debg();
	void Prinnnn();
	UFUNCTION(BlueprintCallable, Category = Analytics)
	void SpawnPoligon(int x, int y);
	UFUNCTION(BlueprintCallable, Category = Analytics)
		void SpawnActual();
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UState.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Test.generated.h"

UCLASS()
class STATEMACHINE_API ATest : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UState My_State;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

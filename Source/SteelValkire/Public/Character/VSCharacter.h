// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Math/UnrealMathUtility.h"

#include "VSCharacter.generated.h"

USTRUCT(BlueprintType)
struct FVSArrowData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentAmmo;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AActor> ArrowClass;

};

UCLASS(Blueprintable, BlueprintType)
class STEELVALKIRE_API AVSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AVSCharacter() {};

};

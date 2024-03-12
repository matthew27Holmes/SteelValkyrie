// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "SVCommonUtilityLib.generated.h"
/**
 * 
 */
UCLASS()
class STEELVALKIRE_API USVCommonUtilityLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, meta = (WorldContext = "WorldContextObject"))
	static class APlayerController* GetSVPlayerController(const UObject* WorldContextObject);

	// Get the loction of the center screen in world space and the direction of the viewport
	UFUNCTION(BlueprintPure, Category = "Debug", meta = (WorldContext = "WorldContextObject"))
	static void GetCenterScreen(const UObject* WorldContextObject, FVector& WorldPostion, FVector& WorldDirection);
};

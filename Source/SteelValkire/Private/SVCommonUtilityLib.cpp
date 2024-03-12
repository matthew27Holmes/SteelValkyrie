// Fill out your copyright notice in the Description page of Project Settings.


#include "SVCommonUtilityLib.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

#include "GameFramework/PlayerController.h"
//#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Internationalization/StringTable.h"

class APlayerController* USVCommonUtilityLib::GetSVPlayerController(const UObject* WorldContextObject)
{
	return UGameplayStatics::GetPlayerController(WorldContextObject, 0);
}

void USVCommonUtilityLib::GetCenterScreen(const UObject* WorldContextObject, FVector& WorldPostion, FVector& WorldDirection)
{
	APlayerController* PlayerController = GetSVPlayerController(WorldContextObject);

	if (PlayerController != nullptr)
	{
		int32 ViewportX;
		int32 ViewportY;
		PlayerController->GetViewportSize(ViewportX, ViewportY);

		// Get the Center point of the screen 
		const FVector2D ViewportMiddle = FVector2D(ViewportX / 2, ViewportY / 2);

		// Project Center Screen Position to world 
		PlayerController->DeprojectScreenPositionToWorld(ViewportMiddle.X, ViewportMiddle.Y, WorldPostion, WorldDirection);
	}
}

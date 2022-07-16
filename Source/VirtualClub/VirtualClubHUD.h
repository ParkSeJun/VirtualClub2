// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "VirtualClubHUD.generated.h"

UCLASS()
class AVirtualClubHUD : public AHUD
{
	GENERATED_BODY()

public:
	AVirtualClubHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};


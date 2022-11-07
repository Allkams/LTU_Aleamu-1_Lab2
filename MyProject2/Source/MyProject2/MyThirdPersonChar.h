// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyThirdPersonChar.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT2_API AMyThirdPersonChar : public APlayerController
{
	GENERATED_BODY()

		virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};

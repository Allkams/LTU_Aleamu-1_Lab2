// Fill out your copyright notice in the Description page of Project Settings.


#include "MyThirdPersonChar.h"
#include <GameFramework/Character.h>
#include "Components/InputComponent.h"

//E:\EpicGames Libery\UE_4.27\Engine\Source\Runtime\Engine\Classes\GameFramework\Character.h

void AMyThirdPersonChar::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

}
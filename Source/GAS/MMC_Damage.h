// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "ExampleAttributeSet.h"
#include "MMC_Damage.generated.h"

/**
 * 
 */
UCLASS()
class GAS_API UMMC_Damage : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()
	

	FGameplayEffectAttributeCaptureDefinition DmgMultDef;

	UMMC_Damage();

	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

};

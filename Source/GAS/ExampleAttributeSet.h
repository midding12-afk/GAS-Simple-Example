// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "ExampleAttributeSet.generated.h"


#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
/**
 * 
 */
UCLASS()
class GAS_API UExampleAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadOnly, Category = "Attributes | Stats")
	FGameplayAttributeData Health = 100.f;
	ATTRIBUTE_ACCESSORS(UExampleAttributeSet, Health)
	UPROPERTY(BlueprintReadOnly, Category = "Attributes | Stats")
	FGameplayAttributeData MaxHealth = 100.f;
	ATTRIBUTE_ACCESSORS(UExampleAttributeSet, MaxHealth)

	UPROPERTY(BlueprintReadOnly, Category = "Attributes | Stats")
	FGameplayAttributeData Mana = 100.f;
	ATTRIBUTE_ACCESSORS(UExampleAttributeSet, Mana)
	UPROPERTY(BlueprintReadOnly, Category = "Attributes | Stats")
	FGameplayAttributeData MaxMana = 100.f;
	ATTRIBUTE_ACCESSORS(UExampleAttributeSet, MaxMana)

	UPROPERTY(BlueprintReadOnly, Category = "Attributes | Damage")
	FGameplayAttributeData DamageMultiplier = 1.f;
	ATTRIBUTE_ACCESSORS(UExampleAttributeSet, DamageMultiplier)
};

// Fill out your copyright notice in the Description page of Project Settings.


#include "MMC_Damage.h"

UMMC_Damage::UMMC_Damage()
{
	// Указываем, какой атрибут ищем (DamageMultiplier)
	DmgMultDef.AttributeToCapture = UExampleAttributeSet::GetDamageMultiplierAttribute();
	// Откуда брать: Source — тот, кто наносит урон, Target — тот, кто получает.
	DmgMultDef.AttributeSource = EGameplayEffectAttributeCaptureSource::Source;
	// Снапшот: false означает, что мы берем значение в момент применения эффекта, 
	// а не в момент его создания.
	DmgMultDef.bSnapshot = false;

	// Обязательно добавляем в список для регистрации
	RelevantAttributesToCapture.Add(DmgMultDef);
}

float UMMC_Damage::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	FAggregatorEvaluateParameters EvaluationParameters;
	float BaseDamage = -30.f;
	float DmgMult = 1.f;
	GetCapturedAttributeMagnitude(DmgMultDef, Spec, EvaluationParameters, DmgMult);
	return BaseDamage * DmgMult;
}

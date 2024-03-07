#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "MTableReward.generated.h"

USTRUCT(BlueprintType)
struct FMTableRewardSalvage {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag Type;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Amount;
};

USTRUCT(BlueprintType)
struct FMTableRewardGear {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Level;
};

USTRUCT(BlueprintType)
struct FMTableReward : public FTableRowBase {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 XP;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AbilityPoints;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMTableRewardSalvage> Salvage;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMTableRewardGear> SuitRecipes;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMTableRewardGear> RangedWeaponRecipes;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMTableRewardGear> MeleeWeaponRecipes;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMTableRewardGear> CraftedSuits;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMTableRewardGear> CraftedRangedWeapons;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMTableRewardGear> CraftedMeleeWeapons;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGameplayTag> Colorways;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> Transmogs;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> Emotes;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGameplayTag> BatcycleModels;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGameplayTag> BatcycleColorways;
};
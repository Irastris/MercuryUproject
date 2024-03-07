#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "MStoreProduct.generated.h"

USTRUCT(BlueprintType)
struct FMStoreProductGear {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Level;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool GiveAtHeroLevel;
};

USTRUCT(BlueprintType)
struct FMStoreProductSalvage {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag Type;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Amount;
};

USTRUCT(BlueprintType)
struct FMStoreProductTableRow : public FTableRowBase {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayText;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ProductIdPS5;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ProductIdXSX;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ProductIdWinGDK;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ProductIdSteam;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ProductIdEpic;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMStoreProductGear> CraftedSuits;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMStoreProductGear> CraftedRangedWeapons;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMStoreProductGear> CraftedMeleeWeapons;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGameplayTag> Colorways;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> Transmogs;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> Emotes;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGameplayTag> BatcycleColorways;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGameplayTag> BatcycleKitTags;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGameplayTag> SocialPlateTags;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMStoreProductSalvage> Salvages;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGameplayTag> StoreRewardTags;
};
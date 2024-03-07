#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "CCCustomizableKit.h"
#include "MTransmog.generated.h"

UENUM(BlueprintType)
enum class ECraftedGearType : uint8
{
	Suit,
	WeaponMelee,
	WeaponRanged,
	GadgetSupport,
	GadgetCombatAim,
	GadgetPassive
};

USTRUCT(BlueprintType)
struct FMTransmogTableRow : public FTableRowBase {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayDescription;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> DisplayImage;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag HeroTag;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECraftedGearType GearType;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<UCCCustomizableKit>> CustomizableKits;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCCCustomizableKitPartIndices> KitsPartIndices;
};
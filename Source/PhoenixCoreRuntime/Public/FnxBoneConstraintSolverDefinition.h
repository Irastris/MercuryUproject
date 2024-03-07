#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "FnxBoneConstraintDefinition.h"
#include "FnxBoneConstraintSolverDefinition.generated.h"

UCLASS(EditInlineNew)
class PHOENIXCORERUNTIME_API UFnxBoneConstraintSolverDefinition : public UAssetUserData {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Instanced)
	TArray<UFnxBoneConstraintDefinition*> BoneConstraintDefinitions;
};
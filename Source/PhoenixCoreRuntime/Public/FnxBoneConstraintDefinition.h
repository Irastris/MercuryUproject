#pragma once

#include "CoreMinimal.h"
#include "FnxBoneConstraintDefinition.generated.h"

UCLASS(DefaultToInstanced, EditInlineNew)
class PHOENIXCORERUNTIME_API UFnxBoneConstraintDefinition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGuid ID;

    UPROPERTY(EditAnywhere)
    int Priority;
};
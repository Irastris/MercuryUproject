#pragma once

#include "CoreMinimal.h"
#include "FnxBoneConstraintDefinition.h"
#include "FnxTwistBoneConstraint.generated.h"

UCLASS(DefaultToInstanced, EditInlineNew)
class PHOENIXCORERUNTIME_API UFnxTwistBoneConstraint : public UFnxBoneConstraintDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName InputBoneName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName OutputBoneName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EAxis::Type> InputAxis;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EAxis::Type> OutputAxis;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Offset;
};
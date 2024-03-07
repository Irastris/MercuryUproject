#pragma once

#include "CoreMinimal.h"
#include "FnxBoneConstraintDefinition.h"
#include "FnxRBFBoneConstraint.generated.h"

UENUM()
enum class EFnxRBFType : uint8 {
	Gaussian,
	Linear
};

UENUM()
enum class EFnxRBFBoneValueType : uint8 {
	Translation,
	Rotation
};

USTRUCT()
struct FFnxRBFBoneValue {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	FName BoneName;
	
	UPROPERTY(EditAnywhere)
	FName VirtualParentBoneName;
	
	UPROPERTY(EditAnywhere)
	EFnxRBFBoneValueType ValueType;
	
	UPROPERTY(EditAnywhere)
	TEnumAsByte<EAxis::Type> ValueAxis;

	FFnxRBFBoneValue();
};

USTRUCT()
struct FFnxRBFPose {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	TArray<float> Values;

	FFnxRBFPose();
};

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class PHOENIXCORERUNTIME_API UFnxRBFBoneConstraint : public UFnxBoneConstraintDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FFnxRBFBoneValue> Inputs;

    UPROPERTY(EditAnywhere)
    TArray<FFnxRBFBoneValue> Outputs;
    
    UPROPERTY(EditAnywhere)
    TArray<FFnxRBFPose> Poses;
    
    UPROPERTY(EditAnywhere)
    TArray<float> Weights;

    UPROPERTY(EditAnywhere)
    float Epsilon;

    UPROPERTY(EditAnywhere)
    float DistanceNorm;
    
    UPROPERTY(EditAnywhere)
    bool bIsNormalized;

	UFnxRBFBoneConstraint();
};
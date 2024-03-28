// CCCustomizableKit.h
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "CCCustomizableKit.generated.h"

USTRUCT(BlueprintType)
struct FCCCustomizableMeshOptionPart {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMesh* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UPhysicsAsset* PhysicsAssetOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<UMaterialInterface*> MaterialOverrides;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName AttachmentSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FName> ComponentTags;
};

USTRUCT(BlueprintType)
struct FCCCustomizableMeshOption {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName PartName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FCCCustomizableMeshOptionPart> MeshParts;
};


USTRUCT(BlueprintType)
struct FCCCustomizableSlot {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bCanBeEmpty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FCCCustomizableMeshOption> MeshOptions;
};

USTRUCT(BlueprintType)
struct FCCBaseMeshSlot {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMesh* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FName> ComponentTags;
};

USTRUCT(BlueprintType)
struct FCCCustomizableKitColorway {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Texture;
};

USTRUCT(BlueprintType)
struct FCCCustomizableKitPartIndex {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Index;
};

USTRUCT(BlueprintType)
struct FCCCustomizableKitPartIndices {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCCCustomizableKitPartIndex> Parts;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCCCustomizableKitPartIndex> AttachmentParts;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ColorwayIndex;
};

UCLASS()
class CHARACTERCUSTOMIZATIONRUNTIME_API UCCCustomizableKit : public UDataAsset {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FCCCustomizableSlot> Slots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FCCBaseMeshSlot> BaseMeshSlots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USkeletalMesh* PrimaryBaseMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName ColorwayParameterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FCCCustomizableKitColorway> Colorways;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FGameplayTag CharacterTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FGameplayTag KitTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USkeleton* Skeleton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USkeletalMesh* DefaultMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UPhysicsAsset* PhysicsAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UPhysicsAsset* ShadowPhysicsAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bUpdatedAttachmentMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bMeshMergingRemoved;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bBaseMeshSlotsUpdated;
};
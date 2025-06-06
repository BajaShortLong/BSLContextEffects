#pragma once

#include "BSLEffectParameters.generated.h"

USTRUCT(BlueprintType)
struct FLinearColorArray
{
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FLinearColor> Colors;
};

/*
 *	Should be treated as an abstract parameter, only used for scope selection in BSLEffect
 */
USTRUCT(NotBlueprintable, NotBlueprintType)
struct BSLCONTEXTEFFECTS_API FBSLEffectParameter
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct BSLCONTEXTEFFECTS_API FBSLEffectParameterFloats : public FBSLEffectParameter
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(ForceInlineRow))
	TMap<FName, float> FloatParams;
};

USTRUCT(BlueprintType)
struct BSLCONTEXTEFFECTS_API FBSLEffectParameterBools : public FBSLEffectParameter
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(ForceInlineRow))
	TMap<FName, bool> BoolParams;
};

USTRUCT(BlueprintType)
struct BSLCONTEXTEFFECTS_API FBSLEffectParameterColors : public FBSLEffectParameter
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(ForceInlineRow, ShowOnlyInnerProperties))
	TMap<FName, FLinearColor> ColorParams;
};

USTRUCT(BlueprintType)
struct BSLCONTEXTEFFECTS_API FBSLEffectParameterColorArrays : public FBSLEffectParameter
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(ForceInlineRow, ShowOnlyInnerProperties))
	TMap<FName, FLinearColorArray> ColorArrayParams;
};

USTRUCT(BlueprintType)
struct BSLCONTEXTEFFECTS_API FBSLEffectParameterVectors : public FBSLEffectParameter
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(ForceInlineRow, ShowOnlyInnerProperties))
	TMap<FName, FVector> VectorParams;
};

USTRUCT(BlueprintType)
struct BSLCONTEXTEFFECTS_API FBSLEffectParameterInts : public FBSLEffectParameter
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(ForceInlineRow, ShowOnlyInnerProperties))
	TMap<FName, int32> IntParams;
};

USTRUCT(BlueprintType)
struct BSLCONTEXTEFFECTS_API FBSLEffectParameterTextures : public FBSLEffectParameter
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(ForceInlineRow, ShowOnlyInnerProperties))
	TMap<FName, TObjectPtr<UTexture>> TextureParams;
};



// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "BoneDebuggerComponent.generated.h"

USTRUCT()
struct FBoneDebugData
{
	GENERATED_BODY()
	
	UPROPERTY()
	const USkeletalMeshComponent* SkeletalMesh;
	
	UPROPERTY()
	FName ParentBone;
	
	UPROPERTY()
	TArray<FName> ChildBones;
	
	UPROPERTY()
	FColor DebugColor;
	
	UPROPERTY()
	float DepthOffset;
	
	UPROPERTY()
	bool Enabled=false;
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DEBUGBONES_API UBoneDebuggerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UBoneDebuggerComponent();
	
	UPROPERTY(Blueprintable, EditAnywhere, Category="BonesData")
	TArray<FBoneDebugData> BonesData;
	
	UPROPERTY(EditAnywhere)
	bool bEnableDrawBones=true;
	
	UPROPERTY()
	AActor* OwnerPawn;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
	
	UFUNCTION(BlueprintCallable)
	void RegisterBoneData(const USkeletalMeshComponent* SkeletalMesh, const FName& ParentBone ,
							const FLinearColor DebugColor=FLinearColor::Blue, const float DepthOffset=0.0f);
	
	bool SearchDebugData(const USkeletalMeshComponent* SkeletalMesh, TArray<FBoneDebugData*>& OutDebugData);
	
	UFUNCTION(BlueprintCallable)
	void SetBoneDebugDrawSettings(const USkeletalMeshComponent* SkeletalMesh,const bool bEnableDraw,const FLinearColor DrawColor);
	
	void DrawBones();
};

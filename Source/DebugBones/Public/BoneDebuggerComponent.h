// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BoneDebuggerComponent.generated.h"


USTRUCT(Blueprintable)
struct FDrawDebugData
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor DebugColor;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DepthOffset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ConeWidth =1.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Enabled=true;
};

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
	FDrawDebugData DrawData;
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
	
	UFUNCTION(BlueprintCallable  ,meta=(AutoCreateRefTerm="ExcludeBones , DrawData, ParentBone",CPP_Default_ParentBone="root"))
	void RegisterBoneData(const USkeletalMeshComponent* SkeletalMesh, const FName& ParentBone ,
							const FDrawDebugData& DrawData,const TArray<FName>& ExcludeBones);
	
	bool SearchDebugData(const USkeletalMeshComponent* SkeletalMesh,const FName& ParentBone, TArray<FBoneDebugData*>& OutDebugData);
	
	UFUNCTION(BlueprintCallable,meta=(AutoCreateRefTerm="DrawData, ParentBone",CPP_Default_ParentBone="root"))
	void SetBoneDebugDrawSettings(const USkeletalMeshComponent* SkeletalMesh,const FName& ParentBone,const FDrawDebugData& DrawData);
	
	void DrawBones();
};

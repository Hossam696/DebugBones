// Fill out your copyright notice in the Description page of Project Settings.
#include "BoneDebuggerComponent.h"
#include "Kismet\GameplayStatics.h"

// Sets default values for this component's properties
UBoneDebuggerComponent::UBoneDebuggerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
}


// Called when the game starts
void UBoneDebuggerComponent::BeginPlay()
{
	Super::BeginPlay();
	OwnerPawn = GetOwner();
	// ...
}


// Called every frame
void UBoneDebuggerComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                           FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	DrawBones();
	// ...
}

void UBoneDebuggerComponent::RegisterBoneData(const USkeletalMeshComponent* SkeletalMesh, const FName& ParentBone,
												const FLinearColor DebugColor , const float DepthOffset)
{
	FBoneDebugData TempBoneData(SkeletalMesh, ParentBone);
	TArray<FName> LocalSocketNames = SkeletalMesh->GetAllSocketNames();
	for (const FName& SocketName : LocalSocketNames)
	{
		FName CurrentParentBone = SkeletalMesh->GetParentBone(SocketName);
		while (CurrentParentBone != NAME_None)
		{
			if (CurrentParentBone == ParentBone)
			{
				TempBoneData.ChildBones.AddUnique(SocketName);
			}
			CurrentParentBone = SkeletalMesh->GetParentBone(CurrentParentBone);
		}
	}
	if (TempBoneData.ChildBones.Num() > 0)
	{
		TempBoneData.DebugColor = DebugColor.ToFColor(true);
		TempBoneData.DepthOffset = DepthOffset;
		TempBoneData.Enabled = true;
		BonesData.Add(TempBoneData);
	}
}

bool UBoneDebuggerComponent::SearchDebugData(const USkeletalMeshComponent* SkeletalMesh,
	TArray<FBoneDebugData*>& OutDebugData)
{
	for (FBoneDebugData& CurrentBoneData : BonesData)
	{
		if (SkeletalMesh == CurrentBoneData.SkeletalMesh)
		{
			OutDebugData.Add(&CurrentBoneData);
		}
	}
	return OutDebugData.Num() > 0;
}

void UBoneDebuggerComponent::SetBoneDebugDrawSettings(const USkeletalMeshComponent* SkeletalMesh,const bool bEnableDraw, const FLinearColor DrawColor)
{
	TArray<FBoneDebugData*> DebugData;
	if (SearchDebugData(SkeletalMesh,DebugData))
	{
		for (FBoneDebugData* CurrentBoneData : DebugData)
		{
			CurrentBoneData->Enabled = bEnableDraw;
			CurrentBoneData->DebugColor = DrawColor.ToFColor(true);
		}
	}
}

void UBoneDebuggerComponent::DrawBones()
{
	if (not bEnableDrawBones or not OwnerPawn)
	{
		return;
	}
	for (const FBoneDebugData CurrentBoneData : BonesData)
	{
		const USkeletalMeshComponent* SkeletalMesh = CurrentBoneData.SkeletalMesh;
		if (!CurrentBoneData.Enabled || !SkeletalMesh)
		{
			continue;
		}
		for (const FName ChildBone : CurrentBoneData.ChildBones)
		{
			FVector ChildBoneLocation = SkeletalMesh->GetSocketLocation(ChildBone);
			FName ParentBone = SkeletalMesh->GetParentBone(ChildBone);
			FVector ParentBoneLocation = SkeletalMesh->GetSocketLocation(ParentBone);
			float Length = FVector::Dist(ParentBoneLocation, ChildBoneLocation);
			FVector Direction = (ParentBoneLocation-ChildBoneLocation)/Length;
			
			FVector CameraLocation = UGameplayStatics::GetPlayerCameraManager(GetWorld(),0)->GetCameraLocation();
			FVector DirectionToCamera = (CameraLocation - ParentBoneLocation).GetSafeNormal();
			FVector Origin = ChildBoneLocation+(DirectionToCamera * CurrentBoneData.DepthOffset);
			
			DrawDebugCone(GetWorld(),Origin,Direction,Length,FMath::DegreesToRadians(5),FMath::DegreesToRadians(5),4,CurrentBoneData.DebugColor);
			DrawDebugSphere(GetWorld(),Origin,3,6,CurrentBoneData.DebugColor);
		}
	}
}


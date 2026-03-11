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
												const FDrawDebugData& DrawData,const TArray<FName>& ExcludeBones)
{
	FBoneDebugData TempBoneData(SkeletalMesh, ParentBone);
	TArray<FName> LocalSocketNames = SkeletalMesh->GetAllSocketNames();
	for (const FName& SocketName : LocalSocketNames)
	{
		if (!ExcludeBones.IsEmpty())
		{
			if (ExcludeBones.Contains(SocketName))
			{
				continue;
			}
		}
		
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
		TempBoneData.DrawData= DrawData;
		BonesData.Add(TempBoneData);
	}
}

bool UBoneDebuggerComponent::SearchDebugData(const USkeletalMeshComponent* SkeletalMesh,const FName& ParentBone,
	TArray<FBoneDebugData*>& OutDebugData)
{
	bool bAllTrees = ParentBone==NAME_None;
	for (FBoneDebugData& CurrentBoneData : BonesData)
	{
		if (SkeletalMesh == CurrentBoneData.SkeletalMesh)
		{
			if (!bAllTrees && ParentBone!=CurrentBoneData.ParentBone)
			{
				continue;
			}
			OutDebugData.Add(&CurrentBoneData);
		}
	}
	return OutDebugData.Num() > 0;
}

void UBoneDebuggerComponent::SetBoneDebugDrawSettings(const USkeletalMeshComponent* SkeletalMesh,const FName& ParentBone,
														const FDrawDebugData& DrawData)
{
	TArray<FBoneDebugData*> DebugData;
	if (SearchDebugData(SkeletalMesh,ParentBone,DebugData))
	{
		for (FBoneDebugData* CurrentBoneData : DebugData)
		{
			CurrentBoneData->DrawData = DrawData;
		}
	}
}

void UBoneDebuggerComponent::DrawBones()
{
#if ENABLE_DRAW_DEBUG
	if (not bEnableDrawBones or not OwnerPawn)
	{
		return;
	}
	for (const FBoneDebugData CurrentBoneData : BonesData)
	{
		const USkeletalMeshComponent* SkeletalMesh = CurrentBoneData.SkeletalMesh;
		if (!CurrentBoneData.DrawData.Enabled || !SkeletalMesh)
		{
			continue;
		}
		for (const FName ChildBone : CurrentBoneData.ChildBones)
		{
			FDrawDebugData DrawData = CurrentBoneData.DrawData;
			float ConeWidth = FMath::DegreesToRadians(DrawData.ConeWidth);
			float SphereRadius = DrawData.ConeWidth*1.5f;
			FLinearColor ConeColor = DrawData.DebugColor*0.7f;
			
			FVector ChildBoneLocation = SkeletalMesh->GetSocketLocation(ChildBone);
			FName ParentBone = SkeletalMesh->GetParentBone(ChildBone);
			FVector ParentBoneLocation = SkeletalMesh->GetSocketLocation(ParentBone);
			float Length = FVector::Dist(ParentBoneLocation, ChildBoneLocation);
			FVector Direction = (ParentBoneLocation-ChildBoneLocation)/Length;
			
			FVector CameraLocation = UGameplayStatics::GetPlayerCameraManager(GetWorld(),0)->GetCameraLocation();
			FVector DirectionToCamera = (CameraLocation - ParentBoneLocation).GetSafeNormal();
			FVector Origin = ChildBoneLocation+(DirectionToCamera * DrawData.DepthOffset);
			
			DrawDebugCone(GetWorld(),Origin,Direction,Length,ConeWidth,ConeWidth,4,ConeColor.ToFColor(true));
			DrawDebugSphere(GetWorld(),Origin,SphereRadius,6,DrawData.DebugColor.ToFColor(true));
		}
	}
#endif
	
}


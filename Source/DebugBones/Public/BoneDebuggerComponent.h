// Hossam Eldin Nasser's
//github - repo : https://github.com/Hossam696/DebugBones

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BoneDebuggerComponent.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FDrawDebugData
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BoneDebuuger|DrawData")
	FLinearColor DebugColor = FLinearColor::Black;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BoneDebuuger|DrawData")
	float DepthOffset = 0.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BoneDebuuger|DrawData")
	float ConeWidth =1.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BoneDebuuger|DrawData")
	float ConeSphereRatio =1.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BoneDebuuger|DrawData")
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
	
	UPROPERTY()
	TArray<FBoneDebugData> BonesData;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite , Category = "BoneDebuuger|DrawData")
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
	
	/** Register Bones Tree to Be Drawn, Tree is defined by Mesh and Parent Bone - This Function is usually in begin play to gather data
	 * @param SkeletalMesh Skeletal Mesh from which the bones are drawn
	 * @param ParentBone Top Bone that all bones beneath are drawn , if None or NotExisted Bone; Nothing will be drawn
	 * @param DrawData Settings of the Debug Drawing
	 * @param ExcludeBones Bones that won't be drawn
	 */
	UFUNCTION(BlueprintCallable  ,meta=(AutoCreateRefTerm="ExcludeBones , DrawData, ParentBone"),Category="Bone Debugger")
	void RegisterBoneData(const USkeletalMeshComponent* SkeletalMesh, const FName& ParentBone,
							const FDrawDebugData& DrawData,const TArray<FName>& ExcludeBones);
	
	bool SearchDebugData(const USkeletalMeshComponent* SkeletalMesh,const FName& ParentBone, TArray<FBoneDebugData*>& OutDebugData);
	
	/** Change Draw Settings of a tree that is defined be Mesh and Parent Bone
	 * @param SkeletalMesh Skeletal Mesh from which the bones are drawn
	 * @param ParentBone Top Bone that all bones beneath are drawn
	 * - if None : All Registered Trees with that Skeletal Mesh are changed
	 * - if Non-Existed Bone : Nothing will change
	 * @param DrawData Settings of the Debug Drawing
	 */
	UFUNCTION(BlueprintCallable,meta=(AutoCreateRefTerm="DrawData, ParentBone"),Category="Bone Debugger")
	void SetBoneDebugDrawSettings(const USkeletalMeshComponent* SkeletalMesh,const FName& ParentBone,const FDrawDebugData& DrawData);
	
	/** Filter Array of Names by some words, returns another array of the names that has any of these words in it 
	 * @param FilterWords Words that if exists in any word in InNames, It get added to the OutNames
	 * @param InNames Names that are getting filtered
	 * @param OutNames Names that has any word from FilterWords in them
	 */
	UFUNCTION(BlueprintCallable,Category="Bone Debugger")
	void FilterNames(const TArray<FName>& FilterWords,TArray<FName> InNames,TArray<FName>& OutNames);
	
	void DrawBones();
};

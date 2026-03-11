// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoneDebuggerComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBoneDebuggerComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DEBUGBONES_API UClass* Z_Construct_UClass_UBoneDebuggerComponent();
DEBUGBONES_API UClass* Z_Construct_UClass_UBoneDebuggerComponent_NoRegister();
DEBUGBONES_API UScriptStruct* Z_Construct_UScriptStruct_FBoneDebugData();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DebugBones();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FBoneDebugData ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBoneDebugData;
class UScriptStruct* FBoneDebugData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBoneDebugData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBoneDebugData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneDebugData, (UObject*)Z_Construct_UPackage__Script_DebugBones(), TEXT("BoneDebugData"));
	}
	return Z_Registration_Info_UScriptStruct_FBoneDebugData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FBoneDebugData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneDebuggerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BoneDebuggerComponent.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentBone_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneDebuggerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildBones_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneDebuggerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneDebuggerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneDebuggerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneDebuggerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParentBone;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ChildBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildBones;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthOffset;
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneDebugData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBoneDebugData_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneDebugData, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneDebugData_Statics::NewProp_ParentBone = { "ParentBone", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneDebugData, ParentBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentBone_MetaData), NewProp_ParentBone_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneDebugData_Statics::NewProp_ChildBones_Inner = { "ChildBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoneDebugData_Statics::NewProp_ChildBones = { "ChildBones", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneDebugData, ChildBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildBones_MetaData), NewProp_ChildBones_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoneDebugData_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneDebugData, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugColor_MetaData), NewProp_DebugColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoneDebugData_Statics::NewProp_DepthOffset = { "DepthOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoneDebugData, DepthOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthOffset_MetaData), NewProp_DepthOffset_MetaData) };
void Z_Construct_UScriptStruct_FBoneDebugData_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((FBoneDebugData*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoneDebugData_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBoneDebugData), &Z_Construct_UScriptStruct_FBoneDebugData_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneDebugData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneDebugData_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneDebugData_Statics::NewProp_ParentBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneDebugData_Statics::NewProp_ChildBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneDebugData_Statics::NewProp_ChildBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneDebugData_Statics::NewProp_DebugColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneDebugData_Statics::NewProp_DepthOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneDebugData_Statics::NewProp_Enabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneDebugData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneDebugData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DebugBones,
	nullptr,
	&NewStructOps,
	"BoneDebugData",
	Z_Construct_UScriptStruct_FBoneDebugData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneDebugData_Statics::PropPointers),
	sizeof(FBoneDebugData),
	alignof(FBoneDebugData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneDebugData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoneDebugData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBoneDebugData()
{
	if (!Z_Registration_Info_UScriptStruct_FBoneDebugData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBoneDebugData.InnerSingleton, Z_Construct_UScriptStruct_FBoneDebugData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FBoneDebugData.InnerSingleton;
}
// ********** End ScriptStruct FBoneDebugData ******************************************************

// ********** Begin Class UBoneDebuggerComponent Function RegisterBoneData *************************
struct Z_Construct_UFunction_UBoneDebuggerComponent_RegisterBoneData_Statics
{
	struct BoneDebuggerComponent_eventRegisterBoneData_Parms
	{
		const USkeletalMeshComponent* SkeletalMesh;
		FName ParentBone;
		FLinearColor DebugColor;
		float DepthOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_DebugColor", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_DepthOffset", "0.000000" },
		{ "ModuleRelativePath", "Public/BoneDebuggerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentBone_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParentBone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBoneDebuggerComponent_RegisterBoneData_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoneDebuggerComponent_eventRegisterBoneData_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBoneDebuggerComponent_RegisterBoneData_Statics::NewProp_ParentBone = { "ParentBone", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoneDebuggerComponent_eventRegisterBoneData_Parms, ParentBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentBone_MetaData), NewProp_ParentBone_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBoneDebuggerComponent_RegisterBoneData_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoneDebuggerComponent_eventRegisterBoneData_Parms, DebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugColor_MetaData), NewProp_DebugColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBoneDebuggerComponent_RegisterBoneData_Statics::NewProp_DepthOffset = { "DepthOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoneDebuggerComponent_eventRegisterBoneData_Parms, DepthOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthOffset_MetaData), NewProp_DepthOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoneDebuggerComponent_RegisterBoneData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoneDebuggerComponent_RegisterBoneData_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoneDebuggerComponent_RegisterBoneData_Statics::NewProp_ParentBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoneDebuggerComponent_RegisterBoneData_Statics::NewProp_DebugColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoneDebuggerComponent_RegisterBoneData_Statics::NewProp_DepthOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBoneDebuggerComponent_RegisterBoneData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoneDebuggerComponent_RegisterBoneData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBoneDebuggerComponent, nullptr, "RegisterBoneData", Z_Construct_UFunction_UBoneDebuggerComponent_RegisterBoneData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoneDebuggerComponent_RegisterBoneData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBoneDebuggerComponent_RegisterBoneData_Statics::BoneDebuggerComponent_eventRegisterBoneData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBoneDebuggerComponent_RegisterBoneData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBoneDebuggerComponent_RegisterBoneData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBoneDebuggerComponent_RegisterBoneData_Statics::BoneDebuggerComponent_eventRegisterBoneData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBoneDebuggerComponent_RegisterBoneData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoneDebuggerComponent_RegisterBoneData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBoneDebuggerComponent::execRegisterBoneData)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMesh);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ParentBone);
	P_GET_STRUCT(FLinearColor,Z_Param_DebugColor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DepthOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterBoneData(Z_Param_SkeletalMesh,Z_Param_Out_ParentBone,Z_Param_DebugColor,Z_Param_DepthOffset);
	P_NATIVE_END;
}
// ********** End Class UBoneDebuggerComponent Function RegisterBoneData ***************************

// ********** Begin Class UBoneDebuggerComponent Function SetBoneDebugDrawSettings *****************
struct Z_Construct_UFunction_UBoneDebuggerComponent_SetBoneDebugDrawSettings_Statics
{
	struct BoneDebuggerComponent_eventSetBoneDebugDrawSettings_Parms
	{
		const USkeletalMeshComponent* SkeletalMesh;
		bool bEnableDraw;
		FLinearColor DrawColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneDebuggerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDraw_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
	static void NewProp_bEnableDraw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDraw;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrawColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBoneDebuggerComponent_SetBoneDebugDrawSettings_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoneDebuggerComponent_eventSetBoneDebugDrawSettings_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMesh_MetaData), NewProp_SkeletalMesh_MetaData) };
void Z_Construct_UFunction_UBoneDebuggerComponent_SetBoneDebugDrawSettings_Statics::NewProp_bEnableDraw_SetBit(void* Obj)
{
	((BoneDebuggerComponent_eventSetBoneDebugDrawSettings_Parms*)Obj)->bEnableDraw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoneDebuggerComponent_SetBoneDebugDrawSettings_Statics::NewProp_bEnableDraw = { "bEnableDraw", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BoneDebuggerComponent_eventSetBoneDebugDrawSettings_Parms), &Z_Construct_UFunction_UBoneDebuggerComponent_SetBoneDebugDrawSettings_Statics::NewProp_bEnableDraw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDraw_MetaData), NewProp_bEnableDraw_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBoneDebuggerComponent_SetBoneDebugDrawSettings_Statics::NewProp_DrawColor = { "DrawColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoneDebuggerComponent_eventSetBoneDebugDrawSettings_Parms, DrawColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawColor_MetaData), NewProp_DrawColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoneDebuggerComponent_SetBoneDebugDrawSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoneDebuggerComponent_SetBoneDebugDrawSettings_Statics::NewProp_SkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoneDebuggerComponent_SetBoneDebugDrawSettings_Statics::NewProp_bEnableDraw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoneDebuggerComponent_SetBoneDebugDrawSettings_Statics::NewProp_DrawColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBoneDebuggerComponent_SetBoneDebugDrawSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoneDebuggerComponent_SetBoneDebugDrawSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBoneDebuggerComponent, nullptr, "SetBoneDebugDrawSettings", Z_Construct_UFunction_UBoneDebuggerComponent_SetBoneDebugDrawSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoneDebuggerComponent_SetBoneDebugDrawSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBoneDebuggerComponent_SetBoneDebugDrawSettings_Statics::BoneDebuggerComponent_eventSetBoneDebugDrawSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBoneDebuggerComponent_SetBoneDebugDrawSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBoneDebuggerComponent_SetBoneDebugDrawSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBoneDebuggerComponent_SetBoneDebugDrawSettings_Statics::BoneDebuggerComponent_eventSetBoneDebugDrawSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBoneDebuggerComponent_SetBoneDebugDrawSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoneDebuggerComponent_SetBoneDebugDrawSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBoneDebuggerComponent::execSetBoneDebugDrawSettings)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMesh);
	P_GET_UBOOL(Z_Param_bEnableDraw);
	P_GET_STRUCT(FLinearColor,Z_Param_DrawColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBoneDebugDrawSettings(Z_Param_SkeletalMesh,Z_Param_bEnableDraw,Z_Param_DrawColor);
	P_NATIVE_END;
}
// ********** End Class UBoneDebuggerComponent Function SetBoneDebugDrawSettings *******************

// ********** Begin Class UBoneDebuggerComponent ***************************************************
void UBoneDebuggerComponent::StaticRegisterNativesUBoneDebuggerComponent()
{
	UClass* Class = UBoneDebuggerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegisterBoneData", &UBoneDebuggerComponent::execRegisterBoneData },
		{ "SetBoneDebugDrawSettings", &UBoneDebuggerComponent::execSetBoneDebugDrawSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBoneDebuggerComponent;
UClass* UBoneDebuggerComponent::GetPrivateStaticClass()
{
	using TClass = UBoneDebuggerComponent;
	if (!Z_Registration_Info_UClass_UBoneDebuggerComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BoneDebuggerComponent"),
			Z_Registration_Info_UClass_UBoneDebuggerComponent.InnerSingleton,
			StaticRegisterNativesUBoneDebuggerComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UBoneDebuggerComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UBoneDebuggerComponent_NoRegister()
{
	return UBoneDebuggerComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBoneDebuggerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BoneDebuggerComponent.h" },
		{ "ModuleRelativePath", "Public/BoneDebuggerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BonesData_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "BonesData" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BoneDebuggerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDrawBones_MetaData[] = {
		{ "Category", "BoneDebuggerComponent" },
		{ "ModuleRelativePath", "Public/BoneDebuggerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneDebuggerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BonesData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BonesData;
	static void NewProp_bEnableDrawBones_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDrawBones;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBoneDebuggerComponent_RegisterBoneData, "RegisterBoneData" }, // 1312357264
		{ &Z_Construct_UFunction_UBoneDebuggerComponent_SetBoneDebugDrawSettings, "SetBoneDebugDrawSettings" }, // 2200416541
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoneDebuggerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoneDebuggerComponent_Statics::NewProp_BonesData_Inner = { "BonesData", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneDebugData, METADATA_PARAMS(0, nullptr) }; // 2264476711
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBoneDebuggerComponent_Statics::NewProp_BonesData = { "BonesData", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoneDebuggerComponent, BonesData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BonesData_MetaData), NewProp_BonesData_MetaData) }; // 2264476711
void Z_Construct_UClass_UBoneDebuggerComponent_Statics::NewProp_bEnableDrawBones_SetBit(void* Obj)
{
	((UBoneDebuggerComponent*)Obj)->bEnableDrawBones = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoneDebuggerComponent_Statics::NewProp_bEnableDrawBones = { "bEnableDrawBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBoneDebuggerComponent), &Z_Construct_UClass_UBoneDebuggerComponent_Statics::NewProp_bEnableDrawBones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDrawBones_MetaData), NewProp_bEnableDrawBones_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoneDebuggerComponent_Statics::NewProp_OwnerPawn = { "OwnerPawn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoneDebuggerComponent, OwnerPawn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerPawn_MetaData), NewProp_OwnerPawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoneDebuggerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneDebuggerComponent_Statics::NewProp_BonesData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneDebuggerComponent_Statics::NewProp_BonesData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneDebuggerComponent_Statics::NewProp_bEnableDrawBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneDebuggerComponent_Statics::NewProp_OwnerPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoneDebuggerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBoneDebuggerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DebugBones,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoneDebuggerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoneDebuggerComponent_Statics::ClassParams = {
	&UBoneDebuggerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBoneDebuggerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBoneDebuggerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBoneDebuggerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBoneDebuggerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBoneDebuggerComponent()
{
	if (!Z_Registration_Info_UClass_UBoneDebuggerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoneDebuggerComponent.OuterSingleton, Z_Construct_UClass_UBoneDebuggerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBoneDebuggerComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBoneDebuggerComponent);
UBoneDebuggerComponent::~UBoneDebuggerComponent() {}
// ********** End Class UBoneDebuggerComponent *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TPVarsCPP_Plugins_DebugBones_Source_DebugBones_Public_BoneDebuggerComponent_h__Script_DebugBones_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBoneDebugData::StaticStruct, Z_Construct_UScriptStruct_FBoneDebugData_Statics::NewStructOps, TEXT("BoneDebugData"), &Z_Registration_Info_UScriptStruct_FBoneDebugData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneDebugData), 2264476711U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBoneDebuggerComponent, UBoneDebuggerComponent::StaticClass, TEXT("UBoneDebuggerComponent"), &Z_Registration_Info_UClass_UBoneDebuggerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoneDebuggerComponent), 1707779094U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TPVarsCPP_Plugins_DebugBones_Source_DebugBones_Public_BoneDebuggerComponent_h__Script_DebugBones_16512891(TEXT("/Script/DebugBones"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TPVarsCPP_Plugins_DebugBones_Source_DebugBones_Public_BoneDebuggerComponent_h__Script_DebugBones_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TPVarsCPP_Plugins_DebugBones_Source_DebugBones_Public_BoneDebuggerComponent_h__Script_DebugBones_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TPVarsCPP_Plugins_DebugBones_Source_DebugBones_Public_BoneDebuggerComponent_h__Script_DebugBones_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TPVarsCPP_Plugins_DebugBones_Source_DebugBones_Public_BoneDebuggerComponent_h__Script_DebugBones_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoneDebuggerComponent.h"

#ifdef DEBUGBONES_BoneDebuggerComponent_generated_h
#error "BoneDebuggerComponent.generated.h already included, missing '#pragma once' in BoneDebuggerComponent.h"
#endif
#define DEBUGBONES_BoneDebuggerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class USkeletalMeshComponent;
struct FLinearColor;

// ********** Begin ScriptStruct FBoneDebugData ****************************************************
#define FID_Unreal_Projects_TPVarsCPP_Plugins_DebugBones_Source_DebugBones_Public_BoneDebuggerComponent_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoneDebugData_Statics; \
	DEBUGBONES_API static class UScriptStruct* StaticStruct();


struct FBoneDebugData;
// ********** End ScriptStruct FBoneDebugData ******************************************************

// ********** Begin Class UBoneDebuggerComponent ***************************************************
#define FID_Unreal_Projects_TPVarsCPP_Plugins_DebugBones_Source_DebugBones_Public_BoneDebuggerComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetBoneDebugDrawSettings); \
	DECLARE_FUNCTION(execRegisterBoneData);


DEBUGBONES_API UClass* Z_Construct_UClass_UBoneDebuggerComponent_NoRegister();

#define FID_Unreal_Projects_TPVarsCPP_Plugins_DebugBones_Source_DebugBones_Public_BoneDebuggerComponent_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoneDebuggerComponent(); \
	friend struct Z_Construct_UClass_UBoneDebuggerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DEBUGBONES_API UClass* Z_Construct_UClass_UBoneDebuggerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UBoneDebuggerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DebugBones"), Z_Construct_UClass_UBoneDebuggerComponent_NoRegister) \
	DECLARE_SERIALIZER(UBoneDebuggerComponent)


#define FID_Unreal_Projects_TPVarsCPP_Plugins_DebugBones_Source_DebugBones_Public_BoneDebuggerComponent_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBoneDebuggerComponent(UBoneDebuggerComponent&&) = delete; \
	UBoneDebuggerComponent(const UBoneDebuggerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoneDebuggerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoneDebuggerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBoneDebuggerComponent) \
	NO_API virtual ~UBoneDebuggerComponent();


#define FID_Unreal_Projects_TPVarsCPP_Plugins_DebugBones_Source_DebugBones_Public_BoneDebuggerComponent_h_33_PROLOG
#define FID_Unreal_Projects_TPVarsCPP_Plugins_DebugBones_Source_DebugBones_Public_BoneDebuggerComponent_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_TPVarsCPP_Plugins_DebugBones_Source_DebugBones_Public_BoneDebuggerComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_TPVarsCPP_Plugins_DebugBones_Source_DebugBones_Public_BoneDebuggerComponent_h_36_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_TPVarsCPP_Plugins_DebugBones_Source_DebugBones_Public_BoneDebuggerComponent_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBoneDebuggerComponent;

// ********** End Class UBoneDebuggerComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_TPVarsCPP_Plugins_DebugBones_Source_DebugBones_Public_BoneDebuggerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

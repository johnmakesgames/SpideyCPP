// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayer_Base;
#ifdef SIDEYCPP_Ring_generated_h
#error "Ring.generated.h already included, missing '#pragma once' in Ring.h"
#endif
#define SIDEYCPP_Ring_generated_h

#define SideyCPP_Source_SideyCPP_Ring_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetScoreIncrease) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetScoreIncrease(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseScore) \
	{ \
		P_GET_OBJECT(APlayer_Base,Z_Param_player); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_increase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseScore(Z_Param_player,Z_Param_increase); \
		P_NATIVE_END; \
	}


#define SideyCPP_Source_SideyCPP_Ring_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetScoreIncrease) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetScoreIncrease(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseScore) \
	{ \
		P_GET_OBJECT(APlayer_Base,Z_Param_player); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_increase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseScore(Z_Param_player,Z_Param_increase); \
		P_NATIVE_END; \
	}


#define SideyCPP_Source_SideyCPP_Ring_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARing(); \
	friend struct Z_Construct_UClass_ARing_Statics; \
public: \
	DECLARE_CLASS(ARing, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SideyCPP"), NO_API) \
	DECLARE_SERIALIZER(ARing)


#define SideyCPP_Source_SideyCPP_Ring_h_14_INCLASS \
private: \
	static void StaticRegisterNativesARing(); \
	friend struct Z_Construct_UClass_ARing_Statics; \
public: \
	DECLARE_CLASS(ARing, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SideyCPP"), NO_API) \
	DECLARE_SERIALIZER(ARing)


#define SideyCPP_Source_SideyCPP_Ring_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARing(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARing) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARing); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARing); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARing(ARing&&); \
	NO_API ARing(const ARing&); \
public:


#define SideyCPP_Source_SideyCPP_Ring_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARing(ARing&&); \
	NO_API ARing(const ARing&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARing); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARing); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARing)


#define SideyCPP_Source_SideyCPP_Ring_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__scoreIncreaseAmount() { return STRUCT_OFFSET(ARing, scoreIncreaseAmount); } \
	FORCEINLINE static uint32 __PPO__used() { return STRUCT_OFFSET(ARing, used); }


#define SideyCPP_Source_SideyCPP_Ring_h_11_PROLOG
#define SideyCPP_Source_SideyCPP_Ring_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideyCPP_Source_SideyCPP_Ring_h_14_PRIVATE_PROPERTY_OFFSET \
	SideyCPP_Source_SideyCPP_Ring_h_14_RPC_WRAPPERS \
	SideyCPP_Source_SideyCPP_Ring_h_14_INCLASS \
	SideyCPP_Source_SideyCPP_Ring_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideyCPP_Source_SideyCPP_Ring_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideyCPP_Source_SideyCPP_Ring_h_14_PRIVATE_PROPERTY_OFFSET \
	SideyCPP_Source_SideyCPP_Ring_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SideyCPP_Source_SideyCPP_Ring_h_14_INCLASS_NO_PURE_DECLS \
	SideyCPP_Source_SideyCPP_Ring_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideyCPP_Source_SideyCPP_Ring_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

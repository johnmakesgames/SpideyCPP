// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWebPoint;
struct FVector;
#ifdef SIDEYCPP_Player_Base_generated_h
#error "Player_Base.generated.h already included, missing '#pragma once' in Player_Base.h"
#endif
#define SIDEYCPP_Player_Base_generated_h

#define SideyCPP_Source_SideyCPP_Player_Base_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetScore) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetScore(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHitWall) \
	{ \
		P_GET_UBOOL(Z_Param_isFloor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HitWall(Z_Param_isFloor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScannedObjects) \
	{ \
		P_GET_TARRAY(AWebPoint*,Z_Param_scannedLocations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScannedObjects(Z_Param_scannedLocations); \
		P_NATIVE_END; \
	}


#define SideyCPP_Source_SideyCPP_Player_Base_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetScore) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetScore(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHitWall) \
	{ \
		P_GET_UBOOL(Z_Param_isFloor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HitWall(Z_Param_isFloor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScannedObjects) \
	{ \
		P_GET_TARRAY(AWebPoint*,Z_Param_scannedLocations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScannedObjects(Z_Param_scannedLocations); \
		P_NATIVE_END; \
	}


#define SideyCPP_Source_SideyCPP_Player_Base_h_14_EVENT_PARMS \
	struct Player_Base_eventAddRumble_Parms \
	{ \
		int32 type; \
	}; \
	struct Player_Base_eventRotateAroundAxis_Parms \
	{ \
		FVector adjustedPosition; \
		float swingAngle; \
	};


#define SideyCPP_Source_SideyCPP_Player_Base_h_14_CALLBACK_WRAPPERS
#define SideyCPP_Source_SideyCPP_Player_Base_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayer_Base(); \
	friend struct Z_Construct_UClass_APlayer_Base_Statics; \
public: \
	DECLARE_CLASS(APlayer_Base, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SideyCPP"), NO_API) \
	DECLARE_SERIALIZER(APlayer_Base)


#define SideyCPP_Source_SideyCPP_Player_Base_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPlayer_Base(); \
	friend struct Z_Construct_UClass_APlayer_Base_Statics; \
public: \
	DECLARE_CLASS(APlayer_Base, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SideyCPP"), NO_API) \
	DECLARE_SERIALIZER(APlayer_Base)


#define SideyCPP_Source_SideyCPP_Player_Base_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayer_Base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayer_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_Base(APlayer_Base&&); \
	NO_API APlayer_Base(const APlayer_Base&); \
public:


#define SideyCPP_Source_SideyCPP_Player_Base_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_Base(APlayer_Base&&); \
	NO_API APlayer_Base(const APlayer_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayer_Base)


#define SideyCPP_Source_SideyCPP_Player_Base_h_14_PRIVATE_PROPERTY_OFFSET
#define SideyCPP_Source_SideyCPP_Player_Base_h_11_PROLOG \
	SideyCPP_Source_SideyCPP_Player_Base_h_14_EVENT_PARMS


#define SideyCPP_Source_SideyCPP_Player_Base_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideyCPP_Source_SideyCPP_Player_Base_h_14_PRIVATE_PROPERTY_OFFSET \
	SideyCPP_Source_SideyCPP_Player_Base_h_14_RPC_WRAPPERS \
	SideyCPP_Source_SideyCPP_Player_Base_h_14_CALLBACK_WRAPPERS \
	SideyCPP_Source_SideyCPP_Player_Base_h_14_INCLASS \
	SideyCPP_Source_SideyCPP_Player_Base_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideyCPP_Source_SideyCPP_Player_Base_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideyCPP_Source_SideyCPP_Player_Base_h_14_PRIVATE_PROPERTY_OFFSET \
	SideyCPP_Source_SideyCPP_Player_Base_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SideyCPP_Source_SideyCPP_Player_Base_h_14_CALLBACK_WRAPPERS \
	SideyCPP_Source_SideyCPP_Player_Base_h_14_INCLASS_NO_PURE_DECLS \
	SideyCPP_Source_SideyCPP_Player_Base_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideyCPP_Source_SideyCPP_Player_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

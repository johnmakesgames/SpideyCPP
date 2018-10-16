// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideyCPP/Player_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_Base() {}
// Cross Module References
	SIDEYCPP_API UClass* Z_Construct_UClass_APlayer_Base_NoRegister();
	SIDEYCPP_API UClass* Z_Construct_UClass_APlayer_Base();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_SideyCPP();
	SIDEYCPP_API UFunction* Z_Construct_UFunction_APlayer_Base_FindSwingPoint();
	SIDEYCPP_API UFunction* Z_Construct_UFunction_APlayer_Base_RotateAroundAxis();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SIDEYCPP_API UFunction* Z_Construct_UFunction_APlayer_Base_SetScannedObjects();
	SIDEYCPP_API UClass* Z_Construct_UClass_AWebPoint_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	static FName NAME_APlayer_Base_FindSwingPoint = FName(TEXT("FindSwingPoint"));
	void APlayer_Base::FindSwingPoint()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayer_Base_FindSwingPoint),NULL);
	}
	static FName NAME_APlayer_Base_RotateAroundAxis = FName(TEXT("RotateAroundAxis"));
	void APlayer_Base::RotateAroundAxis(FVector adjustedPosition, float swingAngle)
	{
		Player_Base_eventRotateAroundAxis_Parms Parms;
		Parms.adjustedPosition=adjustedPosition;
		Parms.swingAngle=swingAngle;
		ProcessEvent(FindFunctionChecked(NAME_APlayer_Base_RotateAroundAxis),&Parms);
	}
	void APlayer_Base::StaticRegisterNativesAPlayer_Base()
	{
		UClass* Class = APlayer_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetScannedObjects", &APlayer_Base::execSetScannedObjects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayer_Base_FindSwingPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_Base_FindSwingPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_Base_FindSwingPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_Base, "FindSwingPoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_Base_FindSwingPoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayer_Base_FindSwingPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_Base_FindSwingPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_Base_FindSwingPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_Base_RotateAroundAxis_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_swingAngle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_adjustedPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayer_Base_RotateAroundAxis_Statics::NewProp_swingAngle = { UE4CodeGen_Private::EPropertyClass::Float, "swingAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Player_Base_eventRotateAroundAxis_Parms, swingAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayer_Base_RotateAroundAxis_Statics::NewProp_adjustedPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "adjustedPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Player_Base_eventRotateAroundAxis_Parms, adjustedPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_Base_RotateAroundAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_Base_RotateAroundAxis_Statics::NewProp_swingAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_Base_RotateAroundAxis_Statics::NewProp_adjustedPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_Base_RotateAroundAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_Base_RotateAroundAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_Base, "RotateAroundAxis", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C820800, sizeof(Player_Base_eventRotateAroundAxis_Parms), Z_Construct_UFunction_APlayer_Base_RotateAroundAxis_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayer_Base_RotateAroundAxis_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_Base_RotateAroundAxis_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayer_Base_RotateAroundAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_Base_RotateAroundAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_Base_RotateAroundAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_Base_SetScannedObjects_Statics
	{
		struct Player_Base_eventSetScannedObjects_Parms
		{
			TArray<AWebPoint*> scannedLocations;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_scannedLocations;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_scannedLocations_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlayer_Base_SetScannedObjects_Statics::NewProp_scannedLocations = { UE4CodeGen_Private::EPropertyClass::Array, "scannedLocations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Player_Base_eventSetScannedObjects_Parms, scannedLocations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayer_Base_SetScannedObjects_Statics::NewProp_scannedLocations_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "scannedLocations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AWebPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_Base_SetScannedObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_Base_SetScannedObjects_Statics::NewProp_scannedLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_Base_SetScannedObjects_Statics::NewProp_scannedLocations_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_Base_SetScannedObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_Base_SetScannedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_Base, "SetScannedObjects", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Player_Base_eventSetScannedObjects_Parms), Z_Construct_UFunction_APlayer_Base_SetScannedObjects_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayer_Base_SetScannedObjects_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_Base_SetScannedObjects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayer_Base_SetScannedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_Base_SetScannedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_Base_SetScannedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayer_Base_NoRegister()
	{
		return APlayer_Base::StaticClass();
	}
	struct Z_Construct_UClass_APlayer_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_returnedPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_returnedPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_swingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_swingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_swingPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_swingPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_swinging_MetaData[];
#endif
		static void NewProp_swinging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_swinging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tryingToSwing_MetaData[];
#endif
		static void NewProp_tryingToSwing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_tryingToSwing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dancing_MetaData[];
#endif
		static void NewProp_dancing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_dancing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pitchChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pitchChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_yawChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_yawChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grounded_MetaData[];
#endif
		static void NewProp_grounded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_grounded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animMovementSpeedRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_animMovementSpeedRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animMovementSpeedForward_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_animMovementSpeedForward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_movementSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayer_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SideyCPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayer_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayer_Base_FindSwingPoint, "FindSwingPoint" }, // 2132337309
		{ &Z_Construct_UFunction_APlayer_Base_RotateAroundAxis, "RotateAroundAxis" }, // 2162024564
		{ &Z_Construct_UFunction_APlayer_Base_SetScannedObjects, "SetScannedObjects" }, // 864722930
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player_Base.h" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_returnedPosition_MetaData[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_returnedPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "returnedPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayer_Base, returnedPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_returnedPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_returnedPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_swingSpeed_MetaData[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_swingSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "swingSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayer_Base, swingSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_swingSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_swingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_swingPoint_MetaData[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_swingPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "swingPoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayer_Base, swingPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_swingPoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_swingPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_swinging_MetaData[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	void Z_Construct_UClass_APlayer_Base_Statics::NewProp_swinging_SetBit(void* Obj)
	{
		((APlayer_Base*)Obj)->swinging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_swinging = { UE4CodeGen_Private::EPropertyClass::Bool, "swinging", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APlayer_Base), &Z_Construct_UClass_APlayer_Base_Statics::NewProp_swinging_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_swinging_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_swinging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_tryingToSwing_MetaData[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	void Z_Construct_UClass_APlayer_Base_Statics::NewProp_tryingToSwing_SetBit(void* Obj)
	{
		((APlayer_Base*)Obj)->tryingToSwing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_tryingToSwing = { UE4CodeGen_Private::EPropertyClass::Bool, "tryingToSwing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APlayer_Base), &Z_Construct_UClass_APlayer_Base_Statics::NewProp_tryingToSwing_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_tryingToSwing_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_tryingToSwing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_dancing_MetaData[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	void Z_Construct_UClass_APlayer_Base_Statics::NewProp_dancing_SetBit(void* Obj)
	{
		((APlayer_Base*)Obj)->dancing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_dancing = { UE4CodeGen_Private::EPropertyClass::Bool, "dancing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APlayer_Base), &Z_Construct_UClass_APlayer_Base_Statics::NewProp_dancing_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_dancing_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_dancing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_pitchChange_MetaData[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_pitchChange = { UE4CodeGen_Private::EPropertyClass::Struct, "pitchChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayer_Base, pitchChange), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_pitchChange_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_pitchChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_yawChange_MetaData[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_yawChange = { UE4CodeGen_Private::EPropertyClass::Float, "yawChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayer_Base, yawChange), METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_yawChange_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_yawChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_grounded_MetaData[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	void Z_Construct_UClass_APlayer_Base_Statics::NewProp_grounded_SetBit(void* Obj)
	{
		((APlayer_Base*)Obj)->grounded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_grounded = { UE4CodeGen_Private::EPropertyClass::Bool, "grounded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APlayer_Base), &Z_Construct_UClass_APlayer_Base_Statics::NewProp_grounded_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_grounded_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_grounded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_animMovementSpeedRight_MetaData[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_animMovementSpeedRight = { UE4CodeGen_Private::EPropertyClass::Float, "animMovementSpeedRight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayer_Base, animMovementSpeedRight), METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_animMovementSpeedRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_animMovementSpeedRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_animMovementSpeedForward_MetaData[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_animMovementSpeedForward = { UE4CodeGen_Private::EPropertyClass::Float, "animMovementSpeedForward", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayer_Base, animMovementSpeedForward), METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_animMovementSpeedForward_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_animMovementSpeedForward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_movementSpeed_MetaData[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_movementSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "movementSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayer_Base, movementSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_movementSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_movementSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayer_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_returnedPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_swingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_swingPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_swinging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_tryingToSwing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_dancing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_pitchChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_yawChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_grounded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_animMovementSpeedRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_animMovementSpeedForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_movementSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayer_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayer_Base_Statics::ClassParams = {
		&APlayer_Base::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_APlayer_Base_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayer_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayer_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayer_Base, 6658670);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer_Base(Z_Construct_UClass_APlayer_Base, &APlayer_Base::StaticClass, TEXT("/Script/SideyCPP"), TEXT("APlayer_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideyCPP/Ring.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRing() {}
// Cross Module References
	SIDEYCPP_API UClass* Z_Construct_UClass_ARing_NoRegister();
	SIDEYCPP_API UClass* Z_Construct_UClass_ARing();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SideyCPP();
	SIDEYCPP_API UFunction* Z_Construct_UFunction_ARing_GetScoreIncrease();
	SIDEYCPP_API UFunction* Z_Construct_UFunction_ARing_IncreaseScore();
	SIDEYCPP_API UClass* Z_Construct_UClass_APlayer_Base_NoRegister();
// End Cross Module References
	void ARing::StaticRegisterNativesARing()
	{
		UClass* Class = ARing::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScoreIncrease", &ARing::execGetScoreIncrease },
			{ "IncreaseScore", &ARing::execIncreaseScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARing_GetScoreIncrease_Statics
	{
		struct Ring_eventGetScoreIncrease_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARing_GetScoreIncrease_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Ring_eventGetScoreIncrease_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARing_GetScoreIncrease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARing_GetScoreIncrease_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARing_GetScoreIncrease_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ring Stuff" },
		{ "ModuleRelativePath", "Ring.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARing_GetScoreIncrease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARing, "GetScoreIncrease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Ring_eventGetScoreIncrease_Parms), Z_Construct_UFunction_ARing_GetScoreIncrease_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARing_GetScoreIncrease_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARing_GetScoreIncrease_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARing_GetScoreIncrease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARing_GetScoreIncrease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARing_GetScoreIncrease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARing_IncreaseScore_Statics
	{
		struct Ring_eventIncreaseScore_Parms
		{
			APlayer_Base* player;
			float increase;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_increase;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARing_IncreaseScore_Statics::NewProp_increase = { UE4CodeGen_Private::EPropertyClass::Float, "increase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ring_eventIncreaseScore_Parms, increase), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARing_IncreaseScore_Statics::NewProp_player = { UE4CodeGen_Private::EPropertyClass::Object, "player", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Ring_eventIncreaseScore_Parms, player), Z_Construct_UClass_APlayer_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARing_IncreaseScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARing_IncreaseScore_Statics::NewProp_increase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARing_IncreaseScore_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARing_IncreaseScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Stuff" },
		{ "ModuleRelativePath", "Ring.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARing_IncreaseScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARing, "IncreaseScore", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Ring_eventIncreaseScore_Parms), Z_Construct_UFunction_ARing_IncreaseScore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARing_IncreaseScore_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARing_IncreaseScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARing_IncreaseScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARing_IncreaseScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARing_IncreaseScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARing_NoRegister()
	{
		return ARing::StaticClass();
	}
	struct Z_Construct_UClass_ARing_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_used_MetaData[];
#endif
		static void NewProp_used_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_used;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scoreIncreaseAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scoreIncreaseAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SideyCPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARing_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARing_GetScoreIncrease, "GetScoreIncrease" }, // 1348815849
		{ &Z_Construct_UFunction_ARing_IncreaseScore, "IncreaseScore" }, // 2047248205
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARing_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Ring.h" },
		{ "ModuleRelativePath", "Ring.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARing_Statics::NewProp_used_MetaData[] = {
		{ "Category", "Ring Stuff" },
		{ "ModuleRelativePath", "Ring.h" },
	};
#endif
	void Z_Construct_UClass_ARing_Statics::NewProp_used_SetBit(void* Obj)
	{
		((ARing*)Obj)->used = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARing_Statics::NewProp_used = { UE4CodeGen_Private::EPropertyClass::Bool, "used", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ARing), &Z_Construct_UClass_ARing_Statics::NewProp_used_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARing_Statics::NewProp_used_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARing_Statics::NewProp_used_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARing_Statics::NewProp_scoreIncreaseAmount_MetaData[] = {
		{ "Category", "Player Stuff" },
		{ "ModuleRelativePath", "Ring.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARing_Statics::NewProp_scoreIncreaseAmount = { UE4CodeGen_Private::EPropertyClass::Float, "scoreIncreaseAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ARing, scoreIncreaseAmount), METADATA_PARAMS(Z_Construct_UClass_ARing_Statics::NewProp_scoreIncreaseAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARing_Statics::NewProp_scoreIncreaseAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARing_Statics::NewProp_used,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARing_Statics::NewProp_scoreIncreaseAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARing>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARing_Statics::ClassParams = {
		&ARing::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ARing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ARing_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ARing_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARing()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARing_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARing, 3542642593);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARing(Z_Construct_UClass_ARing, &ARing::StaticClass, TEXT("/Script/SideyCPP"), TEXT("ARing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

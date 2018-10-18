// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideyCPP/RotatingSphere.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotatingSphere() {}
// Cross Module References
	SIDEYCPP_API UClass* Z_Construct_UClass_ARotatingSphere_NoRegister();
	SIDEYCPP_API UClass* Z_Construct_UClass_ARotatingSphere();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SideyCPP();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ARotatingSphere::StaticRegisterNativesARotatingSphere()
	{
	}
	UClass* Z_Construct_UClass_ARotatingSphere_NoRegister()
	{
		return ARotatingSphere::StaticClass();
	}
	struct Z_Construct_UClass_ARotatingSphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_moveDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARotatingSphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SideyCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotatingSphere_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RotatingSphere.h" },
		{ "ModuleRelativePath", "RotatingSphere.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotatingSphere_Statics::NewProp_moveDirection_MetaData[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "RotatingSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARotatingSphere_Statics::NewProp_moveDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "moveDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ARotatingSphere, moveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARotatingSphere_Statics::NewProp_moveDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARotatingSphere_Statics::NewProp_moveDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotatingSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingSphere_Statics::NewProp_moveDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARotatingSphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotatingSphere>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARotatingSphere_Statics::ClassParams = {
		&ARotatingSphere::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ARotatingSphere_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ARotatingSphere_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ARotatingSphere_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARotatingSphere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARotatingSphere()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARotatingSphere_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARotatingSphere, 3166895186);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARotatingSphere(Z_Construct_UClass_ARotatingSphere, &ARotatingSphere::StaticClass, TEXT("/Script/SideyCPP"), TEXT("ARotatingSphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARotatingSphere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

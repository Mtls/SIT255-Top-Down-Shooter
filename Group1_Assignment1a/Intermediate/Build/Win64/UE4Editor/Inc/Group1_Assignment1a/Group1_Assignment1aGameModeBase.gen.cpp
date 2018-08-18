// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Group1_Assignment1aGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroup1_Assignment1aGameModeBase() {}
// Cross Module References
	GROUP1_ASSIGNMENT1A_API UClass* Z_Construct_UClass_AGroup1_Assignment1aGameModeBase_NoRegister();
	GROUP1_ASSIGNMENT1A_API UClass* Z_Construct_UClass_AGroup1_Assignment1aGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Group1_Assignment1a();
// End Cross Module References
	void AGroup1_Assignment1aGameModeBase::StaticRegisterNativesAGroup1_Assignment1aGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGroup1_Assignment1aGameModeBase_NoRegister()
	{
		return AGroup1_Assignment1aGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AGroup1_Assignment1aGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Group1_Assignment1a,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Group1_Assignment1aGameModeBase.h" },
				{ "ModuleRelativePath", "Group1_Assignment1aGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGroup1_Assignment1aGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGroup1_Assignment1aGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGroup1_Assignment1aGameModeBase, 1827700255);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGroup1_Assignment1aGameModeBase(Z_Construct_UClass_AGroup1_Assignment1aGameModeBase, &AGroup1_Assignment1aGameModeBase::StaticClass, TEXT("/Script/Group1_Assignment1a"), TEXT("AGroup1_Assignment1aGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGroup1_Assignment1aGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

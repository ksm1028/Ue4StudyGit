// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ue4Study/Ue4StudyGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUe4StudyGameModeBase() {}
// Cross Module References
	UE4STUDY_API UClass* Z_Construct_UClass_AUe4StudyGameModeBase_NoRegister();
	UE4STUDY_API UClass* Z_Construct_UClass_AUe4StudyGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Ue4Study();
// End Cross Module References
	void AUe4StudyGameModeBase::StaticRegisterNativesAUe4StudyGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUe4StudyGameModeBase_NoRegister()
	{
		return AUe4StudyGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUe4StudyGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUe4StudyGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Ue4Study,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUe4StudyGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Ue4StudyGameModeBase.h" },
		{ "ModuleRelativePath", "Ue4StudyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUe4StudyGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUe4StudyGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUe4StudyGameModeBase_Statics::ClassParams = {
		&AUe4StudyGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUe4StudyGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUe4StudyGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUe4StudyGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUe4StudyGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUe4StudyGameModeBase, 960724972);
	template<> UE4STUDY_API UClass* StaticClass<AUe4StudyGameModeBase>()
	{
		return AUe4StudyGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUe4StudyGameModeBase(Z_Construct_UClass_AUe4StudyGameModeBase, &AUe4StudyGameModeBase::StaticClass, TEXT("/Script/Ue4Study"), TEXT("AUe4StudyGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUe4StudyGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

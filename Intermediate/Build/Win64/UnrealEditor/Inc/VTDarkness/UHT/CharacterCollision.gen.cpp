// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTDarkness/CharacterCollision.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterCollision() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_VTDarkness();
	VTDARKNESS_API UClass* Z_Construct_UClass_ACharacterCollision();
	VTDARKNESS_API UClass* Z_Construct_UClass_ACharacterCollision_NoRegister();
// End Cross Module References
	void ACharacterCollision::StaticRegisterNativesACharacterCollision()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterCollision);
	UClass* Z_Construct_UClass_ACharacterCollision_NoRegister()
	{
		return ACharacterCollision::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterCollision_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterCollision_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_VTDarkness,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterCollision_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterCollision_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterCollision.h" },
		{ "ModuleRelativePath", "CharacterCollision.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterCollision_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterCollision>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterCollision_Statics::ClassParams = {
		&ACharacterCollision::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterCollision_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacterCollision_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACharacterCollision()
	{
		if (!Z_Registration_Info_UClass_ACharacterCollision.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterCollision.OuterSingleton, Z_Construct_UClass_ACharacterCollision_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACharacterCollision.OuterSingleton;
	}
	template<> VTDARKNESS_API UClass* StaticClass<ACharacterCollision>()
	{
		return ACharacterCollision::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterCollision);
	ACharacterCollision::~ACharacterCollision() {}
	struct Z_CompiledInDeferFile_FID_Projects_VTDarkness_Source_VTDarkness_CharacterCollision_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_VTDarkness_Source_VTDarkness_CharacterCollision_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterCollision, ACharacterCollision::StaticClass, TEXT("ACharacterCollision"), &Z_Registration_Info_UClass_ACharacterCollision, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterCollision), 2444274765U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_VTDarkness_Source_VTDarkness_CharacterCollision_h_2231683509(TEXT("/Script/VTDarkness"),
		Z_CompiledInDeferFile_FID_Projects_VTDarkness_Source_VTDarkness_CharacterCollision_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_VTDarkness_Source_VTDarkness_CharacterCollision_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTDarkness/FPCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_VTDarkness();
	VTDARKNESS_API UClass* Z_Construct_UClass_AFPCharacter();
	VTDARKNESS_API UClass* Z_Construct_UClass_AFPCharacter_NoRegister();
// End Cross Module References
	void AFPCharacter::StaticRegisterNativesAFPCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPCharacter);
	UClass* Z_Construct_UClass_AFPCharacter_NoRegister()
	{
		return AFPCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFPCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_VTDarkness,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPCharacter.h" },
		{ "ModuleRelativePath", "FPCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPCharacter_Statics::ClassParams = {
		&AFPCharacter::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFPCharacter()
	{
		if (!Z_Registration_Info_UClass_AFPCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPCharacter.OuterSingleton, Z_Construct_UClass_AFPCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPCharacter.OuterSingleton;
	}
	template<> VTDARKNESS_API UClass* StaticClass<AFPCharacter>()
	{
		return AFPCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPCharacter);
	AFPCharacter::~AFPCharacter() {}
	struct Z_CompiledInDeferFile_FID_Projects_VTDarkness_Source_VTDarkness_FPCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_VTDarkness_Source_VTDarkness_FPCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPCharacter, AFPCharacter::StaticClass, TEXT("AFPCharacter"), &Z_Registration_Info_UClass_AFPCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPCharacter), 705755044U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_VTDarkness_Source_VTDarkness_FPCharacter_h_2802498966(TEXT("/Script/VTDarkness"),
		Z_CompiledInDeferFile_FID_Projects_VTDarkness_Source_VTDarkness_FPCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_VTDarkness_Source_VTDarkness_FPCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

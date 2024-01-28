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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_VTDarkness();
	VTDARKNESS_API UClass* Z_Construct_UClass_AFPCharacter();
	VTDARKNESS_API UClass* Z_Construct_UClass_AFPCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFPCharacter::execSpawnActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnActor();
		P_NATIVE_END;
	}
	void AFPCharacter::StaticRegisterNativesAFPCharacter()
	{
		UClass* Class = AFPCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnActor", &AFPCharacter::execSpawnActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPCharacter_SpawnActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPCharacter_SpawnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "FPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPCharacter_SpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPCharacter, nullptr, "SpawnActor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPCharacter_SpawnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPCharacter_SpawnActor_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFPCharacter_SpawnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPCharacter_SpawnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPCharacter);
	UClass* Z_Construct_UClass_AFPCharacter_NoRegister()
	{
		return AFPCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFPCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actorBPToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_actorBPToSpawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_VTDarkness,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPCharacter_SpawnActor, "SpawnActor" }, // 4234157069
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPCharacter.h" },
		{ "ModuleRelativePath", "FPCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPCharacter_Statics::NewProp_actorBPToSpawn_MetaData[] = {
		{ "Category", "FPCharacter" },
		{ "ModuleRelativePath", "FPCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPCharacter_Statics::NewProp_actorBPToSpawn = { "actorBPToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPCharacter, actorBPToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPCharacter_Statics::NewProp_actorBPToSpawn_MetaData), Z_Construct_UClass_AFPCharacter_Statics::NewProp_actorBPToSpawn_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPCharacter_Statics::NewProp_actorBPToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPCharacter_Statics::ClassParams = {
		&AFPCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPCharacter_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_AFPCharacter, AFPCharacter::StaticClass, TEXT("AFPCharacter"), &Z_Registration_Info_UClass_AFPCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPCharacter), 1830065895U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_VTDarkness_Source_VTDarkness_FPCharacter_h_3644103855(TEXT("/Script/VTDarkness"),
		Z_CompiledInDeferFile_FID_Projects_VTDarkness_Source_VTDarkness_FPCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_VTDarkness_Source_VTDarkness_FPCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

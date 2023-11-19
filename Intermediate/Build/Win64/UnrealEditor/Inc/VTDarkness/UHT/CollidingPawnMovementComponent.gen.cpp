// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTDarkness/CollidingPawnMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollidingPawnMovementComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	UPackage* Z_Construct_UPackage__Script_VTDarkness();
	VTDARKNESS_API UClass* Z_Construct_UClass_UCollidingPawnMovementComponent();
	VTDARKNESS_API UClass* Z_Construct_UClass_UCollidingPawnMovementComponent_NoRegister();
// End Cross Module References
	void UCollidingPawnMovementComponent::StaticRegisterNativesUCollidingPawnMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCollidingPawnMovementComponent);
	UClass* Z_Construct_UClass_UCollidingPawnMovementComponent_NoRegister()
	{
		return UCollidingPawnMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCollidingPawnMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCollidingPawnMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VTDarkness,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCollidingPawnMovementComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollidingPawnMovementComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CollidingPawnMovementComponent.h" },
		{ "ModuleRelativePath", "CollidingPawnMovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCollidingPawnMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollidingPawnMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCollidingPawnMovementComponent_Statics::ClassParams = {
		&UCollidingPawnMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCollidingPawnMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCollidingPawnMovementComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCollidingPawnMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UCollidingPawnMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCollidingPawnMovementComponent.OuterSingleton, Z_Construct_UClass_UCollidingPawnMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCollidingPawnMovementComponent.OuterSingleton;
	}
	template<> VTDARKNESS_API UClass* StaticClass<UCollidingPawnMovementComponent>()
	{
		return UCollidingPawnMovementComponent::StaticClass();
	}
	UCollidingPawnMovementComponent::UCollidingPawnMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCollidingPawnMovementComponent);
	UCollidingPawnMovementComponent::~UCollidingPawnMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_Projects_VTDarkness_Source_VTDarkness_CollidingPawnMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_VTDarkness_Source_VTDarkness_CollidingPawnMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCollidingPawnMovementComponent, UCollidingPawnMovementComponent::StaticClass, TEXT("UCollidingPawnMovementComponent"), &Z_Registration_Info_UClass_UCollidingPawnMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCollidingPawnMovementComponent), 802364335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_VTDarkness_Source_VTDarkness_CollidingPawnMovementComponent_h_3822819333(TEXT("/Script/VTDarkness"),
		Z_CompiledInDeferFile_FID_Projects_VTDarkness_Source_VTDarkness_CollidingPawnMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_VTDarkness_Source_VTDarkness_CollidingPawnMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

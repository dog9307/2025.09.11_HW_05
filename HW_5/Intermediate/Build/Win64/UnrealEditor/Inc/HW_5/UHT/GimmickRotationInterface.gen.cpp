// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW_5/Public/GimmickRotationInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGimmickRotationInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
HW_5_API UClass* Z_Construct_UClass_UGimmickRotationInterface();
HW_5_API UClass* Z_Construct_UClass_UGimmickRotationInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW_5();
// End Cross Module References

// Begin Interface UGimmickRotationInterface
void UGimmickRotationInterface::StaticRegisterNativesUGimmickRotationInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGimmickRotationInterface);
UClass* Z_Construct_UClass_UGimmickRotationInterface_NoRegister()
{
	return UGimmickRotationInterface::StaticClass();
}
struct Z_Construct_UClass_UGimmickRotationInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GimmickRotationInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGimmickRotationInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGimmickRotationInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_HW_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGimmickRotationInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGimmickRotationInterface_Statics::ClassParams = {
	&UGimmickRotationInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGimmickRotationInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UGimmickRotationInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGimmickRotationInterface()
{
	if (!Z_Registration_Info_UClass_UGimmickRotationInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGimmickRotationInterface.OuterSingleton, Z_Construct_UClass_UGimmickRotationInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGimmickRotationInterface.OuterSingleton;
}
template<> HW_5_API UClass* StaticClass<UGimmickRotationInterface>()
{
	return UGimmickRotationInterface::StaticClass();
}
UGimmickRotationInterface::UGimmickRotationInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGimmickRotationInterface);
UGimmickRotationInterface::~UGimmickRotationInterface() {}
// End Interface UGimmickRotationInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_GimmickRotationInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGimmickRotationInterface, UGimmickRotationInterface::StaticClass, TEXT("UGimmickRotationInterface"), &Z_Registration_Info_UClass_UGimmickRotationInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGimmickRotationInterface), 1173638544U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_GimmickRotationInterface_h_2343017892(TEXT("/Script/HW_5"),
	Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_GimmickRotationInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_GimmickRotationInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

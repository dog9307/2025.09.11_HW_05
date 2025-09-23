// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW_5/Public/HW0506GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHW0506GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
HW_5_API UClass* Z_Construct_UClass_AHW0506GameMode();
HW_5_API UClass* Z_Construct_UClass_AHW0506GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW_5();
// End Cross Module References

// Begin Class AHW0506GameMode
void AHW0506GameMode::StaticRegisterNativesAHW0506GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHW0506GameMode);
UClass* Z_Construct_UClass_AHW0506GameMode_NoRegister()
{
	return AHW0506GameMode::StaticClass();
}
struct Z_Construct_UClass_AHW0506GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HW0506GameMode.h" },
		{ "ModuleRelativePath", "Public/HW0506GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHW0506GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHW0506GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_HW_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW0506GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHW0506GameMode_Statics::ClassParams = {
	&AHW0506GameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHW0506GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AHW0506GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHW0506GameMode()
{
	if (!Z_Registration_Info_UClass_AHW0506GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHW0506GameMode.OuterSingleton, Z_Construct_UClass_AHW0506GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHW0506GameMode.OuterSingleton;
}
template<> HW_5_API UClass* StaticClass<AHW0506GameMode>()
{
	return AHW0506GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHW0506GameMode);
AHW0506GameMode::~AHW0506GameMode() {}
// End Class AHW0506GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW0506GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHW0506GameMode, AHW0506GameMode::StaticClass, TEXT("AHW0506GameMode"), &Z_Registration_Info_UClass_AHW0506GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHW0506GameMode), 1613203765U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW0506GameMode_h_2519960212(TEXT("/Script/HW_5"),
	Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW0506GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW0506GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

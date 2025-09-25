// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW_5/Public/HW05ItemKey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHW05ItemKey() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
HW_5_API UClass* Z_Construct_UClass_AHW05ItemBase();
HW_5_API UClass* Z_Construct_UClass_AHW05ItemKey();
HW_5_API UClass* Z_Construct_UClass_AHW05ItemKey_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW_5();
// End Cross Module References

// Begin Class AHW05ItemKey
void AHW05ItemKey::StaticRegisterNativesAHW05ItemKey()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHW05ItemKey);
UClass* Z_Construct_UClass_AHW05ItemKey_NoRegister()
{
	return AHW05ItemKey::StaticClass();
}
struct Z_Construct_UClass_AHW05ItemKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HW05ItemKey.h" },
		{ "ModuleRelativePath", "Public/HW05ItemKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "Gimmick|Key" },
		{ "ModuleRelativePath", "Public/HW05ItemKey.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHW05ItemKey>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW05ItemKey_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW05ItemKey, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHW05ItemKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW05ItemKey_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05ItemKey_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHW05ItemKey_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHW05ItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HW_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05ItemKey_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHW05ItemKey_Statics::ClassParams = {
	&AHW05ItemKey::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHW05ItemKey_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHW05ItemKey_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05ItemKey_Statics::Class_MetaDataParams), Z_Construct_UClass_AHW05ItemKey_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHW05ItemKey()
{
	if (!Z_Registration_Info_UClass_AHW05ItemKey.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHW05ItemKey.OuterSingleton, Z_Construct_UClass_AHW05ItemKey_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHW05ItemKey.OuterSingleton;
}
template<> HW_5_API UClass* StaticClass<AHW05ItemKey>()
{
	return AHW05ItemKey::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHW05ItemKey);
AHW05ItemKey::~AHW05ItemKey() {}
// End Class AHW05ItemKey

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05ItemKey_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHW05ItemKey, AHW05ItemKey::StaticClass, TEXT("AHW05ItemKey"), &Z_Registration_Info_UClass_AHW05ItemKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHW05ItemKey), 173713630U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05ItemKey_h_1440557887(TEXT("/Script/HW_5"),
	Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05ItemKey_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05ItemKey_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

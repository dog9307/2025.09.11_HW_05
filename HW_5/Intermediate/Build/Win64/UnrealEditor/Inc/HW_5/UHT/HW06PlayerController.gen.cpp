// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW_5/Public/HW06PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHW06PlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
HW_5_API UClass* Z_Construct_UClass_AHW06PlayerController();
HW_5_API UClass* Z_Construct_UClass_AHW06PlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW_5();
// End Cross Module References

// Begin Class AHW06PlayerController
void AHW06PlayerController::StaticRegisterNativesAHW06PlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHW06PlayerController);
UClass* Z_Construct_UClass_AHW06PlayerController_NoRegister()
{
	return AHW06PlayerController::StaticClass();
}
struct Z_Construct_UClass_AHW06PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "HW06PlayerController.h" },
		{ "ModuleRelativePath", "Public/HW06PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasicIMC_MetaData[] = {
		{ "Category", "Input|Basic" },
		{ "ModuleRelativePath", "Public/HW06PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasicMove_MetaData[] = {
		{ "Category", "Input|Basic" },
		{ "ModuleRelativePath", "Public/HW06PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasicJump_MetaData[] = {
		{ "Category", "Input|Basic" },
		{ "ModuleRelativePath", "Public/HW06PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasicLook_MetaData[] = {
		{ "Category", "Input|Basic" },
		{ "ModuleRelativePath", "Public/HW06PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasicSprint_MetaData[] = {
		{ "Category", "Input|Basic" },
		{ "ModuleRelativePath", "Public/HW06PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasicInteract_MetaData[] = {
		{ "Category", "Input|Basic" },
		{ "ModuleRelativePath", "Public/HW06PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HelicopterIMC_MetaData[] = {
		{ "Category", "Input|Helicopter" },
		{ "ModuleRelativePath", "Public/HW06PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HelicopterMove_MetaData[] = {
		{ "Category", "Input|Helicopter" },
		{ "ModuleRelativePath", "Public/HW06PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HelicopterLook_MetaData[] = {
		{ "Category", "Input|Helicopter" },
		{ "ModuleRelativePath", "Public/HW06PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HelicopterRise_MetaData[] = {
		{ "Category", "Input|Helicopter" },
		{ "ModuleRelativePath", "Public/HW06PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HelicopterInteract_MetaData[] = {
		{ "Category", "Input|Helicopter" },
		{ "ModuleRelativePath", "Public/HW06PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BasicIMC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BasicMove;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BasicJump;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BasicLook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BasicSprint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BasicInteract;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HelicopterIMC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HelicopterMove;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HelicopterLook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HelicopterRise;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HelicopterInteract;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHW06PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW06PlayerController_Statics::NewProp_BasicIMC = { "BasicIMC", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerController, BasicIMC), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasicIMC_MetaData), NewProp_BasicIMC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW06PlayerController_Statics::NewProp_BasicMove = { "BasicMove", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerController, BasicMove), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasicMove_MetaData), NewProp_BasicMove_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW06PlayerController_Statics::NewProp_BasicJump = { "BasicJump", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerController, BasicJump), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasicJump_MetaData), NewProp_BasicJump_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW06PlayerController_Statics::NewProp_BasicLook = { "BasicLook", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerController, BasicLook), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasicLook_MetaData), NewProp_BasicLook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW06PlayerController_Statics::NewProp_BasicSprint = { "BasicSprint", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerController, BasicSprint), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasicSprint_MetaData), NewProp_BasicSprint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW06PlayerController_Statics::NewProp_BasicInteract = { "BasicInteract", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerController, BasicInteract), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasicInteract_MetaData), NewProp_BasicInteract_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW06PlayerController_Statics::NewProp_HelicopterIMC = { "HelicopterIMC", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerController, HelicopterIMC), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HelicopterIMC_MetaData), NewProp_HelicopterIMC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW06PlayerController_Statics::NewProp_HelicopterMove = { "HelicopterMove", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerController, HelicopterMove), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HelicopterMove_MetaData), NewProp_HelicopterMove_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW06PlayerController_Statics::NewProp_HelicopterLook = { "HelicopterLook", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerController, HelicopterLook), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HelicopterLook_MetaData), NewProp_HelicopterLook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW06PlayerController_Statics::NewProp_HelicopterRise = { "HelicopterRise", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerController, HelicopterRise), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HelicopterRise_MetaData), NewProp_HelicopterRise_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW06PlayerController_Statics::NewProp_HelicopterInteract = { "HelicopterInteract", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerController, HelicopterInteract), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HelicopterInteract_MetaData), NewProp_HelicopterInteract_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHW06PlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerController_Statics::NewProp_BasicIMC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerController_Statics::NewProp_BasicMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerController_Statics::NewProp_BasicJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerController_Statics::NewProp_BasicLook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerController_Statics::NewProp_BasicSprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerController_Statics::NewProp_BasicInteract,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerController_Statics::NewProp_HelicopterIMC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerController_Statics::NewProp_HelicopterMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerController_Statics::NewProp_HelicopterLook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerController_Statics::NewProp_HelicopterRise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerController_Statics::NewProp_HelicopterInteract,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW06PlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHW06PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_HW_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW06PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHW06PlayerController_Statics::ClassParams = {
	&AHW06PlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHW06PlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHW06PlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHW06PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AHW06PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHW06PlayerController()
{
	if (!Z_Registration_Info_UClass_AHW06PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHW06PlayerController.OuterSingleton, Z_Construct_UClass_AHW06PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHW06PlayerController.OuterSingleton;
}
template<> HW_5_API UClass* StaticClass<AHW06PlayerController>()
{
	return AHW06PlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHW06PlayerController);
AHW06PlayerController::~AHW06PlayerController() {}
// End Class AHW06PlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW06PlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHW06PlayerController, AHW06PlayerController::StaticClass, TEXT("AHW06PlayerController"), &Z_Registration_Info_UClass_AHW06PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHW06PlayerController), 2265485088U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW06PlayerController_h_3264860521(TEXT("/Script/HW_5"),
	Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW06PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW06PlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

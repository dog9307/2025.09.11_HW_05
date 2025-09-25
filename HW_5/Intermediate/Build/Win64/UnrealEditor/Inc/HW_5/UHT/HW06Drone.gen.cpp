// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW_5/Public/HW06Drone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHW06Drone() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
HW_5_API UClass* Z_Construct_UClass_AHW06Drone();
HW_5_API UClass* Z_Construct_UClass_AHW06Drone_NoRegister();
HW_5_API UClass* Z_Construct_UClass_UInteractableInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW_5();
// End Cross Module References

// Begin Class AHW06Drone
void AHW06Drone::StaticRegisterNativesAHW06Drone()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHW06Drone);
UClass* Z_Construct_UClass_AHW06Drone_NoRegister()
{
	return AHW06Drone::StaticClass();
}
struct Z_Construct_UClass_AHW06Drone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HW06Drone.h" },
		{ "ModuleRelativePath", "Public/HW06Drone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[] = {
		{ "Category", "Drone|Componenets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HW06Drone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Drone|Componenets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HW06Drone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Drone|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HW06Drone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Drone|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HW06Drone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerGetOffPos_MetaData[] = {
		{ "Category", "Drone|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HW06Drone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalSpeed_MetaData[] = {
		{ "Category", "Drone|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Move\n" },
#endif
		{ "ModuleRelativePath", "Public/HW06Drone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoostMultiplier_MetaData[] = {
		{ "Category", "Drone|Movement" },
		{ "ModuleRelativePath", "Public/HW06Drone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoostSpeed_MetaData[] = {
		{ "Category", "Drone|Movement" },
		{ "ModuleRelativePath", "Public/HW06Drone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpeed_MetaData[] = {
		{ "Category", "Drone|Movement" },
		{ "ModuleRelativePath", "Public/HW06Drone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Drone|Movement" },
		{ "ModuleRelativePath", "Public/HW06Drone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "Drone|Movement" },
		{ "ModuleRelativePath", "Public/HW06Drone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerGetOffPos;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoostMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoostSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHW06Drone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW06Drone_Statics::NewProp_Sphere = { "Sphere", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06Drone, Sphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sphere_MetaData), NewProp_Sphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW06Drone_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06Drone, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW06Drone_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06Drone, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW06Drone_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06Drone, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW06Drone_Statics::NewProp_OwnerGetOffPos = { "OwnerGetOffPos", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06Drone, OwnerGetOffPos), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerGetOffPos_MetaData), NewProp_OwnerGetOffPos_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHW06Drone_Statics::NewProp_NormalSpeed = { "NormalSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06Drone, NormalSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalSpeed_MetaData), NewProp_NormalSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHW06Drone_Statics::NewProp_BoostMultiplier = { "BoostMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06Drone, BoostMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoostMultiplier_MetaData), NewProp_BoostMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHW06Drone_Statics::NewProp_BoostSpeed = { "BoostSpeed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06Drone, BoostSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoostSpeed_MetaData), NewProp_BoostSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHW06Drone_Statics::NewProp_CurrentSpeed = { "CurrentSpeed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06Drone, CurrentSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSpeed_MetaData), NewProp_CurrentSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHW06Drone_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06Drone, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHW06Drone_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06Drone, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHW06Drone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06Drone_Statics::NewProp_Sphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06Drone_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06Drone_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06Drone_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06Drone_Statics::NewProp_OwnerGetOffPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06Drone_Statics::NewProp_NormalSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06Drone_Statics::NewProp_BoostMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06Drone_Statics::NewProp_BoostSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06Drone_Statics::NewProp_CurrentSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06Drone_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06Drone_Statics::NewProp_Velocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW06Drone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHW06Drone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_HW_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW06Drone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AHW06Drone_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(AHW06Drone, IInteractableInterface), false },  // 1802759244
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHW06Drone_Statics::ClassParams = {
	&AHW06Drone::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHW06Drone_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHW06Drone_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHW06Drone_Statics::Class_MetaDataParams), Z_Construct_UClass_AHW06Drone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHW06Drone()
{
	if (!Z_Registration_Info_UClass_AHW06Drone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHW06Drone.OuterSingleton, Z_Construct_UClass_AHW06Drone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHW06Drone.OuterSingleton;
}
template<> HW_5_API UClass* StaticClass<AHW06Drone>()
{
	return AHW06Drone::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHW06Drone);
AHW06Drone::~AHW06Drone() {}
// End Class AHW06Drone

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW06Drone_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHW06Drone, AHW06Drone::StaticClass, TEXT("AHW06Drone"), &Z_Registration_Info_UClass_AHW06Drone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHW06Drone), 2078548325U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW06Drone_h_3890955570(TEXT("/Script/HW_5"),
	Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW06Drone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW06Drone_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

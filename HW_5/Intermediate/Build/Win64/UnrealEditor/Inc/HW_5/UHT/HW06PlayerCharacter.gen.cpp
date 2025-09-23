// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW_5/Public/HW06PlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHW06PlayerCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
HW_5_API UClass* Z_Construct_UClass_AHW06PlayerCharacter();
HW_5_API UClass* Z_Construct_UClass_AHW06PlayerCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW_5();
// End Cross Module References

// Begin Class AHW06PlayerCharacter Function IsFalling
struct Z_Construct_UFunction_AHW06PlayerCharacter_IsFalling_Statics
{
	struct HW06PlayerCharacter_eventIsFalling_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/HW06PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AHW06PlayerCharacter_IsFalling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HW06PlayerCharacter_eventIsFalling_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHW06PlayerCharacter_IsFalling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HW06PlayerCharacter_eventIsFalling_Parms), &Z_Construct_UFunction_AHW06PlayerCharacter_IsFalling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHW06PlayerCharacter_IsFalling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHW06PlayerCharacter_IsFalling_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHW06PlayerCharacter_IsFalling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHW06PlayerCharacter_IsFalling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHW06PlayerCharacter, nullptr, "IsFalling", nullptr, nullptr, Z_Construct_UFunction_AHW06PlayerCharacter_IsFalling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHW06PlayerCharacter_IsFalling_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHW06PlayerCharacter_IsFalling_Statics::HW06PlayerCharacter_eventIsFalling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHW06PlayerCharacter_IsFalling_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHW06PlayerCharacter_IsFalling_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHW06PlayerCharacter_IsFalling_Statics::HW06PlayerCharacter_eventIsFalling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHW06PlayerCharacter_IsFalling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHW06PlayerCharacter_IsFalling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHW06PlayerCharacter::execIsFalling)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFalling();
	P_NATIVE_END;
}
// End Class AHW06PlayerCharacter Function IsFalling

// Begin Class AHW06PlayerCharacter
void AHW06PlayerCharacter::StaticRegisterNativesAHW06PlayerCharacter()
{
	UClass* Class = AHW06PlayerCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsFalling", &AHW06PlayerCharacter::execIsFalling },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHW06PlayerCharacter);
UClass* Z_Construct_UClass_AHW06PlayerCharacter_NoRegister()
{
	return AHW06PlayerCharacter::StaticClass();
}
struct Z_Construct_UClass_AHW06PlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HW06PlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/HW06PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[] = {
		{ "Category", "Player|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HW06PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skeletal_MetaData[] = {
		{ "Category", "Player|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HW06PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Player|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HW06PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Player|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HW06PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalSpeed_MetaData[] = {
		{ "Category", "Player|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Move\n" },
#endif
		{ "ModuleRelativePath", "Public/HW06PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintMultiplier_MetaData[] = {
		{ "Category", "Player|Movement" },
		{ "ModuleRelativePath", "Public/HW06PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Player|Movement" },
		{ "ModuleRelativePath", "Public/HW06PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpeed_MetaData[] = {
		{ "Category", "Player|Movement" },
		{ "ModuleRelativePath", "Public/HW06PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpSpeed_MetaData[] = {
		{ "Category", "Player|Jump" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Jump\n" },
#endif
		{ "ModuleRelativePath", "Public/HW06PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[] = {
		{ "Category", "Player|Jump" },
		{ "ModuleRelativePath", "Public/HW06PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAccel_MetaData[] = {
		{ "Category", "Player|Jump" },
		{ "ModuleRelativePath", "Public/HW06PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFalling_MetaData[] = {
		{ "Category", "Player|Jump" },
		{ "ModuleRelativePath", "Public/HW06PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCanDoubleJump_MetaData[] = {
		{ "Category", "Player|Jump" },
		{ "ModuleRelativePath", "Public/HW06PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Player|Movement" },
		{ "ModuleRelativePath", "Public/HW06PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "Player|Movement" },
		{ "ModuleRelativePath", "Public/HW06PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotAlpha_MetaData[] = {
		{ "Category", "Player|Mesh Rotation" },
		{ "ModuleRelativePath", "Public/HW06PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Capsule;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeletal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Gravity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpAccel;
	static void NewProp_bIsFalling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFalling;
	static void NewProp_bIsCanDoubleJump_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCanDoubleJump;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHW06PlayerCharacter_IsFalling, "IsFalling" }, // 2522621122
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHW06PlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerCharacter, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Capsule_MetaData), NewProp_Capsule_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_Skeletal = { "Skeletal", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerCharacter, Skeletal), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skeletal_MetaData), NewProp_Skeletal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerCharacter, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerCharacter, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_NormalSpeed = { "NormalSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerCharacter, NormalSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalSpeed_MetaData), NewProp_NormalSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_SprintMultiplier = { "SprintMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerCharacter, SprintMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintMultiplier_MetaData), NewProp_SprintMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerCharacter, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_CurrentSpeed = { "CurrentSpeed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerCharacter, CurrentSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSpeed_MetaData), NewProp_CurrentSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_JumpSpeed = { "JumpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerCharacter, JumpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpSpeed_MetaData), NewProp_JumpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerCharacter, Gravity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gravity_MetaData), NewProp_Gravity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_JumpAccel = { "JumpAccel", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerCharacter, JumpAccel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAccel_MetaData), NewProp_JumpAccel_MetaData) };
void Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_bIsFalling_SetBit(void* Obj)
{
	((AHW06PlayerCharacter*)Obj)->bIsFalling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_bIsFalling = { "bIsFalling", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHW06PlayerCharacter), &Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_bIsFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFalling_MetaData), NewProp_bIsFalling_MetaData) };
void Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_bIsCanDoubleJump_SetBit(void* Obj)
{
	((AHW06PlayerCharacter*)Obj)->bIsCanDoubleJump = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_bIsCanDoubleJump = { "bIsCanDoubleJump", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHW06PlayerCharacter), &Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_bIsCanDoubleJump_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCanDoubleJump_MetaData), NewProp_bIsCanDoubleJump_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerCharacter, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerCharacter, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_RotAlpha = { "RotAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW06PlayerCharacter, RotAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotAlpha_MetaData), NewProp_RotAlpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHW06PlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_Capsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_Skeletal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_NormalSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_SprintMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_SprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_CurrentSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_JumpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_Gravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_JumpAccel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_bIsFalling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_bIsCanDoubleJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW06PlayerCharacter_Statics::NewProp_RotAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW06PlayerCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHW06PlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_HW_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW06PlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHW06PlayerCharacter_Statics::ClassParams = {
	&AHW06PlayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHW06PlayerCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHW06PlayerCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHW06PlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AHW06PlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHW06PlayerCharacter()
{
	if (!Z_Registration_Info_UClass_AHW06PlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHW06PlayerCharacter.OuterSingleton, Z_Construct_UClass_AHW06PlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHW06PlayerCharacter.OuterSingleton;
}
template<> HW_5_API UClass* StaticClass<AHW06PlayerCharacter>()
{
	return AHW06PlayerCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHW06PlayerCharacter);
AHW06PlayerCharacter::~AHW06PlayerCharacter() {}
// End Class AHW06PlayerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW06PlayerCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHW06PlayerCharacter, AHW06PlayerCharacter::StaticClass, TEXT("AHW06PlayerCharacter"), &Z_Registration_Info_UClass_AHW06PlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHW06PlayerCharacter), 2420613637U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW06PlayerCharacter_h_2362357926(TEXT("/Script/HW_5"),
	Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW06PlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW06PlayerCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

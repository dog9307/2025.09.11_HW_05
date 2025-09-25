// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LockableInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW_5_LockableInterface_generated_h
#error "LockableInterface.generated.h already included, missing '#pragma once' in LockableInterface.h"
#endif
#define HW_5_LockableInterface_generated_h

#define FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_LockableInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HW_5_API ULockableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULockableInterface(ULockableInterface&&); \
	ULockableInterface(const ULockableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HW_5_API, ULockableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULockableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULockableInterface) \
	HW_5_API virtual ~ULockableInterface();


#define FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_LockableInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULockableInterface(); \
	friend struct Z_Construct_UClass_ULockableInterface_Statics; \
public: \
	DECLARE_CLASS(ULockableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HW_5"), HW_5_API) \
	DECLARE_SERIALIZER(ULockableInterface)


#define FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_LockableInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_LockableInterface_h_10_GENERATED_UINTERFACE_BODY() \
	FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_LockableInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_LockableInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILockableInterface() {} \
public: \
	typedef ULockableInterface UClassType; \
	typedef ILockableInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_LockableInterface_h_7_PROLOG
#define FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_LockableInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_LockableInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW_5_API UClass* StaticClass<class ULockableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_LockableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

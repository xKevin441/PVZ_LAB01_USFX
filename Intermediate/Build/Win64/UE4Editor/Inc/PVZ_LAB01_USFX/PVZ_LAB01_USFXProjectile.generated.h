// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PVZ_LAB01_USFX_PVZ_LAB01_USFXProjectile_generated_h
#error "PVZ_LAB01_USFXProjectile.generated.h already included, missing '#pragma once' in PVZ_LAB01_USFXProjectile.h"
#endif
#define PVZ_LAB01_USFX_PVZ_LAB01_USFXProjectile_generated_h

#define PVZ_LAB01_USFX_Source_PVZ_LAB01_USFX_PVZ_LAB01_USFXProjectile_h_15_SPARSE_DATA
#define PVZ_LAB01_USFX_Source_PVZ_LAB01_USFX_PVZ_LAB01_USFXProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PVZ_LAB01_USFX_Source_PVZ_LAB01_USFX_PVZ_LAB01_USFXProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PVZ_LAB01_USFX_Source_PVZ_LAB01_USFX_PVZ_LAB01_USFXProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPVZ_LAB01_USFXProjectile(); \
	friend struct Z_Construct_UClass_APVZ_LAB01_USFXProjectile_Statics; \
public: \
	DECLARE_CLASS(APVZ_LAB01_USFXProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PVZ_LAB01_USFX"), NO_API) \
	DECLARE_SERIALIZER(APVZ_LAB01_USFXProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PVZ_LAB01_USFX_Source_PVZ_LAB01_USFX_PVZ_LAB01_USFXProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPVZ_LAB01_USFXProjectile(); \
	friend struct Z_Construct_UClass_APVZ_LAB01_USFXProjectile_Statics; \
public: \
	DECLARE_CLASS(APVZ_LAB01_USFXProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PVZ_LAB01_USFX"), NO_API) \
	DECLARE_SERIALIZER(APVZ_LAB01_USFXProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PVZ_LAB01_USFX_Source_PVZ_LAB01_USFX_PVZ_LAB01_USFXProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APVZ_LAB01_USFXProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APVZ_LAB01_USFXProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APVZ_LAB01_USFXProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APVZ_LAB01_USFXProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APVZ_LAB01_USFXProjectile(APVZ_LAB01_USFXProjectile&&); \
	NO_API APVZ_LAB01_USFXProjectile(const APVZ_LAB01_USFXProjectile&); \
public:


#define PVZ_LAB01_USFX_Source_PVZ_LAB01_USFX_PVZ_LAB01_USFXProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APVZ_LAB01_USFXProjectile(APVZ_LAB01_USFXProjectile&&); \
	NO_API APVZ_LAB01_USFXProjectile(const APVZ_LAB01_USFXProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APVZ_LAB01_USFXProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APVZ_LAB01_USFXProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APVZ_LAB01_USFXProjectile)


#define PVZ_LAB01_USFX_Source_PVZ_LAB01_USFX_PVZ_LAB01_USFXProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(APVZ_LAB01_USFXProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APVZ_LAB01_USFXProjectile, ProjectileMovement); }


#define PVZ_LAB01_USFX_Source_PVZ_LAB01_USFX_PVZ_LAB01_USFXProjectile_h_12_PROLOG
#define PVZ_LAB01_USFX_Source_PVZ_LAB01_USFX_PVZ_LAB01_USFXProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PVZ_LAB01_USFX_Source_PVZ_LAB01_USFX_PVZ_LAB01_USFXProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PVZ_LAB01_USFX_Source_PVZ_LAB01_USFX_PVZ_LAB01_USFXProjectile_h_15_SPARSE_DATA \
	PVZ_LAB01_USFX_Source_PVZ_LAB01_USFX_PVZ_LAB01_USFXProjectile_h_15_RPC_WRAPPERS \
	PVZ_LAB01_USFX_Source_PVZ_LAB01_USFX_PVZ_LAB01_USFXProjectile_h_15_INCLASS \
	PVZ_LAB01_USFX_Source_PVZ_LAB01_USFX_PVZ_LAB01_USFXProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PVZ_LAB01_USFX_Source_PVZ_LAB01_USFX_PVZ_LAB01_USFXProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PVZ_LAB01_USFX_Source_PVZ_LAB01_USFX_PVZ_LAB01_USFXProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PVZ_LAB01_USFX_Source_PVZ_LAB01_USFX_PVZ_LAB01_USFXProjectile_h_15_SPARSE_DATA \
	PVZ_LAB01_USFX_Source_PVZ_LAB01_USFX_PVZ_LAB01_USFXProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PVZ_LAB01_USFX_Source_PVZ_LAB01_USFX_PVZ_LAB01_USFXProjectile_h_15_INCLASS_NO_PURE_DECLS \
	PVZ_LAB01_USFX_Source_PVZ_LAB01_USFX_PVZ_LAB01_USFXProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PVZ_LAB01_USFX_API UClass* StaticClass<class APVZ_LAB01_USFXProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PVZ_LAB01_USFX_Source_PVZ_LAB01_USFX_PVZ_LAB01_USFXProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

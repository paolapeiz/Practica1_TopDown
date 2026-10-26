// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Practica_1_TopDownGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePractica_1_TopDownGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PRACTICA_1_TOPDOWN_API UClass* Z_Construct_UClass_APractica_1_TopDownGameMode();
PRACTICA_1_TOPDOWN_API UClass* Z_Construct_UClass_APractica_1_TopDownGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Practica_1_TopDown();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APractica_1_TopDownGameMode **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APractica_1_TopDownGameMode;
UClass* APractica_1_TopDownGameMode::GetPrivateStaticClass()
{
	using TClass = APractica_1_TopDownGameMode;
	if (!Z_Registration_Info_UClass_APractica_1_TopDownGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Practica_1_TopDownGameMode"),
			Z_Registration_Info_UClass_APractica_1_TopDownGameMode.InnerSingleton,
			StaticRegisterNativesAPractica_1_TopDownGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APractica_1_TopDownGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_APractica_1_TopDownGameMode_NoRegister()
{
	return APractica_1_TopDownGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APractica_1_TopDownGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple Game Mode for a top-down perspective game\n *  Sets the default gameplay framework classes\n *  Check the Blueprint derived class for the set values\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Practica_1_TopDownGameMode.h" },
		{ "ModuleRelativePath", "Practica_1_TopDownGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Game Mode for a top-down perspective game\nSets the default gameplay framework classes\nCheck the Blueprint derived class for the set values" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class APractica_1_TopDownGameMode constinit property declarations **************
// ********** End Class APractica_1_TopDownGameMode constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APractica_1_TopDownGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APractica_1_TopDownGameMode_Statics
UObject* (*const Z_Construct_UClass_APractica_1_TopDownGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Practica_1_TopDown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APractica_1_TopDownGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APractica_1_TopDownGameMode_Statics::ClassParams = {
	&APractica_1_TopDownGameMode::StaticClass,
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
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APractica_1_TopDownGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APractica_1_TopDownGameMode_Statics::Class_MetaDataParams)
};
void APractica_1_TopDownGameMode::StaticRegisterNativesAPractica_1_TopDownGameMode()
{
}
UClass* Z_Construct_UClass_APractica_1_TopDownGameMode()
{
	if (!Z_Registration_Info_UClass_APractica_1_TopDownGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APractica_1_TopDownGameMode.OuterSingleton, Z_Construct_UClass_APractica_1_TopDownGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APractica_1_TopDownGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APractica_1_TopDownGameMode);
APractica_1_TopDownGameMode::~APractica_1_TopDownGameMode() {}
// ********** End Class APractica_1_TopDownGameMode ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_msi_Documents_Unreal_Projects_Practica_1_TopDown_Source_Practica_1_TopDown_Practica_1_TopDownGameMode_h__Script_Practica_1_TopDown_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APractica_1_TopDownGameMode, APractica_1_TopDownGameMode::StaticClass, TEXT("APractica_1_TopDownGameMode"), &Z_Registration_Info_UClass_APractica_1_TopDownGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APractica_1_TopDownGameMode), 3267789444U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_msi_Documents_Unreal_Projects_Practica_1_TopDown_Source_Practica_1_TopDown_Practica_1_TopDownGameMode_h__Script_Practica_1_TopDown_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_msi_Documents_Unreal_Projects_Practica_1_TopDown_Source_Practica_1_TopDown_Practica_1_TopDownGameMode_h__Script_Practica_1_TopDown_1665113050{
	TEXT("/Script/Practica_1_TopDown"),
	Z_CompiledInDeferFile_FID_Users_msi_Documents_Unreal_Projects_Practica_1_TopDown_Source_Practica_1_TopDown_Practica_1_TopDownGameMode_h__Script_Practica_1_TopDown_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_msi_Documents_Unreal_Projects_Practica_1_TopDown_Source_Practica_1_TopDown_Practica_1_TopDownGameMode_h__Script_Practica_1_TopDown_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

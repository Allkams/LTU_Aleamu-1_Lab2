// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyThirdPerson/MyThirdPersonChar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyThirdPersonChar() {}
// Cross Module References
	MYTHIRDPERSON_API UClass* Z_Construct_UClass_AMyThirdPersonChar_NoRegister();
	MYTHIRDPERSON_API UClass* Z_Construct_UClass_AMyThirdPersonChar();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyThirdPerson();
// End Cross Module References
	void AMyThirdPersonChar::StaticRegisterNativesAMyThirdPersonChar()
	{
	}
	UClass* Z_Construct_UClass_AMyThirdPersonChar_NoRegister()
	{
		return AMyThirdPersonChar::StaticClass();
	}
	struct Z_Construct_UClass_AMyThirdPersonChar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyThirdPersonChar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyThirdPerson,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyThirdPersonChar_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyThirdPersonChar.h" },
		{ "ModuleRelativePath", "MyThirdPersonChar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyThirdPersonChar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyThirdPersonChar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyThirdPersonChar_Statics::ClassParams = {
		&AMyThirdPersonChar::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyThirdPersonChar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyThirdPersonChar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyThirdPersonChar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyThirdPersonChar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyThirdPersonChar, 4049036038);
	template<> MYTHIRDPERSON_API UClass* StaticClass<AMyThirdPersonChar>()
	{
		return AMyThirdPersonChar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyThirdPersonChar(Z_Construct_UClass_AMyThirdPersonChar, &AMyThirdPersonChar::StaticClass, TEXT("/Script/MyThirdPerson"), TEXT("AMyThirdPersonChar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyThirdPersonChar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

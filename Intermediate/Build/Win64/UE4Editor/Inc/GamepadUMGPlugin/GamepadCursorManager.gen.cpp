// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamepadUMGPlugin/Public/GamepadCursorManager.h"
#include "Engine/Classes/Engine/LocalPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamepadCursorManager() {}
// Cross Module References
	GAMEPADUMGPLUGIN_API UClass* Z_Construct_UClass_UGamepadCursorManager_NoRegister();
	GAMEPADUMGPLUGIN_API UClass* Z_Construct_UClass_UGamepadCursorManager();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
	UPackage* Z_Construct_UPackage__Script_GamepadUMGPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UGamepadCursorManager::execContainsGamepadCursorInputProcessor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ContainsGamepadCursorInputProcessor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGamepadCursorManager::execIsCursorValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCursorValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGamepadCursorManager::execIsCursorOverInteractableWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCursorOverInteractableWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGamepadCursorManager::execToggleAnalogDebug)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleAnalogDebug();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGamepadCursorManager::execToggleCursorDebug)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleCursorDebug();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGamepadCursorManager::execDisableAnalogCursor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableAnalogCursor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGamepadCursorManager::execEnableAnalogCursor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableAnalogCursor();
		P_NATIVE_END;
	}
	void UGamepadCursorManager::StaticRegisterNativesUGamepadCursorManager()
	{
		UClass* Class = UGamepadCursorManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ContainsGamepadCursorInputProcessor", &UGamepadCursorManager::execContainsGamepadCursorInputProcessor },
			{ "DisableAnalogCursor", &UGamepadCursorManager::execDisableAnalogCursor },
			{ "EnableAnalogCursor", &UGamepadCursorManager::execEnableAnalogCursor },
			{ "IsCursorOverInteractableWidget", &UGamepadCursorManager::execIsCursorOverInteractableWidget },
			{ "IsCursorValid", &UGamepadCursorManager::execIsCursorValid },
			{ "ToggleAnalogDebug", &UGamepadCursorManager::execToggleAnalogDebug },
			{ "ToggleCursorDebug", &UGamepadCursorManager::execToggleCursorDebug },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGamepadCursorManager_ContainsGamepadCursorInputProcessor_Statics
	{
		struct GamepadCursorManager_eventContainsGamepadCursorInputProcessor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGamepadCursorManager_ContainsGamepadCursorInputProcessor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GamepadCursorManager_eventContainsGamepadCursorInputProcessor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGamepadCursorManager_ContainsGamepadCursorInputProcessor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GamepadCursorManager_eventContainsGamepadCursorInputProcessor_Parms), &Z_Construct_UFunction_UGamepadCursorManager_ContainsGamepadCursorInputProcessor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamepadCursorManager_ContainsGamepadCursorInputProcessor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamepadCursorManager_ContainsGamepadCursorInputProcessor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGamepadCursorManager_ContainsGamepadCursorInputProcessor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cursor" },
		{ "ModuleRelativePath", "Public/GamepadCursorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamepadCursorManager_ContainsGamepadCursorInputProcessor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGamepadCursorManager, nullptr, "ContainsGamepadCursorInputProcessor", nullptr, nullptr, sizeof(GamepadCursorManager_eventContainsGamepadCursorInputProcessor_Parms), Z_Construct_UFunction_UGamepadCursorManager_ContainsGamepadCursorInputProcessor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadCursorManager_ContainsGamepadCursorInputProcessor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGamepadCursorManager_ContainsGamepadCursorInputProcessor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadCursorManager_ContainsGamepadCursorInputProcessor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGamepadCursorManager_ContainsGamepadCursorInputProcessor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGamepadCursorManager_ContainsGamepadCursorInputProcessor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGamepadCursorManager_DisableAnalogCursor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGamepadCursorManager_DisableAnalogCursor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cursor" },
		{ "ModuleRelativePath", "Public/GamepadCursorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamepadCursorManager_DisableAnalogCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGamepadCursorManager, nullptr, "DisableAnalogCursor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGamepadCursorManager_DisableAnalogCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadCursorManager_DisableAnalogCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGamepadCursorManager_DisableAnalogCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGamepadCursorManager_DisableAnalogCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGamepadCursorManager_EnableAnalogCursor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGamepadCursorManager_EnableAnalogCursor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cursor" },
		{ "ModuleRelativePath", "Public/GamepadCursorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamepadCursorManager_EnableAnalogCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGamepadCursorManager, nullptr, "EnableAnalogCursor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGamepadCursorManager_EnableAnalogCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadCursorManager_EnableAnalogCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGamepadCursorManager_EnableAnalogCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGamepadCursorManager_EnableAnalogCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGamepadCursorManager_IsCursorOverInteractableWidget_Statics
	{
		struct GamepadCursorManager_eventIsCursorOverInteractableWidget_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGamepadCursorManager_IsCursorOverInteractableWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GamepadCursorManager_eventIsCursorOverInteractableWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGamepadCursorManager_IsCursorOverInteractableWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GamepadCursorManager_eventIsCursorOverInteractableWidget_Parms), &Z_Construct_UFunction_UGamepadCursorManager_IsCursorOverInteractableWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamepadCursorManager_IsCursorOverInteractableWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamepadCursorManager_IsCursorOverInteractableWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGamepadCursorManager_IsCursorOverInteractableWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cursor" },
		{ "ModuleRelativePath", "Public/GamepadCursorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamepadCursorManager_IsCursorOverInteractableWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGamepadCursorManager, nullptr, "IsCursorOverInteractableWidget", nullptr, nullptr, sizeof(GamepadCursorManager_eventIsCursorOverInteractableWidget_Parms), Z_Construct_UFunction_UGamepadCursorManager_IsCursorOverInteractableWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadCursorManager_IsCursorOverInteractableWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGamepadCursorManager_IsCursorOverInteractableWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadCursorManager_IsCursorOverInteractableWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGamepadCursorManager_IsCursorOverInteractableWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGamepadCursorManager_IsCursorOverInteractableWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGamepadCursorManager_IsCursorValid_Statics
	{
		struct GamepadCursorManager_eventIsCursorValid_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGamepadCursorManager_IsCursorValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GamepadCursorManager_eventIsCursorValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGamepadCursorManager_IsCursorValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GamepadCursorManager_eventIsCursorValid_Parms), &Z_Construct_UFunction_UGamepadCursorManager_IsCursorValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamepadCursorManager_IsCursorValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamepadCursorManager_IsCursorValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGamepadCursorManager_IsCursorValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cursor" },
		{ "ModuleRelativePath", "Public/GamepadCursorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamepadCursorManager_IsCursorValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGamepadCursorManager, nullptr, "IsCursorValid", nullptr, nullptr, sizeof(GamepadCursorManager_eventIsCursorValid_Parms), Z_Construct_UFunction_UGamepadCursorManager_IsCursorValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadCursorManager_IsCursorValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGamepadCursorManager_IsCursorValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadCursorManager_IsCursorValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGamepadCursorManager_IsCursorValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGamepadCursorManager_IsCursorValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGamepadCursorManager_ToggleAnalogDebug_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGamepadCursorManager_ToggleAnalogDebug_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cursor" },
		{ "ModuleRelativePath", "Public/GamepadCursorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamepadCursorManager_ToggleAnalogDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGamepadCursorManager, nullptr, "ToggleAnalogDebug", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGamepadCursorManager_ToggleAnalogDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadCursorManager_ToggleAnalogDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGamepadCursorManager_ToggleAnalogDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGamepadCursorManager_ToggleAnalogDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGamepadCursorManager_ToggleCursorDebug_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGamepadCursorManager_ToggleCursorDebug_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cursor" },
		{ "ModuleRelativePath", "Public/GamepadCursorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamepadCursorManager_ToggleCursorDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGamepadCursorManager, nullptr, "ToggleCursorDebug", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGamepadCursorManager_ToggleCursorDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamepadCursorManager_ToggleCursorDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGamepadCursorManager_ToggleCursorDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGamepadCursorManager_ToggleCursorDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGamepadCursorManager_NoRegister()
	{
		return UGamepadCursorManager::StaticClass();
	}
	struct Z_Construct_UClass_UGamepadCursorManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGamepadCursorManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_GamepadUMGPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGamepadCursorManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGamepadCursorManager_ContainsGamepadCursorInputProcessor, "ContainsGamepadCursorInputProcessor" }, // 1945308327
		{ &Z_Construct_UFunction_UGamepadCursorManager_DisableAnalogCursor, "DisableAnalogCursor" }, // 3656533483
		{ &Z_Construct_UFunction_UGamepadCursorManager_EnableAnalogCursor, "EnableAnalogCursor" }, // 1000103319
		{ &Z_Construct_UFunction_UGamepadCursorManager_IsCursorOverInteractableWidget, "IsCursorOverInteractableWidget" }, // 1051587231
		{ &Z_Construct_UFunction_UGamepadCursorManager_IsCursorValid, "IsCursorValid" }, // 868568175
		{ &Z_Construct_UFunction_UGamepadCursorManager_ToggleAnalogDebug, "ToggleAnalogDebug" }, // 4024692921
		{ &Z_Construct_UFunction_UGamepadCursorManager_ToggleCursorDebug, "ToggleCursorDebug" }, // 343315609
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGamepadCursorManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "GamepadCursorManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GamepadCursorManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGamepadCursorManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGamepadCursorManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGamepadCursorManager_Statics::ClassParams = {
		&UGamepadCursorManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGamepadCursorManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGamepadCursorManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGamepadCursorManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGamepadCursorManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGamepadCursorManager, 4244526042);
	template<> GAMEPADUMGPLUGIN_API UClass* StaticClass<UGamepadCursorManager>()
	{
		return UGamepadCursorManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGamepadCursorManager(Z_Construct_UClass_UGamepadCursorManager, &UGamepadCursorManager::StaticClass, TEXT("/Script/GamepadUMGPlugin"), TEXT("UGamepadCursorManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGamepadCursorManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

/*
	This code was written by Nick Darnell

	Plugin created by Rama
	Modified by Nicholas Helish
*/
#pragma once

#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "GamepadCursorManager.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogGamepadCursorManager, Log, All);

class FGameAnalogCursor;

/**
 *
 */
UCLASS(Blueprintable, BlueprintType)
class GAMEPADUMGPLUGIN_API UGamepadCursorManager : public ULocalPlayerSubsystem
{
	GENERATED_BODY()

public:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	
	virtual void Deinitialize() override;

	FORCEINLINE TSharedPtr<FGameAnalogCursor> GetCursor() const { return Cursor; }

	UFUNCTION(BlueprintCallable, Category = "Cursor")
	void EnableAnalogCursor();

	UFUNCTION(BlueprintCallable, Category = "Cursor")
	void DisableAnalogCursor();

	UFUNCTION(BlueprintCallable, Category = "Cursor")
	void ToggleCursorDebug();

	UFUNCTION(BlueprintCallable, Category = "Cursor")
	void ToggleAnalogDebug();

	UFUNCTION(BlueprintPure, Category = "Cursor")
	bool IsCursorOverInteractableWidget() const;

	UFUNCTION(BlueprintPure, Category = "Cursor")
	bool IsCursorValid() const;

	UFUNCTION(BlueprintPure, Category = "Cursor")
	bool ContainsGamepadCursorInputProcessor() const;

private:

	TSharedPtr<FGameAnalogCursor> Cursor;

};


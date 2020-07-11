/*
	This code was written by Nick Darnell

	Plugin created by Rama
	Modified by Nicholas Helish
*/
#include "GamepadCursorManager.h"
#include "GameAnalogCursor.h"
#include "GamepadCursorSettings.h"
#include "Framework/Application/SlateApplication.h"

#include "Engine/Engine.h"

DEFINE_LOG_CATEGORY(LogGamepadCursorManager);

// Helper macro for getting the settings without editing the settings, USE GetMutableDefault if you want to edit the settings in code
#define GET_SETTINGS GetDefault<UGamepadCursorSettings>()

void UGamepadCursorManager::Initialize(FSubsystemCollectionBase& Collection)
{

}

void UGamepadCursorManager::Deinitialize()
{
	// When the local player is ending, cleanup the analog cursor and reset the shared ptr variable
	DisableAnalogCursor();
	Cursor.Reset();
}

void UGamepadCursorManager::EnableAnalogCursor()
{	
	// Ensure that slate and the world is valid
	if (FSlateApplication::IsInitialized() && GetWorld())
	{
		const float CursorRadius = GET_SETTINGS->GetAnalogCursorRadius();		

		// If the shared ptr isnt tied to a valid obj then create one and connect the two
		if (!IsCursorValid())
		{
			Cursor = MakeShareable(new FGameAnalogCursor(GetLocalPlayer(), GetWorld(), CursorRadius));			
		}

		// Check that we're not re-adding it(which counts as a duplicate)
		if (!ContainsGamepadCursorInputProcessor())
		{
			FSlateApplication::Get().RegisterInputPreProcessor(Cursor);
		}
		FSlateApplication::Get().SetCursorRadius(CursorRadius);
	}
}

void UGamepadCursorManager::DisableAnalogCursor()
{
	if (FSlateApplication::IsInitialized())
	{
		// Dont try to remove it if we already removed it, you may say overkill I say ensuring safeguards
		if (ContainsGamepadCursorInputProcessor())
		{
			FSlateApplication::Get().UnregisterInputPreProcessor(Cursor);
		}
		FSlateApplication::Get().SetCursorRadius(0.0f);
	}
}

void UGamepadCursorManager::ToggleCursorDebug()
{
	if (IsCursorValid())
	{
		Cursor->bDebugging = !Cursor->bDebugging;
	}
}

void UGamepadCursorManager::ToggleAnalogDebug()
{
	if (IsCursorValid())
	{
		Cursor->bAnalogDebug = !Cursor->bAnalogDebug;
		const FString BoolResult = ((Cursor->bAnalogDebug) ? "true" : "false");
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Emerald, "Analog Debug: " + BoolResult);
	}
}

bool UGamepadCursorManager::IsCursorOverInteractableWidget() const
{
	if (IsCursorValid())
	{
		return Cursor->IsHovered();
	}
	return false;
}

bool UGamepadCursorManager::IsCursorValid() const
{
	return Cursor.IsValid();
}

bool UGamepadCursorManager::ContainsGamepadCursorInputProcessor() const
{
	if (FSlateApplication::IsInitialized())
	{
		// Continue if we're using a valid cursor
		if (IsCursorValid())
		{
			// Returns true if index is greater than -1, false if less than/equal to -1
			const int32 FoundIndex = FSlateApplication::Get().FindInputPreProcessor(Cursor);
			return (FoundIndex > -1);
		}
	}
	return false;
}

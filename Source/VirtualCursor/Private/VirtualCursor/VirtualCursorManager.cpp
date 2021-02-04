#include "VirtualCursor/VirtualCursorManager.h"
#include "VirtualCursor/ExtendedAnalogCursor.h"
#include "VirtualCursor/CursorSettings.h"
#include "Framework/Application/SlateApplication.h"

#include "Engine/Engine.h"

DEFINE_LOG_CATEGORY(LogVirtualCursorManager);


void UVirtualCursorManager::Initialize(FSubsystemCollectionBase& Collection)
{
}


void UVirtualCursorManager::Deinitialize()
{
	// When the local player is ending, cleanup the analog cursor and reset the shared ptr variable
	DisableAnalogCursor();
	Cursor.Reset();
}


void UVirtualCursorManager::EnableAnalogCursor(const bool bUseLeftStick)
{
	// Ensure that slate and the world is valid
	if (FSlateApplication::IsInitialized() && GetWorld())
	{
		const float CursorRadius = GetDefault<UCursorSettings>()->GetAnalogCursorRadius();

		// If the shared ptr isnt tied to a valid obj then create one and connect the two
		if (!IsCursorValid())
		{
			Cursor = MakeShareable(new FExtendedAnalogCursor(GetLocalPlayer(), GetWorld(), CursorRadius));
			
			const EAnalogStick Stick = bUseLeftStick ? EAnalogStick::Left : EAnalogStick::Right;
			Cursor->SetStick(Stick);
		}

		// Check that we're not re-adding it(which counts as a duplicate)
		if (!ContainsGamepadCursorInputProcessor())
		{
			FSlateApplication::Get().RegisterInputPreProcessor(Cursor);
		}
		FSlateApplication::Get().SetCursorRadius(CursorRadius);
	}
}


void UVirtualCursorManager::DisableAnalogCursor()
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


void UVirtualCursorManager::ToggleCursorDebug()
{
	if (IsCursorValid())
	{
		Cursor->bDebugging = !Cursor->bDebugging;
		const FString BoolResult = ((Cursor->bDebugging) ? "true" : "false");
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Emerald, "Cursor Debug: " + BoolResult);
	}
}


void UVirtualCursorManager::ToggleAnalogDebug()
{
	if (IsCursorValid())
	{
		Cursor->bAnalogDebug = !Cursor->bAnalogDebug;
		const FString BoolResult = ((Cursor->bAnalogDebug) ? "true" : "false");
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Emerald, "Analog Debug: " + BoolResult);
	}
}


bool UVirtualCursorManager::IsCursorDebugActive() const
{
	if (IsCursorValid())
	{
		return Cursor->bDebugging;
	}
	return false;
}


bool UVirtualCursorManager::IsAnalogDebugActive() const
{
	if (IsCursorValid())
	{
		return Cursor->bAnalogDebug;
	}
	return false;
}


bool UVirtualCursorManager::IsCursorOverInteractableWidget() const
{
	if (IsCursorValid())
	{
		return Cursor->IsHovered();
	}
	return false;
}


bool UVirtualCursorManager::IsCursorValid() const
{
	return Cursor.IsValid();
}


bool UVirtualCursorManager::ContainsGamepadCursorInputProcessor() const
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

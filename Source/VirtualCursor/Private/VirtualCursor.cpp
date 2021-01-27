#include "VirtualCursor.h"
#include "CursorSettings.h"
#include "ExtendedAnalogCursor.h"
#include "VirtualCursorManager.h"


void UVirtualCursor::Enable(class APlayerController* PlayerController)
{
	if (PlayerController)
	{
		if (PlayerController->GetLocalPlayer())
		{
			PlayerController->GetLocalPlayer()->GetSubsystem<UVirtualCursorManager>()->EnableAnalogCursor();
		}
	}
}


void UVirtualCursor::Disable(class APlayerController* PlayerController)
{
	if (PlayerController)
	{
		if (PlayerController->GetLocalPlayer())
		{
			PlayerController->GetLocalPlayer()->GetSubsystem<UVirtualCursorManager>()->DisableAnalogCursor();
		}
	}
}


bool UVirtualCursor::IsOverInteractableWidget(class APlayerController* PlayerController)
{
	if (PlayerController)
	{
		if (PlayerController->GetLocalPlayer())
		{
			return PlayerController->GetLocalPlayer()->GetSubsystem<UVirtualCursorManager>()->IsCursorOverInteractableWidget();
		}
	}

	return false;
}

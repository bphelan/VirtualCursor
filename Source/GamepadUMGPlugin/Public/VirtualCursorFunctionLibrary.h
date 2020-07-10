/*
	This code was written by Nick Darnell
	
	Plugin created by Rama
	Modified by Nicholas Helish
*/
#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "VirtualCursorFunctionLibrary.generated.h"
  
/**
 * 
 */
UCLASS()
class GAMEPADUMGPLUGIN_API UVirtualCursorFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category="Game", meta = (DisplayName = "(Global) Enable Virtual Cursor"))
	static void Global_EnableVirtualCursor(class APlayerController* PC);

	UFUNCTION(BlueprintCallable, Category = "Game", meta = (DisplayName = "(Global) Disable Virtual Cursor"))
	static void Global_DisableVirtualCursor(class APlayerController* PC);

	UFUNCTION(BlueprintPure, Category="Game", meta = (DisplayName = "(Global) Is Cursor Over Interactable Widget"))
	static bool Global_IsCursorOverInteractableWidget(class APlayerController* PC);
};

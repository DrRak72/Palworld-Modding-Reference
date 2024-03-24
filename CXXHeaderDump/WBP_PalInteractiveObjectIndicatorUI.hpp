#ifndef UE4SS_SDK_WBP_PalInteractiveObjectIndicatorUI_HPP
#define UE4SS_SDK_WBP_PalInteractiveObjectIndicatorUI_HPP

class UWBP_PalInteractiveObjectIndicatorUI_C : public UPalUserWidget
{
    class UWidgetAnimation* Default_In;                                               // 0x0408 (size: 0x8)
    class UWBP_Ingame_Interact_C* WBP_Ingame_Interact;                                // 0x0410 (size: 0x8)
    FVector Offset;                                                                   // 0x0418 (size: 0x18)
    TMap<class EPalInteractiveObjectActionType, class FDataTableRowHandle> InteractKeyTextIdMap; // 0x0430 (size: 0x50)
    EPalInteractiveObjectActionType Action Type;                                      // 0x0480 (size: 0x1)
    TMap<class EPalInteractiveObjectActionType, class FPalDataTableRowName_UIInputAction> ActionTypeNameMap; // 0x0488 (size: 0x50)
    TScriptInterface<class IPalInteractiveObjectComponentInterface> InteractiveObject; // 0x04D8 (size: 0x10)
    EPalInteractiveObjectButtonType buttonType;                                       // 0x04E8 (size: 0x1)
    double longPushTime;                                                              // 0x04F0 (size: 0x8)
    FPalUIActionBindData TriggerActionHandle;                                         // 0x04F8 (size: 0x4)
    FPalUIActionBindData EndTriggerActionhandle;                                      // 0x04FC (size: 0x4)
    bool CachedIsValidInteract;                                                       // 0x0500 (size: 0x1)
    bool bIsRegisteredActionInput;                                                    // 0x0501 (size: 0x1)
    bool IsEnableSelf;                                                                // 0x0502 (size: 0x1)
    FDataTableRowHandle LockedByRideMSGID;                                            // 0x0508 (size: 0x10)
    bool CanToggle;                                                                   // 0x0518 (size: 0x1)
    bool IsInteractInterval;                                                          // 0x0519 (size: 0x1)

    bool IsInteracting();
    void IsSameTriggeringActionType(EPalInteractiveObjectActionType ActionType, bool& IsSame);
    void ResetInteractInterval();
    void ReleaseInteractButton();
    void PressInteractButton();
    void SetEnable(bool isEnable);
    void RegisterAction(bool isInputConsume, class UPalUserWidget* Parent);
    void Update Button Type(EPalInteractiveObjectButtonType newButtonType, double newLongPushTime, bool IsValidInteract, bool CanToggle);
    void Unregister Action(class UPalUserWidget* Parent);
    void EndTriggerInteract();
    void StartTriggerInteract();
    void Deactivate(class UPalUserWidget* Parent);
    void Activate(bool isInputConsume, class UPalUserWidget* Parent);
    void Update Interactable(bool bInteractable, class UPalUserWidget* Parent);
    void UpdateVisible(bool Visible);
    void UpdateText(FText InText, bool IsLockedByRide);
    void Setup(EPalInteractiveObjectActionType ActionType, TScriptInterface<class IPalInteractiveObjectComponentInterface> Interface);
}; // Size: 0x51A

#endif

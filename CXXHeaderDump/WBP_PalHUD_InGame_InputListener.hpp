#ifndef UE4SS_SDK_WBP_PalHUD_InGame_InputListener_HPP
#define UE4SS_SDK_WBP_PalHUD_InGame_InputListener_HPP

class UWBP_PalHUD_InGame_InputListener_C : public UPalUIInGameInputListener
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0428 (size: 0x8)
    class UWBP_Ingame_Chat_C* WBP_Ingame_Chat;                                        // 0x0430 (size: 0x8)
    class UWBP_PalInteractiveObjectIndicatorCanvas_C* WBP_PalInteractiveObjectIndicatorCanvas; // 0x0438 (size: 0x8)
    class UWBP_PlayerRadialMenu_C* WBP_PlayerRadialMenu;                              // 0x0440 (size: 0x8)
    FPalDataTableRowName_UIInputAction EscapeActionName;                              // 0x0448 (size: 0x8)
    FPalDataTableRowName_UIInputAction OpenCharacterMenuActionName;                   // 0x0450 (size: 0x8)
    FPalDataTableRowName_UIInputAction OpenBuildMenuActionName;                       // 0x0458 (size: 0x8)
    FPalDataTableRowName_UIInputAction OpenTechnologyMenuActionName;                  // 0x0460 (size: 0x8)
    FPalDataTableRowName_UIInputAction OpenWorldMapActionName;                        // 0x0468 (size: 0x8)
    FPalDataTableRowName_UIInputAction OpenPalStatusActionName;                       // 0x0470 (size: 0x8)
    FPalUIActionBindData CharacterMenuActionHandle;                                   // 0x0478 (size: 0x4)
    FPalDataTableRowName_UIInputAction OpenChatActionName;                            // 0x047C (size: 0x8)
    FPalDataTableRowName_UIInputAction ChageCategoryChatActionName;                   // 0x0484 (size: 0x8)
    FPalUIActionBindData ChangeCategoryChatActionHandle;                              // 0x048C (size: 0x4)
    FPalUIActionBindData WorldMapActionHandle;                                        // 0x0490 (size: 0x4)
    FPalUIActionBindData TechnologyMenuActionHandle;                                  // 0x0494 (size: 0x4)
    FPalUIActionBindData PalStatusActionHandle;                                       // 0x0498 (size: 0x4)

    void CREATEDELEGATE_PROXYFUNCTION_0(const FPalKeyConfigSettings& PrevSettings, const FPalKeyConfigSettings& NewSettings);
    void OnKeyConfigChanged(FPalKeyConfigSettings PreSetting, FPalKeyConfigSettings NewSetting);
    void OpenChat();
    void CanOpenAnyUI(bool& CanOpenUI);
    void OpenBuildRadialMenuWithSelectedIndex(const int32 SelectedIndex);
    void OpenBuildRadialMenu(const FName BuildObjectId);
    void OnTriggerWorldMap();
    void Setup Input Action();
    void OpenBuildMenu(const int32 BuildObjectTypeA);
    void OpenMenu_Internal(TEnumAsByte<EPalUIInGameMainMenuTabType::Type> TabType, EPalBuildObjectTypeA BuildObjectTypeA);
    void OnTriggerEscape();
    void OnTriggerOpenPalStatus();
    void OnTriggerOpenTechnologyMenu();
    void OnTriggerOpenBuildMenu();
    void OnTriggerOpenCraftMenu();
    void OnTriggerOpenInventoryMenu();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnSetup_AfterCreatedPlayer();
    void BndEvt__WBP_PalHUD_InGame_InputListener_WBP_Ingame_Chat_K2Node_ComponentBoundEvent_0_OnCompleteInput__DelegateSignature();
    void ExecuteUbergraph_WBP_PalHUD_InGame_InputListener(int32 EntryPoint);
}; // Size: 0x49C

#endif

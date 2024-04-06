#ifndef UE4SS_SDK_WBP_InGameMainMenu_HPP
#define UE4SS_SDK_WBP_InGameMainMenu_HPP

class UWBP_InGameMainMenu_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UCanvasPanel* CanvasPanel_106;                                              // 0x0438 (size: 0x8)
    class UWBP_MainMenu_C* WBP_MainMenu;                                              // 0x0440 (size: 0x8)
    class UWBP_MainMenu_bg_C* WBP_MainMenu_bg;                                        // 0x0448 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0450 (size: 0x8)
    class UPalUserWidget* CurrentContentWidget;                                       // 0x0458 (size: 0x8)
    FPalDataTableRowName_UIInputAction NextTabActionName;                             // 0x0460 (size: 0x8)
    FPalDataTableRowName_UIInputAction PrevTabActionName;                             // 0x0468 (size: 0x8)
    FPalDataTableRowName_UIInputAction CloseMenuActionName;                           // 0x0470 (size: 0x8)
    TMap<TEnumAsByte<EPalUIInGameMainMenuTabType::Type>, FDataTableRowHandle> TitleMsgIDMap; // 0x0478 (size: 0x50)

    class UWidget* BP_GetDesiredFocusTarget();
    void SelectGuildTab();
    void SelectInventoryEquipmentTab();
    void SelectOptionTab();
    void OnAllNewFlagCleared_PalDex();
    void On Update Player Status Point();
    void On Unused Status Points Changed(int32 UnusedPoint);
    void SetupAllAttentionDot();
    void Setup Attention Dot(TEnumAsByte<EPalUIInGameMainMenuTabType::Type> Tab);
    void OnChangedTabIndexEvent(int32 OldIndex, int32 newIndex, class UWidget* FocusTargetWidget);
    void SelectPaldexTab();
    void SetupBgText(TEnumAsByte<EPalUIInGameMainMenuTabType::Type> Type);
    void OnCancelAction();
    void AddChildToContentBody(class UPalUserWidget* Widget);
    void OnNextTabAction();
    void OnPrevTabAction();
    void SelectPalTab();
    void SelectTechnologyTab();
    void SelectTab(TEnumAsByte<EPalUIInGameMainMenuTabType::Type> TabType);
    void SetupInputAction();
    void AnmEvent_AllOpen();
    void BndEvt__WBP_InGameMainMenu_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void OnSetup();
    void OnInitialized();
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_InGameMainMenu(int32 EntryPoint);
}; // Size: 0x4C8

#endif

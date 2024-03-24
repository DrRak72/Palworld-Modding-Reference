#ifndef UE4SS_SDK_WBP_MainMenu_HPP
#define UE4SS_SDK_WBP_MainMenu_HPP

class UWBP_MainMenu_C : public UWBP_PanelWidgetChildrenSelectorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    class UWidgetAnimation* Anm_Close_Main_Menu;                                      // 0x0468 (size: 0x8)
    class UWidgetAnimation* Anm_Open_Main_menu;                                       // 0x0470 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Tab;                                          // 0x0478 (size: 0x8)
    class UWBP_MainMenu_Tab_C* WBP_Tab_00;                                            // 0x0480 (size: 0x8)
    class UWBP_MainMenu_Tab_C* WBP_Tab_01;                                            // 0x0488 (size: 0x8)
    class UWBP_MainMenu_Tab_C* WBP_Tab_02;                                            // 0x0490 (size: 0x8)
    class UWBP_MainMenu_Tab_C* WBP_Tab_03;                                            // 0x0498 (size: 0x8)
    class UWBP_MainMenu_Tab_C* WBP_Tab_04;                                            // 0x04A0 (size: 0x8)
    class UWBP_MainMenu_Tab_C* WBP_Tab_05;                                            // 0x04A8 (size: 0x8)
    class UWBP_Main_Menu_Tab_Key_C* WBP_Tab_Key_L;                                    // 0x04B0 (size: 0x8)
    class UWBP_Main_Menu_Tab_Key_C* WBP_Tab_Key_R;                                    // 0x04B8 (size: 0x8)
    TMap<TEnumAsByte<EPalUIInGameMainMenuTabType::Type>, UWBP_MainMenu_Tab_C*> TabWidgetMap; // 0x04C0 (size: 0x50)

    void GetTabWidgetByMenuType(TEnumAsByte<EPalUIInGameMainMenuTabType::Type> MenuType, class UWBP_MainMenu_Tab_C*& TabWidget);
    void SelectByMainMenuType(TEnumAsByte<EPalUIInGameMainMenuTabType::Type> Type);
    void OnClickedTabEvent(class UWBP_MainMenu_Tab_C* TabWidget);
    void RegisterPanelWidget(class UPanelWidget*& PanelWidget);
    void OnChangedIndexEvent(int32 OldIndex, int32 newIndex, class UWidget* FocusTargetWidget);
    void OnPrevEvent(int32 OldIndex, int32 newIndex);
    void OnNextEvent(int32 OldIndex, int32 newIndex);
    void Anm_Focus(TEnumAsByte<EPalUIInGameMainMenuTabType::Type> Type);
    void Anm_FocusToNormal(TEnumAsByte<EPalUIInGameMainMenuTabType::Type> Type);
    void Anm_Open();
    void OnInitialized();
    void BndEvt__WBP_MainMenu_WBP_Tab_Key_L_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_MainMenu_WBP_Tab_Key_R_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_MainMenu(int32 EntryPoint);
}; // Size: 0x510

#endif

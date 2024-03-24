#ifndef UE4SS_SDK_WBP_Paldex_tabset_HPP
#define UE4SS_SDK_WBP_Paldex_tabset_HPP

class UWBP_Paldex_tabset_C : public UWBP_PanelWidgetChildrenSelectorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Tab;                                          // 0x0468 (size: 0x8)
    class UWBP_Main_Menu_Tab_Key_C* WBP_Main_Menu_Tab_Key_L;                          // 0x0470 (size: 0x8)
    class UWBP_Main_Menu_Tab_Key_C* WBP_Main_Menu_Tab_Key_R;                          // 0x0478 (size: 0x8)
    class UWBP_Paldex_tab_C* WBP_Paldex_tab_Distribution;                             // 0x0480 (size: 0x8)
    class UWBP_Paldex_tab_C* WBP_Paldex_tab_Model;                                    // 0x0488 (size: 0x8)
    FWBP_Paldex_tabset_COnSelectedModelTab OnSelectedModelTab;                        // 0x0490 (size: 0x10)
    void OnSelectedModelTab();
    FWBP_Paldex_tabset_COnSelectedDistributionTab OnSelectedDistributionTab;          // 0x04A0 (size: 0x10)
    void OnSelectedDistributionTab();

    void OnPrevEvent(int32 OldIndex, int32 newIndex);
    void OnNextEvent(int32 OldIndex, int32 newIndex);
    void OnChangedIndexEvent(int32 OldIndex, int32 newIndex, class UWidget* FocusTargetWidget);
    void RegisterPanelWidget(class UPanelWidget*& PanelWidget);
    void BndEvt__WBP_Paldex_tabset_WBP_Paldex_tab_Distribution_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_Paldex_tabset_WBP_Paldex_tab_Model_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void OnInitialized();
    void BndEvt__WBP_Paldex_tabset_WBP_Main_Menu_Tab_Key_R_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__WBP_Paldex_tabset_WBP_Main_Menu_Tab_Key_L_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_Paldex_tabset(int32 EntryPoint);
    void OnSelectedDistributionTab__DelegateSignature();
    void OnSelectedModelTab__DelegateSignature();
}; // Size: 0x4B0

#endif

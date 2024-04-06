#ifndef UE4SS_SDK_WBP_Shop_Header_HPP
#define UE4SS_SDK_WBP_Shop_Header_HPP

class UWBP_Shop_Header_C : public UWBP_PanelWidgetChildrenSelectorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    class UHorizontalBox* HorizontalBox_ShopTab;                                      // 0x0468 (size: 0x8)
    class UWBP_Main_Menu_Tab_Key_C* WBP_Main_Menu_Tab_Key_L;                          // 0x0470 (size: 0x8)
    class UWBP_Main_Menu_Tab_Key_C* WBP_Main_Menu_Tab_Key_R;                          // 0x0478 (size: 0x8)
    class UWBP_MainMenu_Money_C* WBP_MainMenu_Money;                                  // 0x0480 (size: 0x8)
    class UWBP_Shop_tab_C* WBP_Shop_tab;                                              // 0x0488 (size: 0x8)
    class UWBP_Shop_tab_C* WBP_Shop_tab_1;                                            // 0x0490 (size: 0x8)
    TArray<class UWBP_Shop_tab_C*> TabArray;                                          // 0x0498 (size: 0x10)

    void OnChangedIndexEvent(int32 OldIndex, int32 newIndex, class UWidget* FocusTargetWidget);
    void OnPrevEvent(int32 OldIndex, int32 newIndex);
    void OnNextEvent(int32 OldIndex, int32 newIndex);
    void RegisterPanelWidget(class UPanelWidget*& PanelWidget);
    void SelectTabByTabType(TEnumAsByte<E_PalItemShopTabType::Type> TabType);
    void PlayFocusAnim(int32 Index);
    void OnClicked_Internal(class UWBP_Shop_tab_C* TabWidget);
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_Shop_Header_WBP_Main_Menu_Tab_Key_R_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_Shop_Header_WBP_Main_Menu_Tab_Key_L_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_Shop_Header(int32 EntryPoint);
}; // Size: 0x4A8

#endif

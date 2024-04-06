#ifndef UE4SS_SDK_WBP_Shop_tab_HPP
#define UE4SS_SDK_WBP_Shop_tab_HPP

class UWBP_Shop_tab_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Focus;                                                // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Normal;                                               // 0x0290 (size: 0x8)
    class UImage* FocusGrd;                                                           // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Main;                                              // 0x02A0 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;                                // 0x02A8 (size: 0x8)
    FWBP_Shop_tab_COnClicked OnClicked;                                               // 0x02B0 (size: 0x10)
    void OnClicked(class UWBP_Shop_tab_C* selfWidget);
    TEnumAsByte<E_PalItemShopTabType::Type> TabType;                                  // 0x02C0 (size: 0x1)

    void SetupTabText();
    void GetTabType(TEnumAsByte<E_PalItemShopTabType::Type>& TabType);
    void AnmEvent_Focus();
    void AnmEvent_Normal();
    void OnInitialized();
    void BndEvt__WBP_Shop_tab_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Shop_tab(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UWBP_Shop_tab_C* selfWidget);
}; // Size: 0x2C1

#endif

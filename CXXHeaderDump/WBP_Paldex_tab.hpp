#ifndef UE4SS_SDK_WBP_Paldex_tab_HPP
#define UE4SS_SDK_WBP_Paldex_tab_HPP

class UWBP_Paldex_tab_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Normal;                                               // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Focus;                                                // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Title;                                             // 0x0290 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;                                // 0x0298 (size: 0x8)
    FDataTableRowHandle MsgId;                                                        // 0x02A0 (size: 0x10)
    FWBP_Paldex_tab_COnClicked OnClicked;                                             // 0x02B0 (size: 0x10)
    void OnClicked();

    void AnmEvent_Focus();
    void AnmEvent_Unfocus();
    void OnInitialized();
    void BndEvt__WBP_Paldex_tab_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Paldex_tab(int32 EntryPoint);
    void OnClicked__DelegateSignature();
}; // Size: 0x2C0

#endif

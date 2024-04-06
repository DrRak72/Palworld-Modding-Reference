#ifndef UE4SS_SDK_WBP_Shop_SelectButton_HPP
#define UE4SS_SDK_WBP_Shop_SelectButton_HPP

class UWBP_Shop_SelectButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Main;                                              // 0x0288 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0290 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x0298 (size: 0x8)
    FDataTableRowHandle MsgId;                                                        // 0x02A0 (size: 0x10)
    FWBP_Shop_SelectButton_COnClicked OnClicked;                                      // 0x02B0 (size: 0x10)
    void OnClicked();
    FPalDataTableRowName_UIInputAction BindInputName;                                 // 0x02C0 (size: 0x8)

    void OnInitialized();
    void BndEvt__WBP_Shop_SelectButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Shop_SelectButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Shop_SelectButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Shop_SelectButton(int32 EntryPoint);
    void OnClicked__DelegateSignature();
}; // Size: 0x2C8

#endif

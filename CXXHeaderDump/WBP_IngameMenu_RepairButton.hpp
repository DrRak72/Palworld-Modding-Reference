#ifndef UE4SS_SDK_WBP_IngameMenu_RepairButton_HPP
#define UE4SS_SDK_WBP_IngameMenu_RepairButton_HPP

class UWBP_IngameMenu_RepairButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_DisableToEnable;                                      // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Main;                                              // 0x0290 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0298 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x02A0 (size: 0x8)
    FWBP_IngameMenu_RepairButton_COnClicked OnClicked;                                // 0x02A8 (size: 0x10)
    void OnClicked();

    void SetEnableButton(bool isEnableButton);
    void BndEvt__WBP_IngameMenu_RepairButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_RepairButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_RepairButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_IngameMenu_RepairButton(int32 EntryPoint);
    void OnClicked__DelegateSignature();
}; // Size: 0x2B8

#endif

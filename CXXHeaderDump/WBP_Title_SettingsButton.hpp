#ifndef UE4SS_SDK_WBP_Title_SettingsButton_HPP
#define UE4SS_SDK_WBP_Title_SettingsButton_HPP

class UWBP_Title_SettingsButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_DisableToEnable;                                      // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_AttentionNormalToFocus;                               // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0290 (size: 0x8)
    class UImage* Dot_0;                                                              // 0x0298 (size: 0x8)
    class UImage* Dot_1;                                                              // 0x02A0 (size: 0x8)
    class UImage* Dot_2;                                                              // 0x02A8 (size: 0x8)
    class UImage* Dot_3;                                                              // 0x02B0 (size: 0x8)
    class UImage* FocusFrame;                                                         // 0x02B8 (size: 0x8)
    class UImage* Frame;                                                              // 0x02C0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Main;                                              // 0x02C8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02D0 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x02D8 (size: 0x8)
    FPalDataTableRowName_UIInputAction DisplayActionName;                             // 0x02E0 (size: 0x8)
    FWBP_Title_SettingsButton_COnClicked OnClicked;                                   // 0x02E8 (size: 0x10)
    void OnClicked();
    FDataTableRowHandle MsgId;                                                        // 0x02F8 (size: 0x10)

    void OnInitialized();
    void BndEvt__WBP_Title_SettingsButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Title_SettingsButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Title_SettingsButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Title_SettingsButton(int32 EntryPoint);
    void OnClicked__DelegateSignature();
}; // Size: 0x308

#endif

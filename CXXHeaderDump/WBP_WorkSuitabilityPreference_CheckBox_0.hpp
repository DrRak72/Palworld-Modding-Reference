#ifndef UE4SS_SDK_WBP_WorkSuitabilityPreference_CheckBox_0_HPP
#define UE4SS_SDK_WBP_WorkSuitabilityPreference_CheckBox_0_HPP

class UWBP_WorkSuitabilityPreference_CheckBox_0_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Image_None;                                                         // 0x0280 (size: 0x8)
    class UPalCheckBox* PalCheckBox;                                                  // 0x0288 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_0;                        // 0x0290 (size: 0x8)
    bool IsEnableCheckBox;                                                            // 0x0298 (size: 0x1)
    FWBP_WorkSuitabilityPreference_CheckBox_0_COnCheckStateChanged OnCheckStateChanged; // 0x02A0 (size: 0x10)
    void OnCheckStateChanged(bool IsChecked, EPalWorkSuitability Suitability);
    EPalWorkSuitability BindedSuitability;                                            // 0x02B0 (size: 0x1)
    bool IsBattleSettingMode;                                                         // 0x02B1 (size: 0x1)
    FWBP_WorkSuitabilityPreference_CheckBox_0_COnHoveredCheckBox OnHoveredCheckBox;   // 0x02B8 (size: 0x10)
    void OnHoveredCheckBox(class UWBP_WorkSuitabilityPreference_CheckBox_0_C* selfWidget);

    void IsBattleSettingCheckBox(bool& IsBattleSetting);
    void Setup_ForBattleSetting();
    void SetCheckedState(bool IsChecked);
    void GetBindedSuitability(EPalWorkSuitability& Suitability);
    void Setup(EPalWorkSuitability BindSuitability);
    void SetEnableClick(bool isEnable);
    void BndEvt__WBP_WorkSuitabilityPreference_CheckBox_0_WBP_PalInvisibleButton_0_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_WorkSuitabilityPreference_CheckBox_0_PalCheckBox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__WBP_WorkSuitabilityPreference_CheckBox_0_WBP_PalInvisibleButton_0_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_WorkSuitabilityPreference_CheckBox_0(int32 EntryPoint);
    void OnHoveredCheckBox__DelegateSignature(class UWBP_WorkSuitabilityPreference_CheckBox_0_C* selfWidget);
    void OnCheckStateChanged__DelegateSignature(bool IsChecked, EPalWorkSuitability Suitability);
}; // Size: 0x2C8

#endif

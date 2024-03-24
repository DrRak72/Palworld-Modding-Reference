#ifndef UE4SS_SDK_WBP_IngameMenu_Monitoring_WorkButton_HPP
#define UE4SS_SDK_WBP_IngameMenu_Monitoring_WorkButton_HPP

class UWBP_IngameMenu_Monitoring_WorkButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* FocusBase;                                                          // 0x0280 (size: 0x8)
    class UImage* FocusFrame;                                                         // 0x0288 (size: 0x8)
    class UImage* Icon;                                                               // 0x0290 (size: 0x8)
    class UCanvasPanel* Select;                                                       // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Select;                                            // 0x02A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Work;                                              // 0x02A8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02B0 (size: 0x8)
    int32 WorkHardLevel;                                                              // 0x02B8 (size: 0x4)
    TArray<FDataTableRowHandle> WorkHardMsgIds;                                       // 0x02C0 (size: 0x10)
    FWBP_IngameMenu_Monitoring_WorkButton_COnChangeHardWorkLevel OnChangeHardWorkLevel; // 0x02D0 (size: 0x10)
    void OnChangeHardWorkLevel(int32 WorkLevel);
    FWBP_IngameMenu_Monitoring_WorkButton_COnHover OnHover;                           // 0x02E0 (size: 0x10)
    void OnHover(int32 WorkHardLevel);
    FWBP_IngameMenu_Monitoring_WorkButton_COnUnhover OnUnhover;                       // 0x02F0 (size: 0x10)
    void OnUnhover();

    void Construct();
    void BndEvt__WBP_IngameMenu_Monitoring_WorkButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_Monitoring_WorkButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_Monitoring_WorkButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Destruct();
    void ActiveSelect(bool Active);
    void ExecuteUbergraph_WBP_IngameMenu_Monitoring_WorkButton(int32 EntryPoint);
    void OnUnhover__DelegateSignature();
    void OnHover__DelegateSignature(int32 WorkHardLevel);
    void OnChangeHardWorkLevel__DelegateSignature(int32 WorkLevel);
}; // Size: 0x300

#endif

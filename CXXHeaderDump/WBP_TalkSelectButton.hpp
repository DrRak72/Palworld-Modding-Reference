#ifndef UE4SS_SDK_WBP_TalkSelectButton_HPP
#define UE4SS_SDK_WBP_TalkSelectButton_HPP

class UWBP_TalkSelectButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UImage* Base;                                                               // 0x0288 (size: 0x8)
    class UImage* Frame;                                                              // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Main;                                              // 0x0298 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02A0 (size: 0x8)
    int32 Bind Choice Index;                                                          // 0x02A8 (size: 0x4)
    FWBP_TalkSelectButton_COnClicked OnClicked;                                       // 0x02B0 (size: 0x10)
    void OnClicked(int32 BindedChoiceIndex);

    void GetBindedChoiceIndex(int32& Index);
    void Setup(FText Text, int32 BindChoiceIndex);
    void BndEvt__WBP_TalkSelectButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_TalkSelectButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_TalkSelectButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_TalkSelectButton(int32 EntryPoint);
    void OnClicked__DelegateSignature(int32 BindedChoiceIndex);
}; // Size: 0x2C0

#endif

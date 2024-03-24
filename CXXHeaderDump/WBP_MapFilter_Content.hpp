#ifndef UE4SS_SDK_WBP_MapFilter_Content_HPP
#define UE4SS_SDK_WBP_MapFilter_Content_HPP

class UWBP_MapFilter_Content_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UCheckBox* CheckBox;                                                        // 0x0280 (size: 0x8)
    class UCanvasPanel* Focus;                                                        // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Text_FilterContent;                                     // 0x0290 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0298 (size: 0x8)
    EPalLocationType Location Type;                                                   // 0x02A0 (size: 0x1)
    FWBP_MapFilter_Content_CChangeFilter ChangeFilter;                                // 0x02A8 (size: 0x10)
    void ChangeFilter(EPalLocationType LocationType, bool isEnable);
    bool ForceEnable;                                                                 // 0x02B8 (size: 0x1)

    void SetFilter(FDataTableRowHandle MsgId, EPalLocationType LocationType);
    void BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void SetForceEnable(bool Set);
    void ExecuteUbergraph_WBP_MapFilter_Content(int32 EntryPoint);
    void ChangeFilter__DelegateSignature(EPalLocationType LocationType, bool isEnable);
}; // Size: 0x2B9

#endif

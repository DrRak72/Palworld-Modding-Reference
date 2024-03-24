#ifndef UE4SS_SDK_WBP_CommonSelectNum_HPP
#define UE4SS_SDK_WBP_CommonSelectNum_HPP

class UWBP_CommonSelectNum_C : public UPalUISelectNumWidgetBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UButton* Button_318;                                                        // 0x0438 (size: 0x8)
    class UCanvasPanel* CanvasPanel_58;                                               // 0x0440 (size: 0x8)
    class UEditableTextBox* EditableTextBox_0;                                        // 0x0448 (size: 0x8)
    class UImage* Image_454;                                                          // 0x0450 (size: 0x8)
    class UButton* LeftButton;                                                        // 0x0458 (size: 0x8)
    class UButton* rightButton;                                                       // 0x0460 (size: 0x8)
    int32 NowCount;                                                                   // 0x0468 (size: 0x4)
    int32 MaxCount;                                                                   // 0x046C (size: 0x4)
    FWBP_CommonSelectNum_COnRightButtonClicked OnRightButtonClicked;                  // 0x0470 (size: 0x10)
    void OnRightButtonClicked();
    FWBP_CommonSelectNum_COnLeftButtonClicked OnLeftButtonClicked;                    // 0x0480 (size: 0x10)
    void OnLeftButtonClicked();
    FWBP_CommonSelectNum_COnTextCommited OnTextCommited;                              // 0x0490 (size: 0x10)
    void OnTextCommited(FString NewString);
    int32 MaxDigit;                                                                   // 0x04A0 (size: 0x4)
    class UPalUISelectNumParameter* Parameter;                                        // 0x04A8 (size: 0x8)

    void CheckMaxCount(FString InString, FString& OutString);
    void GetNowCount(int32& Count);
    void Check Numeric(FString checkString, FString& OutString);
    void UpdateText();
    void Increment();
    void Decrement();
    void Setup(int32 inMaxCount, int32 defaultCount);
    void BndEvt__WBP_CommonSelectNum_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_CommonSelectNum_EditableTextBox_0_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_CommonSelectNum_EditableTextBox_0_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__WBP_CommonSelectNum_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_CommonSelectNum_Button_318_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void OnSetup();
    void OnClickedR();
    void OnClickedL();
    void OnEscape();
    void OnTextChanged(FString NewString);
    void ExecuteUbergraph_WBP_CommonSelectNum(int32 EntryPoint);
    void OnTextCommited__DelegateSignature(FString NewString);
    void OnLeftButtonClicked__DelegateSignature();
    void OnRightButtonClicked__DelegateSignature();
}; // Size: 0x4B0

#endif

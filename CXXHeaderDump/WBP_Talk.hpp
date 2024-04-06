#ifndef UE4SS_SDK_WBP_Talk_HPP
#define UE4SS_SDK_WBP_Talk_HPP

class UWBP_Talk_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* AnmClose;                                                 // 0x0280 (size: 0x8)
    class UWidgetAnimation* AnmOpen;                                                  // 0x0288 (size: 0x8)
    class UImage* Base;                                                               // 0x0290 (size: 0x8)
    class UImage* DummyImage_ForSkipText;                                             // 0x0298 (size: 0x8)
    class UImage* NameULine;                                                          // 0x02A0 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_Line1;                                     // 0x02A8 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_Line2;                                     // 0x02B0 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_Line3;                                     // 0x02B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_TalkerName;                                        // 0x02C0 (size: 0x8)
    class UWBP_Talk_ChoiceButtonList_C* WBP_Talk_ChoiceButtonList;                    // 0x02C8 (size: 0x8)
    class UWBP_Talk_NextArrow_C* WBP_Talk_NextArrow;                                  // 0x02D0 (size: 0x8)
    FWBP_Talk_COnClosed OnClosed;                                                     // 0x02D8 (size: 0x10)
    void OnClosed();
    FWBP_Talk_COnChoiced OnChoiced;                                                   // 0x02E8 (size: 0x10)
    void OnChoiced(int32 ChoicedIndex);
    TArray<class UBP_PalRichTextBlock_C*> RichTextArray;                              // 0x02F8 (size: 0x10)
    FWBP_Talk_COnRequestSkipText OnRequestSkipText;                                   // 0x0308 (size: 0x10)
    void OnRequestSkipText();

    FEventReply On_DummyImage_ForSkipText_MouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void GetTopChoiceButton(class UWBP_TalkSelectButton_C*& Button);
    void GetSpreadString(FText Text, TArray<FString>& StringArray);
    void SetupTextBlockSize(FText OriginalText);
    void SetNextArrowVisible(ESlateVisibility NewVisibility);
    void ShowChoice(TArray<FName>& textIDList);
    void SetTalkerName(FText Text);
    void SetMainText(FText Text);
    void Finished_7854B49A42678202B3176690F8AA142E();
    void AnmEvent_Open();
    void AnmEvent_Close_WithEventDispatcher();
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_Talk_WBP_Talk_ChoiceButtonList_K2Node_ComponentBoundEvent_0_OnSelectedChoice__DelegateSignature(int32 Index);
    void ExecuteUbergraph_WBP_Talk(int32 EntryPoint);
    void OnRequestSkipText__DelegateSignature();
    void OnChoiced__DelegateSignature(int32 ChoicedIndex);
    void OnClosed__DelegateSignature();
}; // Size: 0x318

#endif

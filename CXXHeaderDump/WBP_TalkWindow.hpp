#ifndef UE4SS_SDK_WBP_TalkWindow_HPP
#define UE4SS_SDK_WBP_TalkWindow_HPP

class UWBP_TalkWindow_C : public UPalTalkWindowWidgetBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_Dummy;                                     // 0x0450 (size: 0x8)
    class UWBP_Talk_C* WBP_Talk;                                                      // 0x0458 (size: 0x8)
    int32 DisplayTextIndex;                                                           // 0x0460 (size: 0x4)
    FText DisplayText;                                                                // 0x0468 (size: 0x18)
    bool IsDisplayingText;                                                            // 0x0480 (size: 0x1)
    TArray<FName> DisplayTextIdList;                                                  // 0x0488 (size: 0x10)
    double TextDisplayTimer;                                                          // 0x0498 (size: 0x8)
    bool IsRegisteredText;                                                            // 0x04A0 (size: 0x1)
    FPalDataTableRowName_UIInputAction ProgressTextInputAction_01;                    // 0x04A4 (size: 0x8)
    FPalDataTableRowName_UIInputAction ProgressTextInputAction_02;                    // 0x04AC (size: 0x8)
    FPalUIActionBindData ProgressTextInputActionHandle_01;                            // 0x04B4 (size: 0x4)
    FPalUIActionBindData ProgressTextInputActionHandle_02;                            // 0x04B8 (size: 0x4)
    bool IsChoiceMode;                                                                // 0x04BC (size: 0x1)

    void OnTalkerDamage(FPalDamageResult DamageResult);
    void OnProgressTextInput();
    void UnregisterInputAction_DisplayingText();
    void RegisterInputAction_DisplayingText();
    void OnTalkWidgetClosed();
    void ProgressText();
    void Setup_Internal();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnCancelAction();
    void SkipText();
    void CalculateDisplayingText();
    void Setup Text();
    void Proceed();
    void OnChoiced(int32 Index);
    void ShowChoice(const TArray<FName>& choiceTextIDList);
    void SetMainTextList(const TArray<FName>& textIDList);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void Destruct();
    void OnSetup();
    void RequestClose();
    void BndEvt__WBP_TalkWindow_WBP_Talk_K2Node_ComponentBoundEvent_0_OnChoiced__DelegateSignature(int32 ChoicedIndex);
    void BndEvt__WBP_TalkWindow_WBP_Talk_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature();
    void OnCancelEvent();
    void BndEvt__WBP_TalkWindow_WBP_Talk_K2Node_ComponentBoundEvent_2_OnRequestSkipText__DelegateSignature();
    void ExecuteUbergraph_WBP_TalkWindow(int32 EntryPoint);
}; // Size: 0x4BD

#endif

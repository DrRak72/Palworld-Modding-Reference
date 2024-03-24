#ifndef UE4SS_SDK_WBP_TutorialMessage_Temp_HPP
#define UE4SS_SDK_WBP_TutorialMessage_Temp_HPP

class UWBP_TutorialMessage_Temp_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Message_Out;                                          // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Message_In;                                           // 0x0288 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_TutorialMsg;                    // 0x0290 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Message;                                          // 0x0298 (size: 0x8)
    TArray<FDataTableRowHandle> TutorialMessages;                                     // 0x02A0 (size: 0x10)
    FTimerHandle MessageTimer;                                                        // 0x02B0 (size: 0x8)
    FDataTableRowHandle CurrentMsg;                                                   // 0x02B8 (size: 0x10)
    FTimerHandle Interruputer;                                                        // 0x02C8 (size: 0x8)
    bool Skipable;                                                                    // 0x02D0 (size: 0x1)

    void CreateGuideText(FText InText, FText& OutText);
    void On Input Method Changed(ECommonInputType InputType);
    void Setup();
    void Finished_D8B6F6C240191DC6DD60BAADB6596025();
    void Finished_5267E3844738D65023A58CBEE7C11FAC();
    void QueueTutorial(FDataTableRowHandle TutorialMsgID);
    void PresentMessage();
    void SkipToNextMessage();
    void ExecuteUbergraph_WBP_TutorialMessage_Temp(int32 EntryPoint);
}; // Size: 0x2D1

#endif

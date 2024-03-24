#ifndef UE4SS_SDK_WBP_IngameProgress_HPP
#define UE4SS_SDK_WBP_IngameProgress_HPP

class UWBP_IngameProgress_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Anm_Assinged;                                             // 0x0410 (size: 0x8)
    class UWidgetAnimation* Anm_NonWorker;                                            // 0x0418 (size: 0x8)
    class UWidgetAnimation* Anm_Finish;                                               // 0x0420 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x0428 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0430 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Hour;                // 0x0438 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Hour_1;              // 0x0440 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Minute;              // 0x0448 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Minute_1;            // 0x0450 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Second;              // 0x0458 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Second_1;            // 0x0460 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_sp2;                            // 0x0468 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_64;                                   // 0x0470 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_95;                                   // 0x0478 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_1150;                                 // 0x0480 (size: 0x8)
    class UCanvasPanel* BuilddingCanvas;                                              // 0x0488 (size: 0x8)
    class UHorizontalBox* HorizontalBox_RemainTime;                                   // 0x0490 (size: 0x8)
    class UCanvasPanel* NonWorkerCanvas;                                              // 0x0498 (size: 0x8)
    class UImage* Progress_Finish;                                                    // 0x04A0 (size: 0x8)
    class UProgressBar* ProgressBar_Progress;                                         // 0x04A8 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_01;                           // 0x04B0 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_02;                           // 0x04B8 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_03;                           // 0x04C0 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_04;                           // 0x04C8 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_05;                           // 0x04D0 (size: 0x8)
    class UCanvasPanel* WorkerPalCanvas;                                              // 0x04D8 (size: 0x8)
    TArray<class UWBP_PalCraftInfo_Pal_C*> workerPalInfoWidgets;                      // 0x04E0 (size: 0x10)
    int32 LastNum;                                                                    // 0x04F0 (size: 0x4)
    bool HasWorker;                                                                   // 0x04F4 (size: 0x1)

    void SetWorkerPal(TArray<class UPalIndividualCharacterSlot*>& Slots);
    void Set Work Amount(double WorkAmount);
    void Change Non Worker Mode(bool isNonWorker);
    void Set Visible Number(ESlateVisibility NewVisibility);
    void Set Second(int32 RemainingSecond);
    void AnmEvent_NonWorker();
    void AnmEvent_DisplayWorker();
    void OnInitialized();
    void ExecuteUbergraph_WBP_IngameProgress(int32 EntryPoint);
}; // Size: 0x4F5

#endif

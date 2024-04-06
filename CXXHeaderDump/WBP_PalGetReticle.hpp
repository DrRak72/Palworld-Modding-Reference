#ifndef UE4SS_SDK_WBP_PalGetReticle_HPP
#define UE4SS_SDK_WBP_PalGetReticle_HPP

class UWBP_PalGetReticle_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_New;                                                  // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Captured;                                             // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Shot_After_Gauge_02;                                  // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_Shot_After_Gauge_01;                                  // 0x0298 (size: 0x8)
    class UWidgetAnimation* Anm_Shot_After_Gauge_00;                                  // 0x02A0 (size: 0x8)
    class UWidgetAnimation* Anm_Loop_After_Gauge;                                     // 0x02A8 (size: 0x8)
    class UWidgetAnimation* AnmClose_Success;                                         // 0x02B0 (size: 0x8)
    class UWidgetAnimation* AnmClose_After;                                           // 0x02B8 (size: 0x8)
    class UWidgetAnimation* AnmOpen_After;                                            // 0x02C0 (size: 0x8)
    class UWidgetAnimation* AnmAfterToBefore;                                         // 0x02C8 (size: 0x8)
    class UWidgetAnimation* Anm_BeforeToAfter;                                        // 0x02D0 (size: 0x8)
    class UWidgetAnimation* Anm_Loop_After;                                           // 0x02D8 (size: 0x8)
    class UWidgetAnimation* Anm_Loop_Before;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* AnmClose_Before;                                          // 0x02E8 (size: 0x8)
    class UWidgetAnimation* AnmOpen_Before;                                           // 0x02F0 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C;                                      // 0x02F8 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_1;                                    // 0x0300 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_2;                                    // 0x0308 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_4;                                    // 0x0310 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_5;                                    // 0x0318 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_115;                                  // 0x0320 (size: 0x8)
    class UCanvasPanel* Canvas_PalCaptureText;                                        // 0x0328 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0330 (size: 0x8)
    class UImage* gauge_00;                                                           // 0x0338 (size: 0x8)
    class UImage* gauge_00_Bloom;                                                     // 0x0340 (size: 0x8)
    class UImage* gauge_01;                                                           // 0x0348 (size: 0x8)
    class UImage* gauge_01_Bloom;                                                     // 0x0350 (size: 0x8)
    class UImage* GaugeBaseFlare;                                                     // 0x0358 (size: 0x8)
    class UCanvasPanel* GetPercentNumDecimal;                                         // 0x0360 (size: 0x8)
    class UImage* Image_CaptureIcon;                                                  // 0x0368 (size: 0x8)
    class UImage* Image_Icon_Shadow;                                                  // 0x0370 (size: 0x8)
    class UOverlay* Overlay_CaptureNum;                                               // 0x0378 (size: 0x8)
    class UBP_PalTextBlock_C* text_Capturerate_SneakBonus;                            // 0x0380 (size: 0x8)
    class UBP_PalTextBlock_C* Text_CurrentCaptureNum;                                 // 0x0388 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxCaptureNum;                                     // 0x0390 (size: 0x8)
    class UBP_PalTextBlock_C* TextCaptured;                                           // 0x0398 (size: 0x8)
    class UWBP_PalGetReticle_Arrow_C* WBP_PalGetReticle_Arrow;                        // 0x03A0 (size: 0x8)
    double targetCaptureRate;                                                         // 0x03A8 (size: 0x8)
    double oldCaptureRate;                                                            // 0x03B0 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> gaugeMaterials;                           // 0x03B8 (size: 0x10)
    class UCurveFloat* displayRateCalcCurve;                                          // 0x03C8 (size: 0x8)
    double rateCalcTimer;                                                             // 0x03D0 (size: 0x8)
    FVector WorldLocation;                                                            // 0x03D8 (size: 0x18)
    bool isRelativeWorldLocation;                                                     // 0x03F0 (size: 0x1)
    TArray<double> RateList;                                                          // 0x03F8 (size: 0x10)
    class UCurveLinearColor* ColorCurve;                                              // 0x0408 (size: 0x8)
    TArray<class UWidgetAnimation*> ShakeAnimArray;                                   // 0x0410 (size: 0x10)
    bool isSneakBonus;                                                                // 0x0420 (size: 0x1)
    FDataTableRowHandle SneakBonusMsgID;                                              // 0x0428 (size: 0x10)
    FDataTableRowHandle CaptureRateMsgID;                                             // 0x0438 (size: 0x10)
    double OriginalInitialCaptureRate;                                                // 0x0448 (size: 0x8)
    FTimerHandle ClearTimerHandle;                                                    // 0x0450 (size: 0x8)

    void DisplayCaptureNum(int32 CaptureCount);
    void OnTimer_RemoveSelf();
    void RestartTick();
    void Update Display Rate(double DeltaTime);
    void SetSneakBonusFlag(bool isBonus);
    void Update Position();
    void SetCaptureRateFromListIndex(int32 Index);
    void SetCaptureRateList(TArray<double>& RateList);
    void SetWorldLocation(FVector Location);
    void Set Display Capture Rate Force(double Rate);
    void SetCaptureRateForce(double CaptureRate);
    void Finished_EC162AC8447DABC2CF5BD2942C8E3A64();
    void AnmEvent_CloseFirstStep();
    void AnmEvent_CloseSecondStep();
    void AnmEvent_FirstToSecond();
    void AnmEvent_SecondToFirst();
    void AnmEvent_OpenFirstStep();
    void AnmEvent_OpenSecondStep();
    void AnmEvent_ResetOpenAnim();
    void AnmEvent_ResetCloseAnim();
    void AnmEvent_CloseAndRemoveSecondStep();
    void AnmEvent_RandomShake();
    void AnmEvent_Captured(bool isDisplay);
    void AnmEvent_New(bool isDisplay);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void Destruct();
    void ExecuteUbergraph_WBP_PalGetReticle(int32 EntryPoint);
}; // Size: 0x458

#endif

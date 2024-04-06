#ifndef UE4SS_SDK_WBP_IngameThermometerEff_HPP
#define UE4SS_SDK_WBP_IngameThermometerEff_HPP

class UWBP_IngameThermometerEff_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_OffToOn;                                              // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Cold2To0;                                             // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Hot2To0;                                              // 0x0290 (size: 0x8)
    class UCanvasPanel* CanvasPanelCold;                                              // 0x0298 (size: 0x8)
    class UCanvasPanel* CanvasPanelHot;                                               // 0x02A0 (size: 0x8)
    class UImage* Cold0;                                                              // 0x02A8 (size: 0x8)
    class UImage* Cold1;                                                              // 0x02B0 (size: 0x8)
    class UImage* Hot;                                                                // 0x02B8 (size: 0x8)
    class UImage* Hot_1;                                                              // 0x02C0 (size: 0x8)
    class UImage* HotSpark;                                                           // 0x02C8 (size: 0x8)
    EPalBodyTemperatureState CachedBodyState;                                         // 0x02D0 (size: 0x1)
    int32 CachedDisplayTemperature;                                                   // 0x02D4 (size: 0x4)
    int32 LimitTenperature;                                                           // 0x02D8 (size: 0x4)
    float EffectAnimeEndTime;                                                         // 0x02DC (size: 0x4)
    bool IsFirstSetup;                                                                // 0x02E0 (size: 0x1)
    double TargetEffectAnimeTime;                                                     // 0x02E8 (size: 0x8)
    double NowEffectAnimtTime;                                                        // 0x02F0 (size: 0x8)
    int32 PreviousDisplayTemperature;                                                 // 0x02F8 (size: 0x4)
    EPalBodyTemperatureState PreviousBodyState;                                       // 0x02FC (size: 0x1)

    void PlayTemperatureSound();
    void Calc Thermomater Anime Target Time(int32 TargetTenperature, double& targetTime);
    void SetTemperantureBodyState(EPalBodyTemperatureState NewBodyState);
    void SetTemperanture(int32 Temperanture);
    void AnmEvent_On();
    void AnmEvent_Off();
    void AnmEvent_Effect(int32 Temperanture);
    void Construct();
    void OnInitialized();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_IngameThermometerEff(int32 EntryPoint);
}; // Size: 0x2FD

#endif

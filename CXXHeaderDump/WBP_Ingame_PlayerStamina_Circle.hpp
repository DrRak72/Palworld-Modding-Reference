#ifndef UE4SS_SDK_WBP_Ingame_PlayerStamina_Circle_HPP
#define UE4SS_SDK_WBP_Ingame_PlayerStamina_Circle_HPP

class UWBP_Ingame_PlayerStamina_Circle_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_StaminaWarning_Loop;                                  // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_StaminaWarning_InToOut;                               // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_1To3;                                                 // 0x0290 (size: 0x8)
    class UCanvasPanel* Canvas_PalStaminaIcon;                                        // 0x0298 (size: 0x8)
    class UCanvasPanel* CanvasPanel_StaminaWarning;                                   // 0x02A0 (size: 0x8)
    class UImage* Gauge_Delay;                                                        // 0x02A8 (size: 0x8)
    class UImage* Gauge_Main;                                                         // 0x02B0 (size: 0x8)
    class UImage* GaugeFlare;                                                         // 0x02B8 (size: 0x8)
    class UImage* GaugeShadow;                                                        // 0x02C0 (size: 0x8)
    class UImage* PalIcon;                                                            // 0x02C8 (size: 0x8)
    class UImage* PalIconB;                                                           // 0x02D0 (size: 0x8)
    class UImage* PalIconBarB;                                                        // 0x02D8 (size: 0x8)
    class UImage* PalIconBarF;                                                        // 0x02E0 (size: 0x8)
    class UImage* PalIconCircleB;                                                     // 0x02E8 (size: 0x8)
    class UImage* PalIconCircleF;                                                     // 0x02F0 (size: 0x8)
    bool isLastOverHeated;                                                            // 0x02F8 (size: 0x1)
    FLinearColor DefaultFillColor;                                                    // 0x02FC (size: 0x10)
    double ChachedSPPercent;                                                          // 0x0310 (size: 0x8)
    class UCanvasPanelSlot* EdgeImageSlot;                                            // 0x0318 (size: 0x8)
    class UCanvasPanelSlot* GaugeSlot;                                                // 0x0320 (size: 0x8)
    class UPalUIDelayGaugeCalculator* DelayGauge;                                     // 0x0328 (size: 0x8)
    class UMaterialInstanceDynamic* MainGaugeMat;                                     // 0x0330 (size: 0x8)
    class UMaterialInstanceDynamic* ShadowGaugeMat;                                   // 0x0338 (size: 0x8)
    class UMaterialInstanceDynamic* FlareGaugeMat;                                    // 0x0340 (size: 0x8)
    FTimerHandle delayGaugeTimer;                                                     // 0x0348 (size: 0x8)
    bool IsActiveDelayGauge;                                                          // 0x0350 (size: 0x1)
    double DelayGaugePercent;                                                         // 0x0358 (size: 0x8)
    class UMaterialInstanceDynamic* DelayGaugeMat;                                    // 0x0360 (size: 0x8)
    double CachedLastTickSP;                                                          // 0x0368 (size: 0x8)
    double StackedDelayGauge;                                                         // 0x0370 (size: 0x8)
    double LastDecreaseDelayGauge;                                                    // 0x0378 (size: 0x8)
    bool IsWarning;                                                                   // 0x0380 (size: 0x1)

    void SetOtomoMarkVisible(bool IsVisible);
    void GetChachedSPPercent(double& Percent);
    void SetPercent(double Percent, bool isOverHeated);
    void Finished_A235210E4CFA5CD880150D987765704F();
    void Finished_06A641D34FCE57CEABA661947727700A();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void ShowNotEnoughStamina();
    void HideNotEnoughStamina();
    void ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle(int32 EntryPoint);
}; // Size: 0x381

#endif

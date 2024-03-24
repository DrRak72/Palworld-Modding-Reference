#ifndef UE4SS_SDK_WBP_PalWorkPowerPlant_HPP
#define UE4SS_SDK_WBP_PalWorkPowerPlant_HPP

class UWBP_PalWorkPowerPlant_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Anm_DetailToSimple;                                       // 0x0410 (size: 0x8)
    class UImage* Arrow;                                                              // 0x0418 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PlantNum;                                          // 0x0420 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal;                              // 0x0428 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_1;                            // 0x0430 (size: 0x8)
    class UWBP_PalCraftInfo_Pal_C* WBP_PalCraftInfo_Pal_2;                            // 0x0438 (size: 0x8)
    class UWBP_PalWorkPowerPlant_Gauge_C* WBP_PalWorkPowerPlant_Gauge;                // 0x0440 (size: 0x8)
    class UWBP_PalWorkPowerPlant_Gauge_C* WBP_PalWorkPowerPlant_Gauge_1;              // 0x0448 (size: 0x8)
    class UWBP_PalWorkPowerPlant_Gauge_C* WBP_PalWorkPowerPlant_Gauge_2;              // 0x0450 (size: 0x8)
    class UWBP_PalWorkPowerPlant_Gauge_C* WBP_PalWorkPowerPlant_Gauge_3;              // 0x0458 (size: 0x8)
    class UWBP_PalWorkPowerPlant_Gauge_C* WBP_PalWorkPowerPlant_Gauge_4;              // 0x0460 (size: 0x8)
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;                                  // 0x0468 (size: 0x8)
    FTimerHandle DisplayCheckTimer;                                                   // 0x0470 (size: 0x8)
    FTimerHandle ChangeCheckTimer;                                                    // 0x0478 (size: 0x8)
    bool isDisplayedDetail;                                                           // 0x0480 (size: 0x1)
    TArray<class UWBP_PalCraftInfo_Pal_C*> Pal Infos;                                 // 0x0488 (size: 0x10)
    class UPalMapObjectGenerateEnergyModel* Model;                                    // 0x0498 (size: 0x8)
    TArray<class UWBP_PalWorkPowerPlant_Gauge_C*> Gauges;                             // 0x04A0 (size: 0x10)
    double PreviousAmout;                                                             // 0x04B0 (size: 0x8)
    double CurrentAmout;                                                              // 0x04B8 (size: 0x8)
    int32 CurrentGauge;                                                               // 0x04C0 (size: 0x4)

    void OnUpdateEnergyStack(class UPalMapObjectGenerateEnergyModel* Model);
    void On Updated Worker Pal(class UPalWorkBase* Work);
    void SetArrow(bool IsIncrease);
    void OnSetup();
    void Construct();
    void DisplayCheck();
    void Destruct();
    void ChangeCheck();
    void ExecuteUbergraph_WBP_PalWorkPowerPlant(int32 EntryPoint);
}; // Size: 0x4C4

#endif

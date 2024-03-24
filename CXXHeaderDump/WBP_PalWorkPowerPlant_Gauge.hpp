#ifndef UE4SS_SDK_WBP_PalWorkPowerPlant_Gauge_HPP
#define UE4SS_SDK_WBP_PalWorkPowerPlant_Gauge_HPP

class UWBP_PalWorkPowerPlant_Gauge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Change;                                               // 0x0280 (size: 0x8)
    class UImage* Gauge;                                                              // 0x0288 (size: 0x8)
    bool Current Changing;                                                            // 0x0290 (size: 0x1)
    bool ShouldShow;                                                                  // 0x0291 (size: 0x1)

    void SetState(bool IsLow, bool Show);
    void AnmEvent_Changing(bool IsChanging);
    void ExecuteUbergraph_WBP_PalWorkPowerPlant_Gauge(int32 EntryPoint);
}; // Size: 0x292

#endif

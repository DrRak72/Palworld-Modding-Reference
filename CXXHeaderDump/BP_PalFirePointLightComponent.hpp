#ifndef UE4SS_SDK_BP_PalFirePointLightComponent_HPP
#define UE4SS_SDK_BP_PalFirePointLightComponent_HPP

class UBP_PalFirePointLightComponent_C : public UPalFirePointLightComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    FFloatInterval BlinkDurationInterval;                                             // 0x0428 (size: 0x8)
    double CurrentBlinkDuration;                                                      // 0x0430 (size: 0x8)
    double ProgressTimeInPeriod;                                                      // 0x0438 (size: 0x8)
    class UCurveFloat* Curve;                                                         // 0x0440 (size: 0x8)
    double MaxIntensityCache;                                                         // 0x0448 (size: 0x8)

    void CacheAndClearIntensity();
    double GetCurrentProgressCurveValue();
    void ResetBlinkDuration();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PalFirePointLightComponent(int32 EntryPoint);
}; // Size: 0x450

#endif

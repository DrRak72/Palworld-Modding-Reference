#ifndef UE4SS_SDK_WBP_CommonCircularGauge_HPP
#define UE4SS_SDK_WBP_CommonCircularGauge_HPP

class UWBP_CommonCircularGauge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Image_81;                                                           // 0x0280 (size: 0x8)
    FPalGaugeInterpolationCalculator GaugeInterpolationCalculator;                    // 0x0288 (size: 0xC)

    void SetTargetValue(double Value);
    void ReflectRateToImage();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_WBP_CommonCircularGauge(int32 EntryPoint);
}; // Size: 0x294

#endif

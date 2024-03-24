#ifndef UE4SS_SDK_WBP_EnemyGauge_SAN_HPP
#define UE4SS_SDK_WBP_EnemyGauge_SAN_HPP

class UWBP_EnemyGauge_SAN_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Gauge;                                                              // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* Text_SanityValue;                                       // 0x0288 (size: 0x8)
    class UMaterialInstanceDynamic* GaugeMaterial;                                    // 0x0290 (size: 0x8)
    FLinearColor OriginalSanityGaugeColor;                                            // 0x0298 (size: 0x10)
    FLinearColor LowSanityGaugeColor;                                                 // 0x02A8 (size: 0x10)

    void SetSanityValue(double NowSanityValue, double MaxSanityValue);
    void OnInitialized();
    void ExecuteUbergraph_WBP_EnemyGauge_SAN(int32 EntryPoint);
}; // Size: 0x2B8

#endif

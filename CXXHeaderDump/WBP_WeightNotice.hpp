#ifndef UE4SS_SDK_WBP_WeightNotice_HPP
#define UE4SS_SDK_WBP_WeightNotice_HPP

class UWBP_WeightNotice_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Full;                                                 // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Normal;                                               // 0x0288 (size: 0x8)
    class UProgressBar* ProgressBar_Weight;                                           // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Weight;                                            // 0x0298 (size: 0x8)
    double CachedWeightRate;                                                          // 0x02A0 (size: 0x8)

    void UpdateVisibility();
    void UpdateWeight(double nowWeight, double maxWeight);
    void ExecuteUbergraph_WBP_WeightNotice(int32 EntryPoint);
}; // Size: 0x2A8

#endif

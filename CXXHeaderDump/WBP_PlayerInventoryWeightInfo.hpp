#ifndef UE4SS_SDK_WBP_PlayerInventoryWeightInfo_HPP
#define UE4SS_SDK_WBP_PlayerInventoryWeightInfo_HPP

class UWBP_PlayerInventoryWeightInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFull;                                         // 0x0280 (size: 0x8)
    class UImage* Image_ParamArrow;                                                   // 0x0288 (size: 0x8)
    class UProgressBar* ProgressBar_ItemWeight;                                       // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxWeight;                                         // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowWeight;                                         // 0x02A0 (size: 0x8)
    float CachedInventoryWeightRate;                                                  // 0x02A8 (size: 0x4)

    void OnUpdateMaxWeightBuff();
    void UpdateWeight_Internal(double nowWeight, double maxWeight, bool ForceSkipAnim);
    void OnUpdateMaxWeight(float maxWeight);
    void OnUpdateWeight(float nowWeight);
    void AnmEvent_ForceNormal();
    void AnmEvent_ForceFull();
    void AnmEvent_FullToNormal();
    void AnmEvent_NormalToFull();
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_PlayerInventoryWeightInfo(int32 EntryPoint);
}; // Size: 0x2AC

#endif

#ifndef UE4SS_SDK_WBP_IngamePlaceName_HPP
#define UE4SS_SDK_WBP_IngamePlaceName_HPP

class UWBP_IngamePlaceName_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0288 (size: 0x8)
    class UImage* Base;                                                               // 0x0290 (size: 0x8)
    class UImage* BaseLineL;                                                          // 0x0298 (size: 0x8)
    class UImage* BaseLineR;                                                          // 0x02A0 (size: 0x8)
    class UImage* Flare;                                                              // 0x02A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RegionName;                                        // 0x02B0 (size: 0x8)
    FTimerHandle CloseTimer;                                                          // 0x02B8 (size: 0x8)
    FName CachedRegionNameID;                                                         // 0x02C0 (size: 0x8)

    void OnCloseTimerEnd();
    void DisplayRegion(FName RegionNameID);
    void AnmEvent_Start();
    void AnmEvent_End();
    void Construct();
    void ExecuteUbergraph_WBP_IngamePlaceName(int32 EntryPoint);
}; // Size: 0x2C8

#endif

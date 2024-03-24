#ifndef UE4SS_SDK_WBP_IngameStatusPoint_HPP
#define UE4SS_SDK_WBP_IngameStatusPoint_HPP

class UWBP_IngameStatusPoint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Base;                                                               // 0x0280 (size: 0x8)
    class UImage* Base_Grd;                                                           // 0x0288 (size: 0x8)
    class UImage* BaseFrame;                                                          // 0x0290 (size: 0x8)
    class UImage* Flare;                                                              // 0x0298 (size: 0x8)
    bool StatusPointUnused;                                                           // 0x02A0 (size: 0x1)
    bool TechnologyPointUnused;                                                       // 0x02A1 (size: 0x1)

    void Construct();
    void SetupStatusPointAttention();
    void UpdateUnusedStatusPoint(int32 UnusedPoint);
    void UpdatedTechnologyPoint(int32 TechnologyPoint);
    void ExecuteUbergraph_WBP_IngameStatusPoint(int32 EntryPoint);
}; // Size: 0x2A2

#endif

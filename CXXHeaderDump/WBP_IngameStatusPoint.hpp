#ifndef UE4SS_SDK_WBP_IngameStatusPoint_HPP
#define UE4SS_SDK_WBP_IngameStatusPoint_HPP

class UWBP_IngameStatusPoint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    bool StatusPointUnused;                                                           // 0x0280 (size: 0x1)
    bool TechnologyPointUnused;                                                       // 0x0281 (size: 0x1)

    void SetupStatusPointAttention();
    void UpdateUnusedStatusPoint(int32 UnusedPoint);
    void UpdatedTechnologyPoint(int32 TechnologyPoint);
    void ExecuteUbergraph_WBP_IngameStatusPoint(int32 EntryPoint);
}; // Size: 0x282

#endif

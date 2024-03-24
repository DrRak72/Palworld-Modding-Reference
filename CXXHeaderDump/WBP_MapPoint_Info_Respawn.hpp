#ifndef UE4SS_SDK_WBP_MapPoint_Info_Respawn_HPP
#define UE4SS_SDK_WBP_MapPoint_Info_Respawn_HPP

class UWBP_MapPoint_Info_Respawn_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Name;                                   // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_Explain;                                 // 0x0288 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Info;                                             // 0x0290 (size: 0x8)
    class UOverlay* Overlay_Guide;                                                    // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_KeyGuide;                                          // 0x02A0 (size: 0x8)
    class UWBP_MapPoint_Info_RespawnData_C* WBP_MapPoint_Info_RespawnData_0;          // 0x02A8 (size: 0x8)
    class UWBP_MapPoint_Info_RespawnData_C* WBP_MapPoint_Info_RespawnData_1;          // 0x02B0 (size: 0x8)
    FDataTableRowHandle RespawnMsgID;                                                 // 0x02B8 (size: 0x10)
    FDataTableRowHandle SpawnMsgId;                                                   // 0x02C8 (size: 0x10)

    void ToggleDisplay(bool ShouldDisplay);
    void SetPointInfo(FName PointId, bool IsInitSelect);
    void AdjustSide(FGeometry TargetGeometry);
    void ExecuteUbergraph_WBP_MapPoint_Info_Respawn(int32 EntryPoint);
}; // Size: 0x2D8

#endif

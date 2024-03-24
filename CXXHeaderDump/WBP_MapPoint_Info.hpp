#ifndef UE4SS_SDK_WBP_MapPoint_Info_HPP
#define UE4SS_SDK_WBP_MapPoint_Info_HPP

class UWBP_MapPoint_Info_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anｍ_In;                                                  // 0x0280 (size: 0x8)
    class UCanvasPanel* Canvas_Boss_Clear;                                            // 0x0288 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Info;                                             // 0x0290 (size: 0x8)
    class UImage* Image_Boss;                                                         // 0x0298 (size: 0x8)
    class UImage* Image_Line;                                                         // 0x02A0 (size: 0x8)
    class UOverlay* Overlay_BossBanner;                                               // 0x02A8 (size: 0x8)
    class UOverlay* Overlay_Guide_Dismantle;                                          // 0x02B0 (size: 0x8)
    class UOverlay* Overlay_Guide_Transport;                                          // 0x02B8 (size: 0x8)
    class UOverlay* Overlay_Name_Lv;                                                  // 0x02C0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LvNum;                                             // 0x02C8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Name;                                              // 0x02D0 (size: 0x8)
    TMap<class EPalBossType, class UTexture2D*> BossBannerImages;                     // 0x02D8 (size: 0x50)
    FDataTableRowHandle BaseCampMsgId;                                                // 0x0328 (size: 0x10)

    void ToggleDisplay(bool ShouldDisplay);
    void SetBossInfo(bool IsDefeated, FPalSpawnerOneTribeInfo SpawnerInfo);
    void SetTowerBossInfo(class APalBossTower* BossTower, bool CanTeleport);
    void SetCampInfo(bool CanTeleport);
    void AdjustSide(FGeometry TargetGeometry);
    void SetFTInfo(FName FTID, bool CanTeleport);
    void ExecuteUbergraph_WBP_MapPoint_Info(int32 EntryPoint);
}; // Size: 0x338

#endif

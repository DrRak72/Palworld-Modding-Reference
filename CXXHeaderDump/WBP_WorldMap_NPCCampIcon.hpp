#ifndef UE4SS_SDK_WBP_WorldMap_NPCCampIcon_HPP
#define UE4SS_SDK_WBP_WorldMap_NPCCampIcon_HPP

class UWBP_WorldMap_NPCCampIcon_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    class UCanvasPanel* Canvas_Arrow;                                                 // 0x0458 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0460 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;                                // 0x0468 (size: 0x8)
    class APalPlayerCharacter* TargetPlayer;                                          // 0x0470 (size: 0x8)
    FPalPlayerInfoForMap cachedMapInfo;                                               // 0x0480 (size: 0x70)

    void GetLocationPosition(FVector& LocationPosition);
    void GetText(FText& Text);
    void SetOverrideIconColor(FLinearColor OverrideColor);
    void SetPlayerStateMapInfo(FPalPlayerInfoForMap mapInfo);
}; // Size: 0x4F0

#endif

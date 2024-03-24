#ifndef UE4SS_SDK_WBP_Map_IconPlayer_HPP
#define UE4SS_SDK_WBP_Map_IconPlayer_HPP

class UWBP_Map_IconPlayer_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0458 (size: 0x8)
    class UImage* Arrow;                                                              // 0x0460 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PlayerName;                                        // 0x0468 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;                                // 0x0470 (size: 0x8)
    FPalPlayerInfoForMap Cached Map Info;                                             // 0x0480 (size: 0x70)

    void UpdateMapInfo(FPalPlayerInfoForMap mapInfo);
    void GetLocationPosition(FVector& LocationPosition);
    void SetIsLocalPlayer(bool IsLocal);
    void SetPlayerStateMapInfo(FPalPlayerInfoForMap mapInfo);
    void BndEvt__WBP_Map_IconPlayer_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconPlayer_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Map_IconPlayer(int32 EntryPoint);
}; // Size: 0x4F0

#endif

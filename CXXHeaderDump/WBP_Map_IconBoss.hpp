#ifndef UE4SS_SDK_WBP_Map_IconBoss_HPP
#define UE4SS_SDK_WBP_Map_IconBoss_HPP

class UWBP_Map_IconBoss_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0458 (size: 0x8)
    class UImage* Image_CheckMark;                                                    // 0x0460 (size: 0x8)
    class UImage* Image_CheckMark_Shadow;                                             // 0x0468 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;                                // 0x0470 (size: 0x8)
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;                  // 0x0478 (size: 0x8)
    bool Is Defeated;                                                                 // 0x0480 (size: 0x1)
    FPalSpawnerOneTribeInfo Spawner Info;                                             // 0x0484 (size: 0x20)

    void SetBoss(bool IsDefeated, FPalSpawnerOneTribeInfo SpawnerInfo);
    void BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Map_IconBoss(int32 EntryPoint);
}; // Size: 0x4A4

#endif

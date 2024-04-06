#ifndef UE4SS_SDK_BP_PalBossNPCMarker_HPP
#define UE4SS_SDK_BP_PalBossNPCMarker_HPP

class UBP_PalBossNPCMarker_C : public USkeletalMeshComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0F80 (size: 0x8)
    FST_BossAnimations Anim List;                                                     // 0x0F88 (size: 0x40)
    bool DoCommonWazaSeparetedAnim?;                                                  // 0x0FC8 (size: 0x1)

    void SetRotation();
    void IsAbsoluteRotation();
    void ReceiveBeginPlay();
    void OnAction(const class UPalActionBase* action);
    void ExecuteUbergraph_BP_PalBossNPCMarker(int32 EntryPoint);
}; // Size: 0xFC9

#endif

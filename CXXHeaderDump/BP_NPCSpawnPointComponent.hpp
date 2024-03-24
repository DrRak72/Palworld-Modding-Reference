#ifndef UE4SS_SDK_BP_NPCSpawnPointComponent_HPP
#define UE4SS_SDK_BP_NPCSpawnPointComponent_HPP

class UBP_NPCSpawnPointComponent_C : public UStaticMeshComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05F0 (size: 0x8)
    FPalDataTableRowName_PalHumanData NPCName;                                        // 0x05F8 (size: 0x8)
    TSubclassOf<class UPalAIActionBase> OverrideDefaultAction;                        // 0x0600 (size: 0x8)
    int32 OverrideLevel;                                                              // 0x0608 (size: 0x4)
    TArray<class UBP_NPCPathWalkPointComponent_1_C*> WalkPointRefarence;              // 0x0610 (size: 0x10)

    void GetOneSpawnInfo(FF_NPCOnePointSpawnInfo& Info);
    void Setup Walk Point Ref();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_NPCSpawnPointComponent(int32 EntryPoint);
}; // Size: 0x620

#endif

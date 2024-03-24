#ifndef UE4SS_SDK_BP_NPCSpawnPointOnly_HPP
#define UE4SS_SDK_BP_NPCSpawnPointOnly_HPP

class ABP_NPCSpawnPointOnly_C : public AActor
{
    class UStaticMeshComponent* StaticMesh;                                           // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    FPalDataTableRowName_PalHumanData NPCName;                                        // 0x02A0 (size: 0x8)
    FPalDataTableRowName_NPCUniqueData UniqueName;                                    // 0x02A8 (size: 0x8)
    TSubclassOf<class ABP_NPCAIController_C> OverrideControllerClass;                 // 0x02B0 (size: 0x8)
    TSubclassOf<class UPalAIActionBase> OverrideDefaultActionClass;                   // 0x02B8 (size: 0x8)
    int32 OverrideLevel;                                                              // 0x02C0 (size: 0x4)

    void GetOneSpawnInfo(FF_NPCOnePointSpawnInfo& Info);
    void Get Spawn One Info(FF_NPCOnePointSpawnInfo& OneInfo);
}; // Size: 0x2C4

#endif

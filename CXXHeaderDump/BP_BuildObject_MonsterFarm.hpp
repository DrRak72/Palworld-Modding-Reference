#ifndef UE4SS_SDK_BP_BuildObject_MonsterFarm_HPP
#define UE4SS_SDK_BP_BuildObject_MonsterFarm_HPP

class ABP_BuildObject_MonsterFarm_C : public APalBuildObjectMonsterFarm
{
    class USphereComponent* WalkableRange;                                            // 0x05A8 (size: 0x8)
    class UStaticMeshComponent* SM_PalFarm;                                           // 0x05B0 (size: 0x8)
    class UPalMapObjectMonsterFarmParameterComponent* MonsterFarmParameter;           // 0x05B8 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05C0 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05C8 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x05D0 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x05D8 (size: 0x8)

}; // Size: 0x5E0

#endif

#ifndef UE4SS_SDK_BP_BuildObject_BreedFarm_HPP
#define UE4SS_SDK_BP_BuildObject_BreedFarm_HPP

class ABP_BuildObject_BreedFarm_C : public APalBuildObjectBreedFarm
{
    class USphereComponent* WalkableRange;                                            // 0x05D0 (size: 0x8)
    class UStaticMeshComponent* SM_MatingStation;                                     // 0x05D8 (size: 0x8)
    class UBP_InteractableBox_C* BP_ChestInteract;                                    // 0x05E0 (size: 0x8)
    class UStaticMeshComponent* SM_FlatChest;                                         // 0x05E8 (size: 0x8)
    class UPalMapObjectBreedFarmParameterComponent* BreedFarmParameter;               // 0x05F0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05F8 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0600 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0608 (size: 0x8)
    class UArrowComponent* SpawnPoint_PalEgg;                                         // 0x0610 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0618 (size: 0x8)

}; // Size: 0x620

#endif

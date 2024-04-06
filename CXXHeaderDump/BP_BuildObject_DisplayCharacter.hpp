#ifndef UE4SS_SDK_BP_BuildObject_DisplayCharacter_HPP
#define UE4SS_SDK_BP_BuildObject_DisplayCharacter_HPP

class ABP_BuildObject_DisplayCharacter_C : public APalBuildObject
{
    class UPalLimitVolumeBoxComponent* PalLimitVolumeBox;                             // 0x0580 (size: 0x8)
    class UPalMapObjectDisplayCharacterParameterComponent* DisplayCharacterParameter; // 0x0588 (size: 0x8)
    class UBoxComponent* CageFloorCollision;                                          // 0x0590 (size: 0x8)
    class UBoxComponent* CageWallCollision4;                                          // 0x0598 (size: 0x8)
    class UBoxComponent* CageWallCollision3;                                          // 0x05A0 (size: 0x8)
    class UBoxComponent* CageWallCollision2;                                          // 0x05A8 (size: 0x8)
    class UBoxComponent* CageCollisionCeiling;                                        // 0x05B0 (size: 0x8)
    class UBoxComponent* CageWallCollision1;                                          // 0x05B8 (size: 0x8)
    class USceneComponent* CageWall;                                                  // 0x05C0 (size: 0x8)
    class UStaticMeshComponent* CageWall4;                                            // 0x05C8 (size: 0x8)
    class UStaticMeshComponent* CageWall1;                                            // 0x05D0 (size: 0x8)
    class UStaticMeshComponent* CageWall2;                                            // 0x05D8 (size: 0x8)
    class UStaticMeshComponent* CageWall3;                                            // 0x05E0 (size: 0x8)
    class UStaticMeshComponent* SM_PalBox_Pillar4;                                    // 0x05E8 (size: 0x8)
    class UStaticMeshComponent* SM_PalBox_Pillar2;                                    // 0x05F0 (size: 0x8)
    class UStaticMeshComponent* SM_PalBox_Pillar1;                                    // 0x05F8 (size: 0x8)
    class UStaticMeshComponent* SM_PalBox_Pillar3;                                    // 0x0600 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0608 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0610 (size: 0x8)
    class USceneComponent* CageMeshes;                                                // 0x0618 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0620 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0628 (size: 0x8)

}; // Size: 0x630

#endif

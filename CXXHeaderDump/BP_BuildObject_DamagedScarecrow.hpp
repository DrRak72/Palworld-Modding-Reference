#ifndef UE4SS_SDK_BP_BuildObject_DamagedScarecrow_HPP
#define UE4SS_SDK_BP_BuildObject_DamagedScarecrow_HPP

class ABP_BuildObject_DamagedScarecrow_C : public APalBuildObject
{
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0580 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0588 (size: 0x8)
    class UStaticMeshComponent* SM_DamagedScarecrow;                                  // 0x0590 (size: 0x8)
    class UBoxComponent* NavmeshCollision;                                            // 0x0598 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x05A0 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05A8 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x05B8 (size: 0x8)

}; // Size: 0x5C0

#endif
#ifndef UE4SS_SDK_BP_BuildObject_Plant01_Plant_HPP
#define UE4SS_SDK_BP_BuildObject_Plant01_Plant_HPP

class ABP_BuildObject_Plant01_Plant_C : public APalBuildObject
{
    class UStaticMeshComponent* SM_PlantSet01;                                        // 0x0580 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0588 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0590 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0598 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x05A0 (size: 0x8)

}; // Size: 0x5A8

#endif

#ifndef UE4SS_SDK_BP_BuildObject_Tire01_Iron_HPP
#define UE4SS_SDK_BP_BuildObject_Tire01_Iron_HPP

class ABP_BuildObject_Tire01_Iron_C : public APalBuildObject
{
    class UStaticMeshComponent* Cube;                                                 // 0x0580 (size: 0x8)
    class UStaticMeshComponent* SM_tire1;                                             // 0x0588 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0590 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0598 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x05A8 (size: 0x8)

}; // Size: 0x5B0

#endif
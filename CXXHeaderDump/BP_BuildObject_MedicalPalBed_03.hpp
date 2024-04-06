#ifndef UE4SS_SDK_BP_BuildObject_MedicalPalBed_03_HPP
#define UE4SS_SDK_BP_BuildObject_MedicalPalBed_03_HPP

class ABP_BuildObject_MedicalPalBed_03_C : public APalBuildObject
{
    class UPalMapObjectMedicalPalBedParameterComponent* MedicalPalBedParameter;       // 0x0580 (size: 0x8)
    class UBP_InteractableCapsule_C* BP_InteractableCapsule;                          // 0x0588 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0590 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0598 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05A0 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x05A8 (size: 0x8)

}; // Size: 0x5B0

#endif

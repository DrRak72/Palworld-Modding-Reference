#ifndef UE4SS_SDK_BP_BuildObject_MedicineFacility_01_HPP
#define UE4SS_SDK_BP_BuildObject_MedicineFacility_01_HPP

class ABP_BuildObject_MedicineFacility_01_C : public APalBuildObject
{
    class UStaticMeshComponent* SM_MedicineFacilityMedieval;                          // 0x0580 (size: 0x8)
    class UPalWorkFacingComponent* WorkFacing;                                        // 0x0588 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0590 (size: 0x8)
    class UPalMapObjectItemConverterParameterComponent* ItemConverterParameter;       // 0x0598 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05A0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05A8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x05B0 (size: 0x8)

}; // Size: 0x5B8

#endif

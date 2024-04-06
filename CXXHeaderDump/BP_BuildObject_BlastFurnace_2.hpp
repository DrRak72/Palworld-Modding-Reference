#ifndef UE4SS_SDK_BP_BuildObject_BlastFurnace_2_HPP
#define UE4SS_SDK_BP_BuildObject_BlastFurnace_2_HPP

class ABP_BuildObject_BlastFurnace_2_C : public APalBuildObject
{
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0580 (size: 0x8)
    class UPalWorkFacingComponent* WorkFacing;                                        // 0x0588 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0590 (size: 0x8)
    class UPalMapObjectItemConverterParameterComponent* ItemConverterParameter;       // 0x0598 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x05A0 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05A8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x05B0 (size: 0x8)

}; // Size: 0x5B8

#endif

#ifndef UE4SS_SDK_BP_BuildObject_SphereFactory_Black_Base_HPP
#define UE4SS_SDK_BP_BuildObject_SphereFactory_Black_Base_HPP

class ABP_BuildObject_SphereFactory_Black_Base_C : public APalBuildObject
{
    class UBP_WorkVisualFX_C* BP_WorkVisualFX4;                                       // 0x0580 (size: 0x8)
    class UPalWorkFacingComponent* WorkFacing4;                                       // 0x0588 (size: 0x8)
    class UStaticMeshComponent* SM_PalSphereFactoryMedieval;                          // 0x0590 (size: 0x8)
    class USceneComponent* StaticMesh;                                                // 0x0598 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x05A0 (size: 0x8)
    class UPalMapObjectItemConverterParameterComponent* ItemConverterParameter;       // 0x05A8 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05B0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05B8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x05C0 (size: 0x8)

}; // Size: 0x5C8

#endif

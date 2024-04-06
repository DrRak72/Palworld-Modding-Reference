#ifndef UE4SS_SDK_BP_BuildObject_CoolerElectric_HPP
#define UE4SS_SDK_BP_BuildObject_CoolerElectric_HPP

class ABP_BuildObject_CoolerElectric_C : public ABP_BuildObject_SwitchHeatSource_C
{
    class UPalWorkFacingComponent* PalWorkFacing1;                                    // 0x0598 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x05A0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05A8 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05B0 (size: 0x8)
    class UStaticMeshComponent* SM_Wall_Stone;                                        // 0x05B8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x05C0 (size: 0x8)

}; // Size: 0x5C8

#endif
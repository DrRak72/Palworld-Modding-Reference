#ifndef UE4SS_SDK_BP_BuildObject_StonePit_HPP
#define UE4SS_SDK_BP_BuildObject_StonePit_HPP

class ABP_BuildObject_StonePit_C : public APalBuildObject
{
    class UPalWorkFacingComponent* PalWorkFacing 1;                                   // 0x0580 (size: 0x8)
    class UPalWorkFacingComponent* PalWorkFacing ;                                    // 0x0588 (size: 0x8)
    class UPalWorkFacingComponent* PalWorkFacing 2;                                   // 0x0590 (size: 0x8)
    class UStaticMeshComponent* SM_StonePit_SM_StonePit_RockC;                        // 0x0598 (size: 0x8)
    class UStaticMeshComponent* SM_StonePit_SM_StonePit_RockB;                        // 0x05A0 (size: 0x8)
    class UStaticMeshComponent* SM_StonePit_SM_StonePit_RockA;                        // 0x05A8 (size: 0x8)
    class UStaticMeshComponent* SM_StonePit_SM_StonePit_Acce;                         // 0x05B0 (size: 0x8)
    class UStaticMeshComponent* SM_StonePit_SM_StonePit_Fence;                        // 0x05B8 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x05C0 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x05C8 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05D0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05D8 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x05E0 (size: 0x8)
    class UPalMapObjectItemSimpleProductParameterComponent* ItemSimpleProductParameter; // 0x05E8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x05F0 (size: 0x8)

}; // Size: 0x5F8

#endif

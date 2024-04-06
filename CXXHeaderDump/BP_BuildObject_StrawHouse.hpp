#ifndef UE4SS_SDK_BP_BuildObject_StrawHouse_HPP
#define UE4SS_SDK_BP_BuildObject_StrawHouse_HPP

class ABP_BuildObject_StrawHouse_C : public APalBuildObject
{
    class UStaticMeshComponent* SM_Stairs_01;                                         // 0x0580 (size: 0x8)
    class UStaticMeshComponent* SM_FloorPlanks_02;                                    // 0x0588 (size: 0x8)
    class UStaticMeshComponent* SM_FloorPlanks_03;                                    // 0x0590 (size: 0x8)
    class UStaticMeshComponent* SM_FloorPlanks_04;                                    // 0x0598 (size: 0x8)
    class UStaticMeshComponent* SM_RoofPart_06_SideCap;                               // 0x05A0 (size: 0x8)
    class UStaticMeshComponent* SM_RoofPart_04;                                       // 0x05A8 (size: 0x8)
    class UStaticMeshComponent* SM_FloorPlanks_01;                                    // 0x05B0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05B8 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x05C0 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05C8 (size: 0x8)
    class UBoxComponent* VirtualMeshCollision;                                        // 0x05D0 (size: 0x8)
    class UStaticMeshComponent* SM_RoofPart_03;                                       // 0x05D8 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x05E0 (size: 0x8)
    class USceneComponent* SharedRoot;                                                // 0x05E8 (size: 0x8)

}; // Size: 0x5F0

#endif

#ifndef UE4SS_SDK_BP_BuildObject_FarmBlockV2_Berries_HPP
#define UE4SS_SDK_BP_BuildObject_FarmBlockV2_Berries_HPP

class ABP_BuildObject_FarmBlockV2_Berries_C : public APalBuildObjectFarmBlockV2
{
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x05A8 (size: 0x8)
    class UBoxComponent* VirtualMeshCollision;                                        // 0x05B0 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x05B8 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05C0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05C8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x05D0 (size: 0x8)

}; // Size: 0x5D8

#endif

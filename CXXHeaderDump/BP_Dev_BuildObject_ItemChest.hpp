#ifndef UE4SS_SDK_BP_Dev_BuildObject_ItemChest_HPP
#define UE4SS_SDK_BP_Dev_BuildObject_ItemChest_HPP

class ABP_Dev_BuildObject_ItemChest_C : public APalBuildObject
{
    class UPalMapObjectItemChestParameterComponent* PalMapObjectItemChestParameter;   // 0x0580 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0588 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0590 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0598 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05A0 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x05A8 (size: 0x8)

}; // Size: 0x5B0

#endif

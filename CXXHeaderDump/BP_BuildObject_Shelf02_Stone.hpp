#ifndef UE4SS_SDK_BP_BuildObject_Shelf02_Stone_HPP
#define UE4SS_SDK_BP_BuildObject_Shelf02_Stone_HPP

class ABP_BuildObject_Shelf02_Stone_C : public APalBuildObject
{
    class UPalMapObjectItemChestParameterComponent* PalMapObjectItemChestParameter;   // 0x0580 (size: 0x8)
    class UStaticMeshComponent* SM_wardrobe_door_01;                                  // 0x0588 (size: 0x8)
    class UStaticMeshComponent* SM_wardrobe_door_02;                                  // 0x0590 (size: 0x8)
    class UStaticMeshComponent* SM_wardrobe;                                          // 0x0598 (size: 0x8)
    class USceneComponent* Meshs;                                                     // 0x05A0 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x05A8 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05B0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05B8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x05C0 (size: 0x8)

}; // Size: 0x5C8

#endif

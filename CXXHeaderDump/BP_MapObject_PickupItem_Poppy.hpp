#ifndef UE4SS_SDK_BP_MapObject_PickupItem_Poppy_HPP
#define UE4SS_SDK_BP_MapObject_PickupItem_Poppy_HPP

class ABP_MapObject_PickupItem_Poppy_C : public ABP_MapObject_PickupItem_Base_C
{
    class UStaticMeshComponent* StaticMesh3;                                          // 0x03E0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x03E8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x03F0 (size: 0x8)
    class USceneComponent* IndicatorOrigin;                                           // 0x03F8 (size: 0x8)
    class UPalMapObjectPickupItemParameterComponent* PalMapObjectPickupItemParameter; // 0x0400 (size: 0x8)

    bool IsShowOutlineInReticleTargetting();
}; // Size: 0x408

#endif

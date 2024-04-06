#ifndef UE4SS_SDK_BP_MapObject_PickupItem_CaveMushroom_HPP
#define UE4SS_SDK_BP_MapObject_PickupItem_CaveMushroom_HPP

class ABP_MapObject_PickupItem_CaveMushroom_C : public ABP_MapObject_PickupItem_Base_C
{
    class UPointLightComponent* PointLight;                                           // 0x03E0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x03E8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x03F0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x03F8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0400 (size: 0x8)
    class USceneComponent* IndicatorOrigin;                                           // 0x0408 (size: 0x8)
    class UPalMapObjectPickupItemParameterComponent* PalMapObjectPickupItemParameter; // 0x0410 (size: 0x8)

}; // Size: 0x418

#endif

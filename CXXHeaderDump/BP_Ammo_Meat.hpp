#ifndef UE4SS_SDK_BP_Ammo_Meat_HPP
#define UE4SS_SDK_BP_Ammo_Meat_HPP

class ABP_Ammo_Meat_C : public AActor
{
    class UStaticMeshComponent* StaticMesh;                                           // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    FTransform Ammo Reloading Transform;                                              // 0x02A0 (size: 0x60)

    void SetTranformForReload(FTransform& AmmoReloadingTransform);
    void UserConstructionScript();
}; // Size: 0x300

#endif

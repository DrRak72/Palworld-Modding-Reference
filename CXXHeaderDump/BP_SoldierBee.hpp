#ifndef UE4SS_SDK_BP_SoldierBee_HPP
#define UE4SS_SDK_BP_SoldierBee_HPP

class ABP_SoldierBee_C : public ABP_MonsterBase_C
{
    class UPalFlyMeshHeightCtrlComponent* PalFlyMeshHeightCtrl;                       // 0x0A10 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere2;                          // 0x0A18 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere1;                          // 0x0A20 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0A28 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0A30 (size: 0x8)
    class USkeletalMeshComponent* weapon;                                             // 0x0A38 (size: 0x8)

    class USkeletalMeshComponent* GetHandAttachMesh();
}; // Size: 0xA40

#endif
#ifndef UE4SS_SDK_BP_FlowerDinosaur_HPP
#define UE4SS_SDK_BP_FlowerDinosaur_HPP

class ABP_FlowerDinosaur_C : public ABP_MonsterBase_C
{
    class USkeletalMeshComponent* weapon;                                             // 0x0A10 (size: 0x8)
    class UPalSpeedCollisionComponent* PalSpeedCollision;                             // 0x0A18 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule1;                        // 0x0A20 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0A28 (size: 0x8)
    class UPalRideMarkerComponent* PalRideMarker;                                     // 0x0A30 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere1;                          // 0x0A38 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0A40 (size: 0x8)

    class USkeletalMeshComponent* GetHandAttachMesh();
}; // Size: 0xA48

#endif

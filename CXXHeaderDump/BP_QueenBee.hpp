#ifndef UE4SS_SDK_BP_QueenBee_HPP
#define UE4SS_SDK_BP_QueenBee_HPP

class ABP_QueenBee_C : public ABP_MonsterBase_C
{
    class UPalFlyMeshHeightCtrlComponent* PalFlyMeshHeightCtrl;                       // 0x0A10 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule7;                        // 0x0A18 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule6;                        // 0x0A20 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule5;                        // 0x0A28 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule4;                        // 0x0A30 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule3;                        // 0x0A38 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule2;                        // 0x0A40 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule1;                        // 0x0A48 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0A50 (size: 0x8)
    class USkeletalMeshComponent* weapon;                                             // 0x0A58 (size: 0x8)

    class USkeletalMeshComponent* GetHandAttachMesh();
}; // Size: 0xA60

#endif

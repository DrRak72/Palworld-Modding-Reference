#ifndef UE4SS_SDK_BP_Baphomet_HPP
#define UE4SS_SDK_BP_Baphomet_HPP

class ABP_Baphomet_C : public ABP_MonsterBase_C
{
    class UPalSpeedCollisionComponent* PalSpeedCollision;                             // 0x0A10 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule5;                        // 0x0A18 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule4;                        // 0x0A20 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule3;                        // 0x0A28 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule2;                        // 0x0A30 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule1;                        // 0x0A38 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0A40 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0A48 (size: 0x8)

}; // Size: 0xA50

#endif

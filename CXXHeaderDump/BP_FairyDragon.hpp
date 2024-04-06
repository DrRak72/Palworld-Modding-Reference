#ifndef UE4SS_SDK_BP_FairyDragon_HPP
#define UE4SS_SDK_BP_FairyDragon_HPP

class ABP_FairyDragon_C : public ABP_MonsterBase_C
{
    class UBP_PalRideMarkerSaddle_C* BP_PalRideMarkerSaddle;                          // 0x0A10 (size: 0x8)
    class UPalSpeedCollisionComponent* PalSpeedCollision;                             // 0x0A18 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule4;                        // 0x0A20 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule3;                        // 0x0A28 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule2;                        // 0x0A30 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule1;                        // 0x0A38 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0A40 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0A48 (size: 0x8)

}; // Size: 0xA50

#endif

#ifndef UE4SS_SDK_BP_GrassPanda_HPP
#define UE4SS_SDK_BP_GrassPanda_HPP

class ABP_GrassPanda_C : public ABP_MonsterBase_C
{
    class UPalSpeedCollisionComponent* PalSpeedCollision;                             // 0x0A10 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere1;                          // 0x0A18 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0A20 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule1;                        // 0x0A28 (size: 0x8)
    class UPalShooterComponent* PalShooter;                                           // 0x0A30 (size: 0x8)
    class UPalRideMarkerComponent* PalRideMarker;                                     // 0x0A38 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0A40 (size: 0x8)

}; // Size: 0xA48

#endif

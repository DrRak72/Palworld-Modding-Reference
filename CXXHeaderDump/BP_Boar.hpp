#ifndef UE4SS_SDK_BP_Boar_HPP
#define UE4SS_SDK_BP_Boar_HPP

class ABP_Boar_C : public ABP_MonsterBase_C
{
    class UBP_PalRideMarkerBiggerHorse_C* BP_PalRideMarkerBiggerHorse;                // 0x0A10 (size: 0x8)
    class UPalSpeedCollisionComponent* PalSpeedCollision;                             // 0x0A18 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0A20 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0A28 (size: 0x8)

}; // Size: 0xA30

#endif

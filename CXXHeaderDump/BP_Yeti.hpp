#ifndef UE4SS_SDK_BP_Yeti_HPP
#define UE4SS_SDK_BP_Yeti_HPP

class ABP_Yeti_C : public ABP_MonsterBase_C
{
    class UBP_PalRideMarkerSit_C* BP_PalRideMarkerSit;                                // 0x0A10 (size: 0x8)
    class UPalSpeedCollisionComponent* PalSpeedCollision;                             // 0x0A18 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere2;                          // 0x0A20 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere1;                          // 0x0A28 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0A30 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0A38 (size: 0x8)

}; // Size: 0xA40

#endif

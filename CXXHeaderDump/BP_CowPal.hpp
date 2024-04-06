#ifndef UE4SS_SDK_BP_CowPal_HPP
#define UE4SS_SDK_BP_CowPal_HPP

class ABP_CowPal_C : public ABP_MonsterBase_C
{
    class UPalSpeedCollisionComponent* PalSpeedCollision;                             // 0x0A10 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule1;                        // 0x0A18 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0A20 (size: 0x8)

}; // Size: 0xA28

#endif

#ifndef UE4SS_SDK_BP_DrillGame_HPP
#define UE4SS_SDK_BP_DrillGame_HPP

class ABP_DrillGame_C : public ABP_MonsterBase_C
{
    class UPalSpeedCollisionComponent* PalSpeedCollision;                             // 0x0A10 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0A18 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0A20 (size: 0x8)

}; // Size: 0xA28

#endif

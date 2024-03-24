#ifndef UE4SS_SDK_BP_DrillGame_HPP
#define UE4SS_SDK_BP_DrillGame_HPP

class ABP_DrillGame_C : public ABP_MonsterBase_C
{
    class UPalSpeedCollisionComponent* PalSpeedCollision;                             // 0x08F0 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x08F8 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0900 (size: 0x8)

}; // Size: 0x908

#endif

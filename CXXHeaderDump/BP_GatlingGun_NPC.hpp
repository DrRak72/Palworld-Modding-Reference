#ifndef UE4SS_SDK_BP_GatlingGun_NPC_HPP
#define UE4SS_SDK_BP_GatlingGun_NPC_HPP

class ABP_GatlingGun_NPC_C : public ABP_GatlingGun_C
{

    FTransform GetLeftHandTransform();
    int32 GetNPCWeaponDamage();
    int32 GetWeaponDamage();
}; // Size: 0x588

#endif

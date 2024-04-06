#ifndef UE4SS_SDK_BP_RocketLauncher_NPC_HPP
#define UE4SS_SDK_BP_RocketLauncher_NPC_HPP

class ABP_RocketLauncher_NPC_C : public ABP_RocketLauncher_C
{

    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    int32 GetNPCWeaponDamage();
    int32 GetWeaponDamage();
}; // Size: 0x5A0

#endif

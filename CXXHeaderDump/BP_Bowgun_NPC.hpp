#ifndef UE4SS_SDK_BP_Bowgun_NPC_HPP
#define UE4SS_SDK_BP_Bowgun_NPC_HPP

class ABP_Bowgun_NPC_C : public ABP_Bowgun_C
{

    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    int32 GetNPCWeaponDamage();
    int32 GetWeaponDamage();
}; // Size: 0x599

#endif

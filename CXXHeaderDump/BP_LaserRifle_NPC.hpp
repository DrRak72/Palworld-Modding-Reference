#ifndef UE4SS_SDK_BP_LaserRifle_NPC_HPP
#define UE4SS_SDK_BP_LaserRifle_NPC_HPP

class ABP_LaserRifle_NPC_C : public ABP_LaserRifle_C
{

    float GetDefaultBlurAngle();
    int32 GetNPCWeaponDamage();
    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    int32 GetWeaponDamage();
}; // Size: 0x589

#endif

#ifndef UE4SS_SDK_BP_PV_NormalRifle_HPP
#define UE4SS_SDK_BP_PV_NormalRifle_HPP

class ABP_PV_NormalRifle_C : public ABP_NormalRifle_C
{

    void OnShoot();
    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
}; // Size: 0x5A0

#endif

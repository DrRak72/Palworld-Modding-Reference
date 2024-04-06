#ifndef UE4SS_SDK_BP_LaserRifle_HPP
#define UE4SS_SDK_BP_LaserRifle_HPP

class ABP_LaserRifle_C : public ABP_HandGun_C
{

    void PlayReloadAnimation();
    void OnShoot();
    void GetMuzzleEffect(class UNiagaraSystem*& NewParam);
    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
}; // Size: 0x589

#endif

#ifndef UE4SS_SDK_BP_StatusDebugGunBase_HPP
#define UE4SS_SDK_BP_StatusDebugGunBase_HPP

class ABP_StatusDebugGunBase_C : public ABP_HandGun_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0590 (size: 0x8)
    EPalAdditionalEffectType AddEffect;                                               // 0x0598 (size: 0x1)

    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    void OnCreatedBullet(class APalBullet* Bullet);
    void ExecuteUbergraph_BP_StatusDebugGunBase(int32 EntryPoint);
}; // Size: 0x599

#endif

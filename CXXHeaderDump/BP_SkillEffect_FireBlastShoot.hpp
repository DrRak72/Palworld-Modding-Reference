#ifndef UE4SS_SDK_BP_SkillEffect_FireBlastShoot_HPP
#define UE4SS_SDK_BP_SkillEffect_FireBlastShoot_HPP

class ABP_SkillEffect_FireBlastShoot_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x03C8 (size: 0x8)
    TSubclassOf<class APalSkillEffectBase> bulletClass;                               // 0x03D0 (size: 0x8)
    double ShootIntervalTime;                                                         // 0x03D8 (size: 0x8)
    FTimerHandle TimeHandle;                                                          // 0x03E0 (size: 0x8)

    void OnDestroyed_イベント_0(class AActor* DestroyedActor);
    void ReceiveBeginPlay();
    void OnSystemFinished_イベント_0(class UParticleSystemComponent* PSystem);
    void Shoot();
    void ExecuteUbergraph_BP_SkillEffect_FireBlastShoot(int32 EntryPoint);
}; // Size: 0x3E8

#endif

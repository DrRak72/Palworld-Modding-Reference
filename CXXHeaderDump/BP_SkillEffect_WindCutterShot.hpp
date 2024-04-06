#ifndef UE4SS_SDK_BP_SkillEffect_WindCutterShot_HPP
#define UE4SS_SDK_BP_SkillEffect_WindCutterShot_HPP

class ABP_SkillEffect_WindCutterShot_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* NS_WindCutterShoot;                                      // 0x03C8 (size: 0x8)
    double ShootIntervalTime;                                                         // 0x03D0 (size: 0x8)
    FTimerHandle TimeHandle;                                                          // 0x03D8 (size: 0x8)
    TSubclassOf<class AActor> bulletClass;                                            // 0x03E0 (size: 0x8)
    FBP_SkillEffect_WindCutterShot_COnSpawnBulletDelegate OnSpawnBulletDelegate;      // 0x03E8 (size: 0x10)
    void OnSpawnBulletDelegate(class AActor* Bullet);

    void SetTargetLocation(FVector TargetLocation);
    void ReceiveBeginPlay();
    void Shoot();
    void OnDestroyed_イベント_0(class AActor* DestroyedActor);
    void OnSystemFinished(class UNiagaraComponent* PSystem);
    void ExecuteUbergraph_BP_SkillEffect_WindCutterShot(int32 EntryPoint);
    void OnSpawnBulletDelegate__DelegateSignature(class AActor* Bullet);
}; // Size: 0x3F8

#endif

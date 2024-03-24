#ifndef UE4SS_SDK_BP_NormalStationaryLauncherBase_HPP
#define UE4SS_SDK_BP_NormalStationaryLauncherBase_HPP

class ABP_NormalStationaryLauncherBase_C : public APalStationaryWeaponBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0538 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0540 (size: 0x8)
    FTimerHandle ShootingHandle;                                                      // 0x0548 (size: 0x8)
    TSoftObjectPtr<APalCharacter> OwnerCharacter;                                     // 0x0550 (size: 0x30)
    int32 ShootNum;                                                                   // 0x0580 (size: 0x4)
    bool EnableLauncher;                                                              // 0x0584 (size: 0x1)
    class AActor* TargetActor;                                                        // 0x0588 (size: 0x8)
    double PullTriggerTimer;                                                          // 0x0590 (size: 0x8)
    bool IsRapidFIre;                                                                 // 0x0598 (size: 0x1)

    void OnRep_EnableLauncher();
    float GetAttackableDistance();
    void GetMuzzleRotateLocation(FVector& RotateLocation);
    void GetRotateMuzzleRef(class UStaticMeshComponent*& Muzzle);
    float GetAttackableAngle();
    void GetPullTriggerInterval(double& PullTriggerInterval);
    void GetShootNumMax(int32& ShootNumMax);
    int32 GetWeaponDamage();
    class APalCharacter* GetOwnerCharacter();
    void SetOwnerCharacter(TSoftObjectPtr<APalCharacter> OwnerCharacter);
    void SetAttackTarget(class AActor* Target);
    void SetEnableLauncher(bool Enable);
    void RotatePitchToTarget(FVector TargetLocation, double LerpSpeed, double DeltaTime);
    void GeyEjectionPortTransform(FTransform& Transform);
    void Is UseEjectionPort(bool& isUse);
    void OnSpawnedBullet(class APalBullet* Bullet);
    void GetShotAnimation();
    void OnShoot();
    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    void GetBlurAngle(double& Angle);
    void CalcShootBlurRotator(double BlurAngle, FRotator& BlurRotator);
    void GetMuzzleEffectParticle(class UParticleSystem*& Particle System);
    void GetMuzzleEffect(class UNiagaraSystem*& NewParam);
    void GetMuzzleLocation(FVector& MuzzleLocation);
    void GetMuzzleRotator(FRotator& Rotator);
    void GetInitializeInterval(double& Time);
    void GetShootInterval(double& Time);
    void EjectAmmo();
    void ShootBulletInternal();
    void PlayMuzzleEffectParticle();
    void PlayShootEffect();
    void ShootBullet();
    void OnPullTrigger();
    void OnReleaseTrigger();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_NormalStationaryLauncherBase(int32 EntryPoint);
}; // Size: 0x599

#endif

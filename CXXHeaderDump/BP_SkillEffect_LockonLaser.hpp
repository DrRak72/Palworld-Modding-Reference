#ifndef UE4SS_SDK_BP_SkillEffect_LockonLaser_HPP
#define UE4SS_SDK_BP_SkillEffect_LockonLaser_HPP

class ABP_SkillEffect_LockonLaser_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class USphereComponent* DummyBulletCollision;                                     // 0x03C8 (size: 0x8)
    class UNiagaraComponent* LaserSightEffect;                                        // 0x03D0 (size: 0x8)
    class UNiagaraComponent* ChargeEffect;                                            // 0x03D8 (size: 0x8)
    double LockOnTime;                                                                // 0x03E0 (size: 0x8)
    double ShootDelay;                                                                // 0x03E8 (size: 0x8)
    FVector preLocation;                                                              // 0x03F0 (size: 0x18)
    bool IsHitTarget;                                                                 // 0x0408 (size: 0x1)
    double FollowLagRate;                                                             // 0x0410 (size: 0x8)
    bool IsInitialized;                                                               // 0x0418 (size: 0x1)
    class AActor* ActionTarget;                                                       // 0x0420 (size: 0x8)
    FVector TargetLocation;                                                           // 0x0428 (size: 0x18)
    double LaserOffsetHeight;                                                         // 0x0440 (size: 0x8)
    FName flagName;                                                                   // 0x0448 (size: 0x8)
    FBP_SkillEffect_LockonLaser_COnLockPalRotateEvent OnLockPalRotateEvent;           // 0x0450 (size: 0x10)
    void OnLockPalRotateEvent(bool IsLock);

    void GetIgnoreActors(TArray<class AActor*>& IgnoreActors);
    void SetPalRotateState(bool isDisable);
    void CalcBulletVelocity(FVector TargetLocation, double BulletSpeed, FVector& Velocity);
    void SetActionTargetIfNeeded(class AActor* HitActor);
    void GetLaserSightLocation(FVector& TargetLocation);
    void UpdateLaserSight();
    void GetHitLocation(FVector& HitLocation, bool& IsHitTarget);
    void InitEffects();
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveTick(float DeltaSeconds);
    void OnEndLockOn();
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_LockonLaser(int32 EntryPoint);
    void OnLockPalRotateEvent__DelegateSignature(bool IsLock);
}; // Size: 0x460

#endif

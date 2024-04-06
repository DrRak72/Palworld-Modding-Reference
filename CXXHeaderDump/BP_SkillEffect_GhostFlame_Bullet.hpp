#ifndef UE4SS_SDK_BP_SkillEffect_GhostFlame_Bullet_HPP
#define UE4SS_SDK_BP_SkillEffect_GhostFlame_Bullet_HPP

class ABP_SkillEffect_GhostFlame_Bullet_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class USphereComponent* SlowDownCollision;                                        // 0x03C8 (size: 0x8)
    class USphereComponent* DamageCollision;                                          // 0x03D0 (size: 0x8)
    class UNiagaraComponent* GhostFlame;                                              // 0x03D8 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03E0 (size: 0x8)
    float RandSpeed;                                                                  // 0x03E8 (size: 0x4)
    double InitialSpeed;                                                              // 0x03F0 (size: 0x8)
    double HomingSpeed;                                                               // 0x03F8 (size: 0x8)
    double Gravity;                                                                   // 0x0400 (size: 0x8)
    double MaxHoming;                                                                 // 0x0408 (size: 0x8)
    double AddHoming;                                                                 // 0x0410 (size: 0x8)
    bool StartDeceleration;                                                           // 0x0418 (size: 0x1)
    double DecelerationEasingSpeed;                                                   // 0x0420 (size: 0x8)
    float AccumulatedTime;                                                            // 0x0428 (size: 0x4)
    float DamageCollisionLifeTime;                                                    // 0x042C (size: 0x4)
    class UNiagaraSystem* BurstEffect;                                                // 0x0430 (size: 0x8)
    float MaxEffectDuration;                                                          // 0x0438 (size: 0x4)

    void InitShot();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnHitDelegate_イベント(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount);
    void BndEvt__BP_SkillEffect_GhostFlame_Bullet_SlowDownCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_GhostFlame_Bullet(int32 EntryPoint);
}; // Size: 0x43C

#endif

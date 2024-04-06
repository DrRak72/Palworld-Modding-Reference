#ifndef UE4SS_SDK_BP_SkillEffect_IceMissile_Bullet_HPP
#define UE4SS_SDK_BP_SkillEffect_IceMissile_Bullet_HPP

class ABP_SkillEffect_IceMissile_Bullet_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* NS_IceMissileBullet;                                     // 0x03C8 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03D0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03D8 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x03E0 (size: 0x8)
    double UpTime;                                                                    // 0x03E8 (size: 0x8)
    double TurnAroundInterval;                                                        // 0x03F0 (size: 0x8)
    bool IsTurnAround;                                                                // 0x03F8 (size: 0x1)
    double Timer;                                                                     // 0x0400 (size: 0x8)
    double HomingOffDistance;                                                         // 0x0408 (size: 0x8)
    bool IsHoming;                                                                    // 0x0410 (size: 0x1)
    float HomingPowerRate;                                                            // 0x0414 (size: 0x4)
    class ABP_PredictedTarget_C* Predicted Target;                                    // 0x0418 (size: 0x8)

    FVector GetCurrentTargetLocation();
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveTick(float DeltaSeconds);
    void StartTurnAround();
    void TurnAround(double DeltaTime);
    void OnHitDelegate_イベント_0(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount);
    void BndEvt__BP_EnergyShotBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__BP_EnergyShotBullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void OnBreakAction();
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_IceMissile_Bullet(int32 EntryPoint);
}; // Size: 0x420

#endif

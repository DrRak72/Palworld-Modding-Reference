#ifndef UE4SS_SDK_BP_SkillEffect_Unique_RobinHood_Snipe_Arrow_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_RobinHood_Snipe_Arrow_HPP

class ABP_SkillEffect_Unique_RobinHood_Snipe_Arrow_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* NS_UniqueSkill_RobinHood_Snipe_Trail;                    // 0x03C8 (size: 0x8)
    class UCapsuleComponent* CapsuleCollision;                                        // 0x03D0 (size: 0x8)
    class USkeletalMeshComponent* SK_RobinHood_arrow_Bullet;                          // 0x03D8 (size: 0x8)
    double ArrowSpeed;                                                                // 0x03E0 (size: 0x8)
    double ArrowLifeTime;                                                             // 0x03E8 (size: 0x8)
    bool IsShoot;                                                                     // 0x03F0 (size: 0x1)
    double HomingSpeed;                                                               // 0x03F8 (size: 0x8)
    double HomingStopDistance;                                                        // 0x0400 (size: 0x8)
    bool IsHoming;                                                                    // 0x0408 (size: 0x1)

    void CheckStopHoming();
    void RotateToTarget(double DeltaTime);
    void MoveToTarget(double DeltaTime);
    void ReceiveBeginPlay();
    void BndEvt__BP_SkillEffect_SpreadPulse_Bullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void FadeOutEffect(double DeltaSecond);
    void OnHitGround();
    void OnReachLifeTime();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_SkillEffect_SpreadPulse_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_SkillEffect_Unique_RobinHood_Snipe_Arrow(int32 EntryPoint);
}; // Size: 0x409

#endif

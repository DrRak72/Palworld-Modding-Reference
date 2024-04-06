#ifndef UE4SS_SDK_BP_SkillEffect_Funnel_ShadowBall_HPP
#define UE4SS_SDK_BP_SkillEffect_Funnel_ShadowBall_HPP

class ABP_SkillEffect_Funnel_ShadowBall_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* ball;                                                    // 0x03C8 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03D0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03D8 (size: 0x8)
    double ReadyTime;                                                                 // 0x03E0 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x03E8 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__BP_SkillEffectShadowBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void FadeOutEffect(double DeltaSecond);
    void BndEvt__BP_SkillEffectShadowBall_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void ExecuteUbergraph_BP_SkillEffect_Funnel_ShadowBall(int32 EntryPoint);
}; // Size: 0x3F0

#endif

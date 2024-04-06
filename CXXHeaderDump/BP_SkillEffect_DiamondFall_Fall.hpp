#ifndef UE4SS_SDK_BP_SkillEffect_DiamondFall_Fall_HPP
#define UE4SS_SDK_BP_SkillEffect_DiamondFall_Fall_HPP

class ABP_SkillEffect_DiamondFall_Fall_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x03C8 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03D0 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x03D8 (size: 0x8)
    float FallingPrepareTime;                                                         // 0x03E0 (size: 0x4)
    class UNiagaraComponent* sign;                                                    // 0x03E8 (size: 0x8)
    double MinScale;                                                                  // 0x03F0 (size: 0x8)
    double MaxScale;                                                                  // 0x03F8 (size: 0x8)
    double CurrentScale;                                                              // 0x0400 (size: 0x8)

    void FadeOutEffect(double DeltaSecond);
    void BndEvt__BP_SkillEffect_SeedMine_Seed_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__BP_EnergyShotBullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void OnBreakAction();
    void ReceiveBeginPlay();
    void EnableFall();
    void ExecuteUbergraph_BP_SkillEffect_DiamondFall_Fall(int32 EntryPoint);
}; // Size: 0x408

#endif

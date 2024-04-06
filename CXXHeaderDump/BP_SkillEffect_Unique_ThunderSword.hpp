#ifndef UE4SS_SDK_BP_SkillEffect_Unique_ThunderSword_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_ThunderSword_HPP

class ABP_SkillEffect_Unique_ThunderSword_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class USkeletalMeshComponent* ThunderTrident;                                     // 0x03C8 (size: 0x8)
    class UNiagaraComponent* NiagaraEffect;                                           // 0x03D0 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x03D8 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03E0 (size: 0x8)
    int32 WaveCount;                                                                  // 0x03E8 (size: 0x4)
    double WaveLifeSpan;                                                              // 0x03F0 (size: 0x8)
    double BlastLifeSpan;                                                             // 0x03F8 (size: 0x8)
    double WaveFadeOut;                                                               // 0x0400 (size: 0x8)
    double BlastFadeOut;                                                              // 0x0408 (size: 0x8)
    bool ShouldSpawnWave;                                                             // 0x0410 (size: 0x1)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_SkillEffectShadowBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void FadeOutEffect(double DeltaSecond);
    void OnHitGround();
    void Launch(FVector TargetLocation);
    void BndEvt__BP_SkillEffect_WindCutter_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword(int32 EntryPoint);
}; // Size: 0x411

#endif

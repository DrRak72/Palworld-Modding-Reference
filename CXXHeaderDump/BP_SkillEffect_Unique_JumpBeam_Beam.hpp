#ifndef UE4SS_SDK_BP_SkillEffect_Unique_JumpBeam_Beam_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_JumpBeam_Beam_HPP

class ABP_SkillEffect_Unique_JumpBeam_Beam_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03C8 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x03D0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x03D8 (size: 0x8)
    double EffectDuration;                                                            // 0x03E0 (size: 0x8)
    float InitialRotateInterpSpeed;                                                   // 0x03E8 (size: 0x4)
    double RotateAttenuation;                                                         // 0x03F0 (size: 0x8)
    double RotateSpeed;                                                               // 0x03F8 (size: 0x8)
    FBP_SkillEffect_Unique_JumpBeam_Beam_COnHit OnHit;                                // 0x0400 (size: 0x10)
    void OnHit(FVector Location);
    bool EnableHoming;                                                                // 0x0410 (size: 0x1)
    double DisableHomingDistance;                                                     // 0x0418 (size: 0x8)
    bool EnableGravity;                                                               // 0x0420 (size: 0x1)
    float GravityRatio;                                                               // 0x0424 (size: 0x4)
    double EnableGravityHeight;                                                       // 0x0428 (size: 0x8)

    FVector GetCurrentTargetLocation();
    void GetShouldActiveGravity(bool& Active);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void BndEvt__BP_SkillEffect_FlareArrow_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void FadeOutEffect(double DeltaSecond);
    void EndBeam();
    void ExecuteUbergraph_BP_SkillEffect_Unique_JumpBeam_Beam(int32 EntryPoint);
    void OnHit__DelegateSignature(FVector Location);
}; // Size: 0x430

#endif

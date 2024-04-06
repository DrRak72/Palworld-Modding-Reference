#ifndef UE4SS_SDK_BP_SkillEffect_Unique_NightmareFlame_HommingFlame_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_NightmareFlame_HommingFlame_HPP

class ABP_SkillEffect_Unique_NightmareFlame_HommingFlame_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class USphereComponent* DamageCollision;                                          // 0x03C8 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x03D0 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03D8 (size: 0x8)
    double InitialSpeed;                                                              // 0x03E0 (size: 0x8)
    float EffectDuration;                                                             // 0x03E8 (size: 0x4)
    double RotateAttenuation;                                                         // 0x03F0 (size: 0x8)
    double RotateSpeed;                                                               // 0x03F8 (size: 0x8)

    FVector GetCurrentTargetLocation();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void FadeOutEffect(double DeltaSecond);
    void BndEvt__BP_SkillEffect_FlareArrow_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__BP_SkillEffect_FlareArrow_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void StartFade();
    void ExecuteUbergraph_BP_SkillEffect_Unique_NightmareFlame_HommingFlame(int32 EntryPoint);
}; // Size: 0x400

#endif

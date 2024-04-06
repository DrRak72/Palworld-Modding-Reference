#ifndef UE4SS_SDK_BP_SkillEffect_BubbleShot_Bullet_HPP
#define UE4SS_SDK_BP_SkillEffect_BubbleShot_Bullet_HPP

class ABP_SkillEffect_BubbleShot_Bullet_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class USphereComponent* AttackCollision;                                          // 0x03C8 (size: 0x8)
    class USphereComponent* DisableHomingTrigger;                                     // 0x03D0 (size: 0x8)
    class UNiagaraComponent* BubbleShotEffect;                                        // 0x03D8 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03E0 (size: 0x8)
    float RandSpeed;                                                                  // 0x03E8 (size: 0x4)
    double MinSpeed;                                                                  // 0x03F0 (size: 0x8)
    double Gravity;                                                                   // 0x03F8 (size: 0x8)
    double Max Homing;                                                                // 0x0400 (size: 0x8)
    double Add Homing;                                                                // 0x0408 (size: 0x8)
    float EffectDuration;                                                             // 0x0410 (size: 0x4)

    void GetHomingEndDot(double& Dot);
    void SetRandomValueIntoNiagaraVariable(class UNiagaraComponent* NiagaraComp);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_SkillEffect_BubbleShot_Bullet_DisableHomingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnHitGround();
    void FadeOutEffect(double DeltaSecond);
    void BndEvt__BP_SkillEffect_BubbleShot_Bullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void BndEvt__BP_SkillEffect_BubbleShot_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void カスタムイベント();
    void BndEvt__BP_SkillEffect_BubbleShot_Bullet_BubbleShotEffect_K2Node_ComponentBoundEvent_2_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem);
    void ExecuteUbergraph_BP_SkillEffect_BubbleShot_Bullet(int32 EntryPoint);
}; // Size: 0x414

#endif

#ifndef UE4SS_SDK_BP_SkillEffect_LockonLaser_Bullet_HPP
#define UE4SS_SDK_BP_SkillEffect_LockonLaser_Bullet_HPP

class ABP_SkillEffect_LockonLaser_Bullet_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UCapsuleComponent* BulletCollision;                                         // 0x03C8 (size: 0x8)
    class UNiagaraComponent* BulletEffect;                                            // 0x03D0 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03D8 (size: 0x8)
    class UNiagaraSystem* ImpactEffect;                                               // 0x03E0 (size: 0x8)

    void IsValidHit(class AActor* SelfActor, class AActor* OtherHitActor, bool& IsHit);
    void ReceiveBeginPlay();
    void FadeOutEffect(double DeltaSecond);
    void BndEvt__BP_SkillEffect_LockonLaser_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_SkillEffect_LockonLaser_Bullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void ExecuteUbergraph_BP_SkillEffect_LockonLaser_Bullet(int32 EntryPoint);
}; // Size: 0x3E8

#endif

#ifndef UE4SS_SDK_BP_SkillEffect_PowerShot_HPP
#define UE4SS_SDK_BP_SkillEffect_PowerShot_HPP

class ABP_SkillEffect_PowerShot_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* Bullet;                                                  // 0x03C8 (size: 0x8)
    class UCapsuleComponent* AttackCollision;                                         // 0x03D0 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03D8 (size: 0x8)
    double HomingOffDistance;                                                         // 0x03E0 (size: 0x8)
    bool IsHoming;                                                                    // 0x03E8 (size: 0x1)

    void CancelShoot();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ShootBullet(FVector TargetLocation);
    void BndEvt__BP_SkillEffect_PowerShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__BP_SkillEffect_PowerShot_AttackFilter_K2Node_ComponentBoundEvent_2_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_PowerShot(int32 EntryPoint);
}; // Size: 0x3E9

#endif

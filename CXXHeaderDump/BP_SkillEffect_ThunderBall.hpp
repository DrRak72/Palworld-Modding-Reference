#ifndef UE4SS_SDK_BP_SkillEffect_ThunderBall_HPP
#define UE4SS_SDK_BP_SkillEffect_ThunderBall_HPP

class ABP_SkillEffect_ThunderBall_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03C8 (size: 0x8)
    class USphereComponent* DamageCollisionSphere;                                    // 0x03D0 (size: 0x8)
    class UNiagaraComponent* P_Pentagon01;                                            // 0x03D8 (size: 0x8)
    float SkillDuration;                                                              // 0x03E0 (size: 0x4)

    void ReceiveBeginPlay();
    void BndEvt__BP_SkillEffect_ThunderBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__BP_SkillEffect_ThunderBall_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void ReachEndOfLife();
    void ExecuteUbergraph_BP_SkillEffect_ThunderBall(int32 EntryPoint);
}; // Size: 0x3E4

#endif

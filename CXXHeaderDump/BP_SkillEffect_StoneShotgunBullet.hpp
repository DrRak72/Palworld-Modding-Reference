#ifndef UE4SS_SDK_BP_SkillEffect_StoneShotgunBullet_HPP
#define UE4SS_SDK_BP_SkillEffect_StoneShotgunBullet_HPP

class ABP_SkillEffect_StoneShotgunBullet_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x03C8 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x03D0 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03D8 (size: 0x8)

    void SetRandomValueIntoNiagaraVariable(class UNiagaraComponent* NiagaraComp);
    void ReceiveBeginPlay();
    void BndEvt__BP_SkillEffect_StoneShotgunBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_StoneShotgunBullet(int32 EntryPoint);
}; // Size: 0x3E0

#endif

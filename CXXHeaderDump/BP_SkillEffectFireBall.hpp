#ifndef UE4SS_SDK_BP_SkillEffectFireBall_HPP
#define UE4SS_SDK_BP_SkillEffectFireBall_HPP

class ABP_SkillEffectFireBall_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* aura;                                                    // 0x03C8 (size: 0x8)
    class UNiagaraComponent* ball;                                                    // 0x03D0 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03D8 (size: 0x8)
    class USphereComponent* BallDamage;                                               // 0x03E0 (size: 0x8)
    double ReadyTime;                                                                 // 0x03E8 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x03F0 (size: 0x8)
    class UNiagaraSystem* ImpactEffect;                                               // 0x03F8 (size: 0x8)
    FVector ImpactPoint;                                                              // 0x0400 (size: 0x18)

    void ReceiveBeginPlay();
    void BndEvt__BP_SkillEffectFireBall_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__BP_SkillEffectFireBall_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_SkillEffectFireBall_BallDamage_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_SkillEffectFireBall(int32 EntryPoint);
}; // Size: 0x418

#endif

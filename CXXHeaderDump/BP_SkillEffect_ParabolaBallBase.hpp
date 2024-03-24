#ifndef UE4SS_SDK_BP_SkillEffect_ParabolaBallBase_HPP
#define UE4SS_SDK_BP_SkillEffect_ParabolaBallBase_HPP

class ABP_SkillEffect_ParabolaBallBase_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03C8 (size: 0x8)
    class USphereComponent* ExplosionSphere;                                          // 0x03D0 (size: 0x8)
    class UNiagaraComponent* Charge;                                                  // 0x03D8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03E0 (size: 0x8)
    class UNiagaraComponent* ball;                                                    // 0x03E8 (size: 0x8)
    class UNiagaraSystem* Const_ImpactEffect;                                         // 0x03F0 (size: 0x8)
    class UAkAudioEvent* Const_AK_Charge;                                             // 0x03F8 (size: 0x8)
    class UAkAudioEvent* Const_AK_Loop;                                               // 0x0400 (size: 0x8)
    class UAkAudioEvent* Const_AK_Cast;                                               // 0x0408 (size: 0x8)
    class UAkAudioEvent* Const_AK_Hit;                                                // 0x0410 (size: 0x8)

    void ReceiveBeginPlay();
    void ShootBullet(FVector TargetLocation);
    void CancelShoot();
    void BndEvt__BP_SkillEffect_PowerBall_1_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void EndCollision();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__BP_SkillEffect_ParabolaBallBase_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_SkillEffect_ParabolaBallBase(int32 EntryPoint);
}; // Size: 0x418

#endif

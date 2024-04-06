#ifndef UE4SS_SDK_BP_SkillEffect_DarkCanon_HPP
#define UE4SS_SDK_BP_SkillEffect_DarkCanon_HPP

class ABP_SkillEffect_DarkCanon_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UCapsuleComponent* ImpactTrigger;                                           // 0x03C8 (size: 0x8)
    class UNiagaraComponent* MainEffect;                                              // 0x03D0 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03D8 (size: 0x8)
    float MaxEffectDuration;                                                          // 0x03E0 (size: 0x4)
    FName DefaultCollisionProfile;                                                    // 0x03E4 (size: 0x8)
    float StopBulletDelayTime;                                                        // 0x03EC (size: 0x4)

    void ReceiveBeginPlay();
    void BndEvt__BP_SkillEffect_WaterBall_ImpactCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void FadeOutEffect(double DeltaSecond);
    void Explosion();
    void EnableCollision();
    void StopBullet();
    void BndEvt__BP_SkillEffect_DragonCanon_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_SkillEffect_DarkCanon(int32 EntryPoint);
}; // Size: 0x3F0

#endif

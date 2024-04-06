#ifndef UE4SS_SDK_BP_SkillEffect_Unique_BlackGriffon_Laser_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_BlackGriffon_Laser_HPP

class ABP_SkillEffect_Unique_BlackGriffon_Laser_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03C8 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03D0 (size: 0x8)
    class UNiagaraComponent* NiagaraEffect;                                           // 0x03D8 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void FadeOutEffect(double DeltaSecond);
    void ReceiveBeginPlay();
    void BndEvt__BP_SkillEffect_WindCutter_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void OnHitGround();
    void EffectTimeout();
    void SetLifeTimeTimer(double LifeTime);
    void ExecuteUbergraph_BP_SkillEffect_Unique_BlackGriffon_Laser(int32 EntryPoint);
}; // Size: 0x3E0

#endif

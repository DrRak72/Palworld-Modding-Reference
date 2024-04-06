#ifndef UE4SS_SDK_BP_SkillEffectDragonMeteorBullet_HPP
#define UE4SS_SDK_BP_SkillEffectDragonMeteorBullet_HPP

class ABP_SkillEffectDragonMeteorBullet_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* SpawnEffect;                                             // 0x03C8 (size: 0x8)
    class UNiagaraComponent* ImpactEffect;                                            // 0x03D0 (size: 0x8)
    class UNiagaraComponent* MainEffect;                                              // 0x03D8 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x03E0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03E8 (size: 0x8)
    class USphereComponent* ImpactCollison;                                           // 0x03F0 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03F8 (size: 0x8)
    double ReadyTime;                                                                 // 0x0400 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x0408 (size: 0x8)

    void ReceiveBeginPlay();
    void OnHitDelegate_イベント_0(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount);
    void BndEvt__BP_SkillEffectDragonMeteorBullet_ImpactCollison_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_SkillEffectDragonMeteorBullet_MovementSphereRoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_SkillEffectDragonMeteorBullet(int32 EntryPoint);
}; // Size: 0x410

#endif

#ifndef UE4SS_SDK_BP_SkillEffect_FireSeed_Bullet_HPP
#define UE4SS_SDK_BP_SkillEffect_FireSeed_Bullet_HPP

class ABP_SkillEffect_FireSeed_Bullet_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class USphereComponent* Collision_0;                                              // 0x03C8 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement_0;                         // 0x03D0 (size: 0x8)
    class UNiagaraComponent* NS_FireSeed_Bullet;                                      // 0x03D8 (size: 0x8)
    float RandSpeed;                                                                  // 0x03E0 (size: 0x4)
    double Gravity;                                                                   // 0x03E8 (size: 0x8)
    double MinSpeed;                                                                  // 0x03F0 (size: 0x8)
    FRandomStream RandomStream_0;                                                     // 0x03F8 (size: 0x8)
    float EffectLifeTime;                                                             // 0x0400 (size: 0x4)

    void ReceiveBeginPlay();
    void OnHitDelegate_イベント(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount);
    void FadeOutEffect(double DeltaSecond);
    void BndEvt__BP_SkillEffect_FireSeed_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_SkillEffect_FireSeed_Bullet(int32 EntryPoint);
}; // Size: 0x404

#endif

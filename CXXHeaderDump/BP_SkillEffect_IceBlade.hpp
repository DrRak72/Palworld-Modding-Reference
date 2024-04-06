#ifndef UE4SS_SDK_BP_SkillEffect_IceBlade_HPP
#define UE4SS_SDK_BP_SkillEffect_IceBlade_HPP

class ABP_SkillEffect_IceBlade_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* NS_CommonSkill_IceBlade;                                 // 0x03C8 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03D0 (size: 0x8)
    TArray<class USphereComponent*> Collisions;                                       // 0x03D8 (size: 0x10)
    double AlignRadius;                                                               // 0x03E8 (size: 0x8)
    int32 Width;                                                                      // 0x03F0 (size: 0x4)
    double SphereSize;                                                                // 0x03F8 (size: 0x8)
    double EffectDuration;                                                            // 0x0400 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__BP_SkillEffect_WindCutter_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void OnHitGround();
    void EffectTimeout();
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_IceBlade(int32 EntryPoint);
}; // Size: 0x408

#endif

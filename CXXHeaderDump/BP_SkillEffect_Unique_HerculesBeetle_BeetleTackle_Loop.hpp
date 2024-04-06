#ifndef UE4SS_SDK_BP_SkillEffect_Unique_HerculesBeetle_BeetleTackle_Loop_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_HerculesBeetle_BeetleTackle_Loop_HPP

class ABP_SkillEffect_Unique_HerculesBeetle_BeetleTackle_Loop_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class USphereComponent* DisableMovementTrigger;                                   // 0x03C8 (size: 0x8)
    class UNiagaraComponent* NiagaraEffect;                                           // 0x03D0 (size: 0x8)
    FBP_SkillEffect_Unique_HerculesBeetle_BeetleTackle_Loop_COnHitDisableMovement OnHitDisableMovement; // 0x03D8 (size: 0x10)
    void OnHitDisableMovement(class AActor* HitActor);

    void FadeOutEffect(double DeltaSecond);
    void OnEndAction();
    void BndEvt__BP_SkillEffect_BubbleShot_Bullet_DisableHomingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_SkillEffect_Unique_HerculesBeetle_BeetleTackle_Loop(int32 EntryPoint);
    void OnHitDisableMovement__DelegateSignature(class AActor* HitActor);
}; // Size: 0x3E8

#endif

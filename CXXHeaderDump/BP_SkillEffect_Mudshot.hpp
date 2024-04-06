#ifndef UE4SS_SDK_BP_SkillEffect_Mudshot_HPP
#define UE4SS_SDK_BP_SkillEffect_Mudshot_HPP

class ABP_SkillEffect_Mudshot_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x03C8 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x03D0 (size: 0x8)

    void ReceiveBeginPlay();
    void OnHitDelegate_イベント_0(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount);
    void BndEvt__BP_SkillEffect_Mudshot_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void BndEvt__BP_SkillEffect_Mudshot_MovementSphereRoot_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_Mudshot(int32 EntryPoint);
}; // Size: 0x3D8

#endif

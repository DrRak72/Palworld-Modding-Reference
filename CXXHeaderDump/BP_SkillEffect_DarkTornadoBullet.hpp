#ifndef UE4SS_SDK_BP_SkillEffect_DarkTornadoBullet_HPP
#define UE4SS_SDK_BP_SkillEffect_DarkTornadoBullet_HPP

class ABP_SkillEffect_DarkTornadoBullet_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x03C8 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x03D0 (size: 0x8)
    FVector2D TargetLocation2D;                                                       // 0x03D8 (size: 0x10)
    FVector2D NormalizedDirection2D;                                                  // 0x03E8 (size: 0x10)
    double RotationDegree;                                                            // 0x03F8 (size: 0x8)
    double Speed;                                                                     // 0x0400 (size: 0x8)
    double DotThreshold;                                                              // 0x0408 (size: 0x8)
    float EffectDuration;                                                             // 0x0410 (size: 0x4)

    void SetRandomValueIntoNiagaraVariable(class UNiagaraComponent* NiagaraComp);
    void ReceiveBeginPlay();
    void EndProcess();
    void FadeOutEffect(double DeltaSecond);
    void BndEvt__BP_SkillEffect_SandTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void ExecuteUbergraph_BP_SkillEffect_DarkTornadoBullet(int32 EntryPoint);
}; // Size: 0x414

#endif

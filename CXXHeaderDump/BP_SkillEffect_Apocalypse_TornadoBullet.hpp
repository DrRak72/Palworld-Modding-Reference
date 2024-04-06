#ifndef UE4SS_SDK_BP_SkillEffect_Apocalypse_TornadoBullet_HPP
#define UE4SS_SDK_BP_SkillEffect_Apocalypse_TornadoBullet_HPP

class ABP_SkillEffect_Apocalypse_TornadoBullet_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* OmenEffect;                                              // 0x03C8 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x03D0 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x03D8 (size: 0x8)
    FVector2D TargetLocation2D;                                                       // 0x03E0 (size: 0x10)
    FVector2D NormalizedDirection2D;                                                  // 0x03F0 (size: 0x10)
    double RotationDegree;                                                            // 0x0400 (size: 0x8)
    double Speed;                                                                     // 0x0408 (size: 0x8)
    double DotThreshold;                                                              // 0x0410 (size: 0x8)
    float EffectDuration;                                                             // 0x0418 (size: 0x4)
    FTimerHandle Timer;                                                               // 0x0420 (size: 0x8)

    void Explosion();
    void ReceiveBeginPlay();
    void EndProcess();
    void FadeOutEffect(double DeltaSecond);
    void BndEvt__BP_SkillEffect_SandTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void OnExplosion();
    void ExecuteUbergraph_BP_SkillEffect_Apocalypse_TornadoBullet(int32 EntryPoint);
}; // Size: 0x428

#endif

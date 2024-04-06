#ifndef UE4SS_SDK_BP_SkillEffect_Unique_SheepBall_Roll_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_SheepBall_Roll_HPP

class ABP_SkillEffect_Unique_SheepBall_Roll_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class USphereComponent* SphereCollision;                                          // 0x03C8 (size: 0x8)
    class UNiagaraComponent* DustEffect;                                              // 0x03D0 (size: 0x8)
    class UNiagaraComponent* RollEffect;                                              // 0x03D8 (size: 0x8)
    FBP_SkillEffect_Unique_SheepBall_Roll_COnHitAttack_Roll OnHitAttack_Roll;         // 0x03E0 (size: 0x10)
    void OnHitAttack_Roll();
    TMap<class FName, class UNiagaraComponent*> SkillEffectMap;                       // 0x03F0 (size: 0x50)
    double RollEffectOffsetYaw;                                                       // 0x0440 (size: 0x8)
    double OwnerHeight;                                                               // 0x0448 (size: 0x8)

    void SetOwnerCapsuleHeight(double Height);
    void GetRollEffectLocation(FVector& Location);
    void ActivateEffect(FName EffectName);
    void InitializeEffects();
    void ReceiveBeginPlay();
    void FadeOutEffect(double DeltaSecond);
    void ReceiveTick(float DeltaSeconds);
    void HitAttack(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void ExecuteUbergraph_BP_SkillEffect_Unique_SheepBall_Roll(int32 EntryPoint);
    void OnHitAttack_Roll__DelegateSignature();
}; // Size: 0x450

#endif

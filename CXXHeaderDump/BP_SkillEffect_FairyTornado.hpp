#ifndef UE4SS_SDK_BP_SkillEffect_FairyTornado_HPP
#define UE4SS_SDK_BP_SkillEffect_FairyTornado_HPP

class ABP_SkillEffect_FairyTornado_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UCapsuleComponent* TornadoCollision;                                        // 0x03C8 (size: 0x8)
    class UNiagaraComponent* TornadoEffect;                                           // 0x03D0 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03D8 (size: 0x8)
    double TornadoLifeTime;                                                           // 0x03E0 (size: 0x8)
    double LimitDistance;                                                             // 0x03E8 (size: 0x8)
    bool IsLimited;                                                                   // 0x03F0 (size: 0x1)
    double MoveSpeed;                                                                 // 0x03F8 (size: 0x8)

    void SetRandomValueIntoNiagaraVariable(class UNiagaraComponent* NiagaraComp);
    void GetMoveSpeed(double& MoveSpeed);
    void GetTargetDistance(double& Distance);
    void GetTargetRotation(FRotator& TargetRotation);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void EndEffect();
    void FadeOutEffect(double DeltaSecond);
    void BndEvt__BP_SkillEffect_FairyTornado_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void ExecuteUbergraph_BP_SkillEffect_FairyTornado(int32 EntryPoint);
}; // Size: 0x400

#endif

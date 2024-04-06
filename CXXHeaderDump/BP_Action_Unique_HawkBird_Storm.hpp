#ifndef UE4SS_SDK_BP_Action_Unique_HawkBird_Storm_HPP
#define UE4SS_SDK_BP_Action_Unique_HawkBird_Storm_HPP

class UBP_Action_Unique_HawkBird_Storm_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    TArray<class UNiagaraComponent*> CurrentEffect;                                   // 0x0218 (size: 0x10)
    class UNiagaraComponent* OmenEffect;                                              // 0x0228 (size: 0x8)
    FSkillEffectSpawnParameter SkillEffectSpawnParam;                                 // 0x0230 (size: 0x38)
    class UNiagaraSystem* StartEffect;                                                // 0x0268 (size: 0x8)
    class UNiagaraSystem* LoopEffect;                                                 // 0x0270 (size: 0x8)
    float ShootDelay;                                                                 // 0x0278 (size: 0x4)
    double FadeOutTimer;                                                              // 0x0280 (size: 0x8)
    double FadeOutTime;                                                               // 0x0288 (size: 0x8)
    class UCurveFloat* FadeOutCurve;                                                  // 0x0290 (size: 0x8)
    class UNiagaraComponent* LoopingEffect;                                           // 0x0298 (size: 0x8)
    class UCurveFloat* FadeOutCurve01;                                                // 0x02A0 (size: 0x8)
    class UBP_UniqueSkillModule_Tackle_C* TackleModule;                               // 0x02A8 (size: 0x8)

    void SetEffectRotationYaw();
    void OnBreakAction();
    void CallEffect(const FSkillEffectSpawnParameter& Parameter);
    void PlayEffectByTime();
    void FadeOutEffect(double DeltaTime);
    void OnCompletedEndMontage();
    void OnMontageNotify(class UAnimMontage* Montage, FName NotifyName);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Unique_HawkBird_Storm(int32 EntryPoint);
}; // Size: 0x2B0

#endif

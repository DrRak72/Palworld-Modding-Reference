#ifndef UE4SS_SDK_BP_UniqueSkillModule_Tackle_HPP
#define UE4SS_SDK_BP_UniqueSkillModule_Tackle_HPP

class UBP_UniqueSkillModule_Tackle_C : public UPalUniqueSkillModule
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)
    class UAnimMontage* StartAnimMontage;                                             // 0x0040 (size: 0x8)
    class UAnimMontage* LoopAnimMontage;                                              // 0x0048 (size: 0x8)
    class UAnimMontage* EndAnimMontage;                                               // 0x0050 (size: 0x8)
    double AttackTime;                                                                // 0x0058 (size: 0x8)
    double YawMultiply;                                                               // 0x0060 (size: 0x8)
    double EndBrakeTime;                                                              // 0x0068 (size: 0x8)
    double EndBrakeTimer;                                                             // 0x0070 (size: 0x8)
    double MaxSpeedMultiply;                                                          // 0x0078 (size: 0x8)
    double MinSpeedMultiply;                                                          // 0x0080 (size: 0x8)
    double TackleHomingRate;                                                          // 0x0088 (size: 0x8)
    bool StopUpdateYaw;                                                               // 0x0090 (size: 0x1)
    FTimerHandle AttackTimerHandle;                                                   // 0x0098 (size: 0x8)
    FName flagName;                                                                   // 0x00A0 (size: 0x8)
    TSubclassOf<class ABP_SkillEffectBase_C> StartSkillEffectClass;                   // 0x00A8 (size: 0x8)
    TSubclassOf<class ABP_SkillEffectBase_C> LoopSkillEffectClass;                    // 0x00B0 (size: 0x8)
    class ABP_SkillEffectBase_C* LoopSkillEffect;                                     // 0x00B8 (size: 0x8)
    FBP_UniqueSkillModule_Tackle_COnSpawnedLoopEffect OnSpawnedLoopEffect;            // 0x00C0 (size: 0x10)
    void OnSpawnedLoopEffect(class ABP_SkillEffectBase_C* LoopEffect);
    TEnumAsByte<EAction_Unique_Tackle::Type> State;                                   // 0x00D0 (size: 0x1)
    FBP_UniqueSkillModule_Tackle_COnEndAttackDelegate OnEndAttackDelegate;            // 0x00D8 (size: 0x10)
    void OnEndAttackDelegate();
    FBP_UniqueSkillModule_Tackle_COnMontageNotifyDelegate OnMontageNotifyDelegate;    // 0x00E8 (size: 0x10)
    void OnMontageNotifyDelegate(class UAnimMontage* Montage, FName NotifyName);
    FBP_UniqueSkillModule_Tackle_COnCompletedEndMontageDelegate OnCompletedEndMontageDelegate; // 0x00F8 (size: 0x10)
    void OnCompletedEndMontageDelegate();
    double StartHomingRate;                                                           // 0x0108 (size: 0x8)
    bool IsTackleHoming;                                                              // 0x0110 (size: 0x1)
    bool IsEffectSpawnOnGround;                                                       // 0x0111 (size: 0x1)

    void SetFlagName(FName flagName);
    void GetCurrentState(TEnumAsByte<EAction_Unique_Tackle::Type>& State);
    void UpdateYaw();
    void UpdateVelocity();
    void TerminateMotion();
    void ControllInput(double DeltaTime);
    void OnNotifyEnd_26A182C445668EE79190E6AE1D795120(FName NotifyName);
    void OnNotifyBegin_26A182C445668EE79190E6AE1D795120(FName NotifyName);
    void OnInterrupted_26A182C445668EE79190E6AE1D795120(FName NotifyName);
    void OnBlendOut_26A182C445668EE79190E6AE1D795120(FName NotifyName);
    void OnCompleted_26A182C445668EE79190E6AE1D795120(FName NotifyName);
    void OnBeginModule();
    void OnEndModule();
    void TickModule(float DeltaTime);
    void OnEndAttack();
    void OnMontageNotifyEvent(class UAnimMontage* Montage, FName NotifyName);
    void OnStartTossin();
    void ExecuteUbergraph_BP_UniqueSkillModule_Tackle(int32 EntryPoint);
    void OnCompletedEndMontageDelegate__DelegateSignature();
    void OnMontageNotifyDelegate__DelegateSignature(class UAnimMontage* Montage, FName NotifyName);
    void OnEndAttackDelegate__DelegateSignature();
    void OnSpawnedLoopEffect__DelegateSignature(class ABP_SkillEffectBase_C* LoopEffect);
}; // Size: 0x112

#endif

#ifndef UE4SS_SDK_BP_Action_Unique_DrillGame_ShellAttack_HPP
#define UE4SS_SDK_BP_Action_Unique_DrillGame_ShellAttack_HPP

class UBP_Action_Unique_DrillGame_ShellAttack_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UAnimMontage* Montage_Start;                                                // 0x0218 (size: 0x8)
    class UAnimMontage* Montage_Loop;                                                 // 0x0220 (size: 0x8)
    class UAnimMontage* Montage_End;                                                  // 0x0228 (size: 0x8)
    double Const_LoopTime;                                                            // 0x0230 (size: 0x8)
    double Const_MoveSpeed;                                                           // 0x0238 (size: 0x8)
    bool IsMoving;                                                                    // 0x0240 (size: 0x1)
    class ABP_SkillEffect_Drillgame_SpiningShell_C* EffectActor;                      // 0x0248 (size: 0x8)
    bool IsStopedEffect;                                                              // 0x0250 (size: 0x1)

    void StopEffect();
    void Update Homing(double DeltaTime);
    void UpdateVelocity();
    void OnNotifyEnd_71FE55394B5DDD888F8F24808EF7F4A0(FName NotifyName);
    void OnNotifyBegin_71FE55394B5DDD888F8F24808EF7F4A0(FName NotifyName);
    void OnInterrupted_71FE55394B5DDD888F8F24808EF7F4A0(FName NotifyName);
    void OnBlendOut_71FE55394B5DDD888F8F24808EF7F4A0(FName NotifyName);
    void OnCompleted_71FE55394B5DDD888F8F24808EF7F4A0(FName NotifyName);
    void OnNotifyEnd_EB41D5C64ACAAB32CCB5E0AB83AE0627(FName NotifyName);
    void OnNotifyBegin_EB41D5C64ACAAB32CCB5E0AB83AE0627(FName NotifyName);
    void OnInterrupted_EB41D5C64ACAAB32CCB5E0AB83AE0627(FName NotifyName);
    void OnBlendOut_EB41D5C64ACAAB32CCB5E0AB83AE0627(FName NotifyName);
    void OnCompleted_EB41D5C64ACAAB32CCB5E0AB83AE0627(FName NotifyName);
    void OnNotifyEnd_907ED8204A5826D4217EA39CE48664E5(FName NotifyName);
    void OnNotifyBegin_907ED8204A5826D4217EA39CE48664E5(FName NotifyName);
    void OnInterrupted_907ED8204A5826D4217EA39CE48664E5(FName NotifyName);
    void OnBlendOut_907ED8204A5826D4217EA39CE48664E5(FName NotifyName);
    void OnCompleted_907ED8204A5826D4217EA39CE48664E5(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void OnLoopEnd();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_Action_Unique_DrillGame_ShellAttack(int32 EntryPoint);
}; // Size: 0x251

#endif

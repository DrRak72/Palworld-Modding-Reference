#ifndef UE4SS_SDK_BP_Action_Unique_SheepBall_Roll_HPP
#define UE4SS_SDK_BP_Action_Unique_SheepBall_Roll_HPP

class UBP_Action_Unique_SheepBall_Roll_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    TEnumAsByte<EAction_SheepBall_Roll::Type> State;                                  // 0x0218 (size: 0x1)
    double AttackTime;                                                                // 0x0220 (size: 0x8)
    class UPalAttackFilter* AttackFilter;                                             // 0x0228 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x0230 (size: 0x8)
    double HomingSpeed;                                                               // 0x0238 (size: 0x8)
    TArray<FSkillEffectSpawnParameter> SkillEffectSpawnParameters_0;                  // 0x0240 (size: 0x10)
    TArray<class APalSkillEffectBase*> SkillEffects;                                  // 0x0250 (size: 0x10)
    double StunValue;                                                                 // 0x0260 (size: 0x8)
    double MoveSpeed;                                                                 // 0x0268 (size: 0x8)
    bool HasActionBroken;                                                             // 0x0270 (size: 0x1)

    void SetMovementSetting(bool MoveEnable);
    void Break Action();
    void StunActionCharacter();
    void ActivateEffect(FName EffectName);
    void CreateSkillEffects(class ABP_SkillEffect_Unique_SheepBall_Roll_C*& SkillEffect);
    void GetAttackFilter(class UPalAttackFilter*& AttackFilter);
    void Get Target Rotation(double DeltaTime, FRotator& TargetRotation);
    void MoveToTarget(double DeltaTime);
    void OnNotifyEnd_D0C96F694588FEAE59630DB3009709D2(FName NotifyName);
    void OnNotifyBegin_D0C96F694588FEAE59630DB3009709D2(FName NotifyName);
    void OnInterrupted_D0C96F694588FEAE59630DB3009709D2(FName NotifyName);
    void OnBlendOut_D0C96F694588FEAE59630DB3009709D2(FName NotifyName);
    void OnCompleted_D0C96F694588FEAE59630DB3009709D2(FName NotifyName);
    void OnNotifyEnd_C557B64E48F004F3125D70A418B49910(FName NotifyName);
    void OnNotifyBegin_C557B64E48F004F3125D70A418B49910(FName NotifyName);
    void OnInterrupted_C557B64E48F004F3125D70A418B49910(FName NotifyName);
    void OnBlendOut_C557B64E48F004F3125D70A418B49910(FName NotifyName);
    void OnCompleted_C557B64E48F004F3125D70A418B49910(FName NotifyName);
    void OnNotifyEnd_D781E39A4E3F598040D42584BD94C8DC(FName NotifyName);
    void OnNotifyBegin_D781E39A4E3F598040D42584BD94C8DC(FName NotifyName);
    void OnInterrupted_D781E39A4E3F598040D42584BD94C8DC(FName NotifyName);
    void OnBlendOut_D781E39A4E3F598040D42584BD94C8DC(FName NotifyName);
    void OnCompleted_D781E39A4E3F598040D42584BD94C8DC(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void EndAttack();
    void TickAction(float DeltaTime);
    void EndAttackByTimer();
    void ExecuteUbergraph_BP_Action_Unique_SheepBall_Roll(int32 EntryPoint);
}; // Size: 0x271

#endif

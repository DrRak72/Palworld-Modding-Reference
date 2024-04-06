#ifndef UE4SS_SDK_BP_Action_Unique_GrassPanda_MusclePunch_HPP
#define UE4SS_SDK_BP_Action_Unique_GrassPanda_MusclePunch_HPP

class UBP_Action_Unique_GrassPanda_MusclePunch_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    double AttackTime;                                                                // 0x0218 (size: 0x8)
    double MoveSpeed;                                                                 // 0x0220 (size: 0x8)
    TEnumAsByte<EAction_GrassPanda_MusclePunch::Type> State;                          // 0x0228 (size: 0x1)
    double HomingOffTrigger;                                                          // 0x0230 (size: 0x8)
    bool IsHomingTarget;                                                              // 0x0238 (size: 0x1)
    double RotateSpeed_0;                                                             // 0x0240 (size: 0x8)
    double HomingOffDistance;                                                         // 0x0248 (size: 0x8)
    double MoveFowardImpulseWhenPunch;                                                // 0x0250 (size: 0x8)
    FName Last Collision Profile;                                                     // 0x0258 (size: 0x8)
    TSubclassOf<class APalSkillEffectBase> SkillEffect;                               // 0x0260 (size: 0x8)
    TArray<TSoftObjectPtr<APalSkillEffectBase>> SpawnedEffects_0;                     // 0x0268 (size: 0x10)
    class APalSkillEffectBase* LoopEffect;                                            // 0x0278 (size: 0x8)
    double MoveGravity;                                                               // 0x0280 (size: 0x8)

    void MoveStop();
    void MoveStart();
    void GetMontageEnd(class UAnimMontage*& NewParam);
    void GetMontageLoop(class UAnimMontage*& NewParam);
    void GetMontageStart(class UAnimMontage*& NewParam);
    void GetEffect(TSubclassOf<class ABP_SkillEffectBase_C>& NewParam);
    void SpawnSkillEffect(FTransform SpawnTransform, FName SocketName, class APalSkillEffectBase*& SpawnedEffect);
    void SetHeadCollisionProfile(FName NewCollisionProfile);
    void GetHeadCollisionProfile(FName& LastCollisionProfile);
    void SetHeadCollisionResponseToPawns(TEnumAsByte<ECollisionResponse> NewResponseToPlayerPawn, TEnumAsByte<ECollisionResponse> NewResponseToPawn);
    void RotateToTarget();
    void Get Target Rotation(FRotator& TargetRotation);
    void OnNotifyEnd_10A7C1724455A4049513A19389414F12(FName NotifyName);
    void OnNotifyBegin_10A7C1724455A4049513A19389414F12(FName NotifyName);
    void OnInterrupted_10A7C1724455A4049513A19389414F12(FName NotifyName);
    void OnBlendOut_10A7C1724455A4049513A19389414F12(FName NotifyName);
    void OnCompleted_10A7C1724455A4049513A19389414F12(FName NotifyName);
    void OnNotifyEnd_D731A4E4432F7D2DB75E0DB1E9FB5D3B(FName NotifyName);
    void OnNotifyBegin_D731A4E4432F7D2DB75E0DB1E9FB5D3B(FName NotifyName);
    void OnInterrupted_D731A4E4432F7D2DB75E0DB1E9FB5D3B(FName NotifyName);
    void OnBlendOut_D731A4E4432F7D2DB75E0DB1E9FB5D3B(FName NotifyName);
    void OnCompleted_D731A4E4432F7D2DB75E0DB1E9FB5D3B(FName NotifyName);
    void OnLoaded_0E9A405A4328B5C7419FF5B7C6198299(class UObject* Loaded);
    void OnNotifyEnd_6AA8BA2B484720BAF1D727AC203160F4(FName NotifyName);
    void OnNotifyBegin_6AA8BA2B484720BAF1D727AC203160F4(FName NotifyName);
    void OnInterrupted_6AA8BA2B484720BAF1D727AC203160F4(FName NotifyName);
    void OnBlendOut_6AA8BA2B484720BAF1D727AC203160F4(FName NotifyName);
    void OnCompleted_6AA8BA2B484720BAF1D727AC203160F4(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void EndAttack();
    void OnMontageNotify_Loop(FName NotifyName);
    void OnMontageNotify_End(FName NotifyName);
    void OnMontageNotify_Start(FName NotifyName);
    void ExecuteUbergraph_BP_Action_Unique_GrassPanda_MusclePunch(int32 EntryPoint);
}; // Size: 0x288

#endif

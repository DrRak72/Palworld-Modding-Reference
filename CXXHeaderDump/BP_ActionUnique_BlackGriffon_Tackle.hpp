#ifndef UE4SS_SDK_BP_ActionUnique_BlackGriffon_Tackle_HPP
#define UE4SS_SDK_BP_ActionUnique_BlackGriffon_Tackle_HPP

class UBP_ActionUnique_BlackGriffon_Tackle_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    double LaserSpawnIntervel;                                                        // 0x0218 (size: 0x8)
    double LaserHoldTime;                                                             // 0x0220 (size: 0x8)
    class UBP_UniqueSkillModule_Tackle_C* TackleModule;                               // 0x0228 (size: 0x8)
    FTimerHandle EffectEndTimerHandle;                                                // 0x0230 (size: 0x8)
    class ABP_SkillEffectBase_C* SkillEffect_Loop;                                    // 0x0238 (size: 0x8)
    FTimerHandle LaserSpawnTimer;                                                     // 0x0240 (size: 0x8)
    FVector LastPlausibleTarget;                                                      // 0x0248 (size: 0x18)
    FBP_ActionUnique_BlackGriffon_Tackle_CGetLastPlausibleTarget GetLastPlausibleTarget; // 0x0260 (size: 0x10)
    void GetLastPlausibleTarget(FVector NewParam);

    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnCompletedEndMontage();
    void OnEndAction();
    void OnEndAttack();
    void OnEndSkillEffect();
    void OnSpawnedLoopEffect(class ABP_SkillEffectBase_C* LoopEffect);
    void OnMontageNotify(class UAnimMontage* Montage, FName NotifyName);
    void SpawnLaser();
    void OnBreakAction();
    void GetLastTarget(FVector Target);
    void ExecuteUbergraph_BP_ActionUnique_BlackGriffon_Tackle(int32 EntryPoint);
    void GetLastPlausibleTarget__DelegateSignature(FVector NewParam);
}; // Size: 0x270

#endif

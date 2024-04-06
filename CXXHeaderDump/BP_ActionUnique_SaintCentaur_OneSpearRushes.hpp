#ifndef UE4SS_SDK_BP_ActionUnique_SaintCentaur_OneSpearRushes_HPP
#define UE4SS_SDK_BP_ActionUnique_SaintCentaur_OneSpearRushes_HPP

class UBP_ActionUnique_SaintCentaur_OneSpearRushes_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UBP_UniqueSkillModule_Tackle_C* TackleModule;                               // 0x0218 (size: 0x8)
    FTimerHandle EffectEndTimerHandle;                                                // 0x0220 (size: 0x8)
    class ABP_SkillEffectBase_C* SkillEffect_Loop;                                    // 0x0228 (size: 0x8)
    EPalBodyPartsType OriginalBodyPartsType;                                          // 0x0230 (size: 0x1)

    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnCompletedEndMontage();
    void OnEndAction();
    void OnEndAttack();
    void OnEndSkillEffect();
    void OnSpawnedLoopEffect(class ABP_SkillEffectBase_C* LoopEffect);
    void OnMontageNotify(class UAnimMontage* Montage, FName NotifyName);
    void ExecuteUbergraph_BP_ActionUnique_SaintCentaur_OneSpearRushes(int32 EntryPoint);
}; // Size: 0x231

#endif

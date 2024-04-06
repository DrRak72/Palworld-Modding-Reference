#ifndef UE4SS_SDK_BP_ActionLightningStrike_HPP
#define UE4SS_SDK_BP_ActionLightningStrike_HPP

class UBP_ActionLightningStrike_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    class UNiagaraComponent* SkillSign;                                               // 0x02C0 (size: 0x8)

    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void OnBeginAction();
    void OnBreakAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionLightningStrike(int32 EntryPoint);
}; // Size: 0x2C8

#endif

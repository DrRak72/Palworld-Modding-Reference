#ifndef UE4SS_SDK_BP_ActionHydroPump_HPP
#define UE4SS_SDK_BP_ActionHydroPump_HPP

class UBP_ActionHydroPump_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    class UNiagaraSystem* EndEffect;                                                  // 0x02C0 (size: 0x8)
    float EndEffectTimeOffset;                                                        // 0x02C8 (size: 0x4)

    void カスタムイベント_0();
    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void ExecuteUbergraph_BP_ActionHydroPump(int32 EntryPoint);
}; // Size: 0x2CC

#endif

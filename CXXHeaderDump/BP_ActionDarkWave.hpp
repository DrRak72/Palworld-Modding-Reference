#ifndef UE4SS_SDK_BP_ActionDarkWave_HPP
#define UE4SS_SDK_BP_ActionDarkWave_HPP

class UBP_ActionDarkWave_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)

    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void OnStartAfterAnimation();
    void ExecuteUbergraph_BP_ActionDarkWave(int32 EntryPoint);
}; // Size: 0x2C0

#endif

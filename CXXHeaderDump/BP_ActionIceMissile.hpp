#ifndef UE4SS_SDK_BP_ActionIceMissile_HPP
#define UE4SS_SDK_BP_ActionIceMissile_HPP

class UBP_ActionIceMissile_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    FFixedPoint64 Next Sheild HP;                                                     // 0x02C0 (size: 0x8)

    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void OnBreakAction();
    void ExecuteUbergraph_BP_ActionIceMissile(int32 EntryPoint);
}; // Size: 0x2C8

#endif

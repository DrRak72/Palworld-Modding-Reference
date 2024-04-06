#ifndef UE4SS_SDK_BP_Action_FireSeed_HPP
#define UE4SS_SDK_BP_Action_FireSeed_HPP

class UBP_Action_FireSeed_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    FRandomStream Rand;                                                               // 0x02C0 (size: 0x8)

    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_Action_FireSeed(int32 EntryPoint);
}; // Size: 0x2C8

#endif

#ifndef UE4SS_SDK_BP_ActionIceBlade_HPP
#define UE4SS_SDK_BP_ActionIceBlade_HPP

class UBP_ActionIceBlade_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)

    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void ExecuteUbergraph_BP_ActionIceBlade(int32 EntryPoint);
}; // Size: 0x2C0

#endif

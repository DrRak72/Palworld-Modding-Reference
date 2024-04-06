#ifndef UE4SS_SDK_BP_Action_DarkCanon_HPP
#define UE4SS_SDK_BP_Action_DarkCanon_HPP

class UBP_Action_DarkCanon_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)

    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_Action_DarkCanon(int32 EntryPoint);
}; // Size: 0x2C0

#endif

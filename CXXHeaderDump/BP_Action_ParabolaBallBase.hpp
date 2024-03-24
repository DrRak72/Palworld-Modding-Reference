#ifndef UE4SS_SDK_BP_Action_ParabolaBallBase_HPP
#define UE4SS_SDK_BP_Action_ParabolaBallBase_HPP

class UBP_Action_ParabolaBallBase_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    double Const_ShootDelay;                                                          // 0x02C0 (size: 0x8)
    class APalSkillEffectBase* MainEffect;                                            // 0x02C8 (size: 0x8)

    void GetTaegetLocation(FVector& Pos);
    void OnStartProcessAnimation();
    void ExecuteUbergraph_BP_Action_ParabolaBallBase(int32 EntryPoint);
}; // Size: 0x2D0

#endif

#ifndef UE4SS_SDK_BP_ActionFireBlast_HPP
#define UE4SS_SDK_BP_ActionFireBlast_HPP

class UBP_ActionFireBlast_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    bool IsShooted;                                                                   // 0x02C0 (size: 0x1)

    void BulletHasShooted(class APalSkillEffectBase* Effect);
    bool CanNextActionCancel();
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionFireBlast(int32 EntryPoint);
}; // Size: 0x2C1

#endif

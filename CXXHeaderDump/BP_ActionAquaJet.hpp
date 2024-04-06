#ifndef UE4SS_SDK_BP_ActionAquaJet_HPP
#define UE4SS_SDK_BP_ActionAquaJet_HPP

class UBP_ActionAquaJet_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    bool IsShooted;                                                                   // 0x02C0 (size: 0x1)

    void BulletHasShooted(class APalSkillEffectBase* Effect);
    void SetHomingTarget(class APalSkillEffectBase* Effect);
    void OnShoot();
    void OnStartProcessAnimation();
    void ExecuteUbergraph_BP_ActionAquaJet(int32 EntryPoint);
}; // Size: 0x2C1

#endif

#ifndef UE4SS_SDK_BP_ActionPowerShot_HPP
#define UE4SS_SDK_BP_ActionPowerShot_HPP

class UBP_ActionPowerShot_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    bool IsShooted;                                                                   // 0x02C0 (size: 0x1)

    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void SetHomingTarget(class APalSkillEffectBase* Effect);
    void SetBulletSpeed(class APalSkillEffectBase*& Effect);
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionPowerShot(int32 EntryPoint);
}; // Size: 0x2C1

#endif

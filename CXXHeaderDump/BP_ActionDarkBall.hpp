#ifndef UE4SS_SDK_BP_ActionDarkBall_HPP
#define UE4SS_SDK_BP_ActionDarkBall_HPP

class UBP_ActionDarkBall_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    double BulletSpeed_0;                                                             // 0x02C0 (size: 0x8)
    bool IsShooted;                                                                   // 0x02C8 (size: 0x1)

    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void OnBreakAction();
    void OnShoot();
    void OnStartProcessAnimation();
    void ExecuteUbergraph_BP_ActionDarkBall(int32 EntryPoint);
}; // Size: 0x2C9

#endif

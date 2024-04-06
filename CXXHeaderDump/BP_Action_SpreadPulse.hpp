#ifndef UE4SS_SDK_BP_Action_SpreadPulse_HPP
#define UE4SS_SDK_BP_Action_SpreadPulse_HPP

class UBP_Action_SpreadPulse_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    int32 BulletNum;                                                                  // 0x02C0 (size: 0x4)
    int32 Angle;                                                                      // 0x02C4 (size: 0x4)
    TArray<class APalSkillEffectBase*> BulletEffects;                                 // 0x02C8 (size: 0x10)
    class APalSkillEffectBase* TargetEffect;                                          // 0x02D8 (size: 0x8)

    void CalcBulletRotation(int32 Index, FRotator& Rotation);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void ShootBullet(const TArray<class APalSkillEffectBase*>& Effects);
    void ExecuteUbergraph_BP_Action_SpreadPulse(int32 EntryPoint);
}; // Size: 0x2E0

#endif

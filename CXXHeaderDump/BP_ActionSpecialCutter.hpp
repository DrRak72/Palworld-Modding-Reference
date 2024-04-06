#ifndef UE4SS_SDK_BP_ActionSpecialCutter_HPP
#define UE4SS_SDK_BP_ActionSpecialCutter_HPP

class UBP_ActionSpecialCutter_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    bool IsShooted;                                                                   // 0x02C0 (size: 0x1)
    FSkillEffectSpawnParameter WhenRiddenGeneralParams;                               // 0x02C8 (size: 0x38)

    void Test(class AActor* Bullet);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void OnSpawnBullet(class AActor* Bullet);
    void ExecuteUbergraph_BP_ActionSpecialCutter(int32 EntryPoint);
}; // Size: 0x300

#endif

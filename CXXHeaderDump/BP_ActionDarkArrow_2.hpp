#ifndef UE4SS_SDK_BP_ActionDarkArrow_2_HPP
#define UE4SS_SDK_BP_ActionDarkArrow_2_HPP

class UBP_ActionDarkArrow_2_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    bool IsShooted;                                                                   // 0x02C0 (size: 0x1)
    int32 counter;                                                                    // 0x02C4 (size: 0x4)
    int32 BulletNum;                                                                  // 0x02C8 (size: 0x4)
    float BulletInterval;                                                             // 0x02CC (size: 0x4)
    FTimerHandle BulletTimer;                                                         // 0x02D0 (size: 0x8)

    void SetBulletSpeed(class APalSkillEffectBase*& Effect);
    void BulletHasShooted(class APalSkillEffectBase* Effect);
    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void SpawnBullet();
    void OnEndAction();
    void ExecuteUbergraph_BP_ActionDarkArrow_2(int32 EntryPoint);
}; // Size: 0x2D8

#endif

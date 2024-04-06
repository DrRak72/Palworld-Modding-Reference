#ifndef UE4SS_SDK_BP_ActionThrowRock_HPP
#define UE4SS_SDK_BP_ActionThrowRock_HPP

class UBP_ActionThrowRock_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    bool IsShooted;                                                                   // 0x02C0 (size: 0x1)
    class APalSkillEffectBase* Effect_0;                                              // 0x02C8 (size: 0x8)
    double ThrowReadyTime;                                                            // 0x02D0 (size: 0x8)
    bool IsSpawned;                                                                   // 0x02D8 (size: 0x1)
    FVector SpawnedLocation;                                                          // 0x02E0 (size: 0x18)
    double ShootHeight;                                                               // 0x02F8 (size: 0x8)
    TSubclassOf<class ABP_SkillEffect_ThrowRockBullet_C> Actor Class;                 // 0x0300 (size: 0x8)
    bool NearTarget;                                                                  // 0x0308 (size: 0x1)

    void MoveRock(double ElapsedTime);
    void OnStartProcessAnimation();
    void Shoot();
    void OnBreakAction();
    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_ActionThrowRock(int32 EntryPoint);
}; // Size: 0x309

#endif

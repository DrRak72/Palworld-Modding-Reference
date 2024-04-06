#ifndef UE4SS_SDK_BP_SkillEffect_Inferno_HPP
#define UE4SS_SDK_BP_SkillEffect_Inferno_HPP

class ABP_SkillEffect_Inferno_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    int32 BulletNumLimit;                                                             // 0x03C8 (size: 0x4)
    double SpawnRadius;                                                               // 0x03D0 (size: 0x8)
    double ExplosionWaitTime;                                                         // 0x03D8 (size: 0x8)
    double ExplosionInterval;                                                         // 0x03E0 (size: 0x8)
    TArray<class APalSkillEffectBase*> SpawnEffects;                                  // 0x03E8 (size: 0x10)
    FTimerHandle ExplosionTimer;                                                      // 0x03F8 (size: 0x8)
    FTimerHandle IntervalTimer;                                                       // 0x0400 (size: 0x8)
    bool IsSpawned;                                                                   // 0x0408 (size: 0x1)
    int32 Index;                                                                      // 0x040C (size: 0x4)
    TArray<FVector> locations;                                                        // 0x0410 (size: 0x10)
    double BulletRadius;                                                              // 0x0420 (size: 0x8)
    double SpawnCenterDistance;                                                       // 0x0428 (size: 0x8)
    FVector SpawnCenterLocation;                                                      // 0x0430 (size: 0x18)

    void GetEffect(TSubclassOf<class ABP_SkillEffectBase_C>& NewParam);
    void GetRandomPointList(TArray<FVector2D>& NewParam);
    void GetInsertIndex(FVector Location, int32& Index, bool& IsInside);
    void SpawnBullet();
    void Explosion();
    void ReceiveTick(float DeltaSeconds);
    void OnExlosion();
    void StartInterval();
    void ExecuteUbergraph_BP_SkillEffect_Inferno(int32 EntryPoint);
}; // Size: 0x448

#endif

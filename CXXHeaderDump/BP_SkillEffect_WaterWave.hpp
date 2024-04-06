#ifndef UE4SS_SDK_BP_SkillEffect_WaterWave_HPP
#define UE4SS_SDK_BP_SkillEffect_WaterWave_HPP

class ABP_SkillEffect_WaterWave_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    TArray<TSoftObjectPtr<ABP_SkillEffect_WaterWaveBullet_C>> Waves;                  // 0x03C8 (size: 0x10)
    double SpawnInterval;                                                             // 0x03D8 (size: 0x8)
    double SideOffset;                                                                // 0x03E0 (size: 0x8)
    int32 SideSpawnCount;                                                             // 0x03E8 (size: 0x4)
    double WaveSpeed;                                                                 // 0x03F0 (size: 0x8)
    double Timer;                                                                     // 0x03F8 (size: 0x8)
    int32 SpawnCount;                                                                 // 0x0400 (size: 0x4)

    void CheckSpawn(double DeltaTime);
    void CheckSelfDestory();
    void Shoot();
    void SpawnWave(FVector Location);
    void ReceiveTick(float DeltaSeconds);
    void OnInitialize();
    void ExecuteUbergraph_BP_SkillEffect_WaterWave(int32 EntryPoint);
}; // Size: 0x404

#endif

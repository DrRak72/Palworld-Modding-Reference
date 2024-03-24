#ifndef UE4SS_SDK_BP_BulletRain_HPP
#define UE4SS_SDK_BP_BulletRain_HPP

class ABP_BulletRain_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    TSubclassOf<class AActor> bulletClass;                                            // 0x03C8 (size: 0x8)
    double ShootTimeInterval;                                                         // 0x03D0 (size: 0x8)
    double ShootDistanceInterval;                                                     // 0x03D8 (size: 0x8)
    int32 ShootNum;                                                                   // 0x03E0 (size: 0x4)
    int32 SplitNum;                                                                   // 0x03E4 (size: 0x4)
    double ShootTimer;                                                                // 0x03E8 (size: 0x8)
    int32 ShootCounter;                                                               // 0x03F0 (size: 0x4)
    FRotator RotatorLookingAtTarget;                                                  // 0x03F8 (size: 0x18)

    void SpawnBullet(int32 Count);
    void UpdateThunderSpawn(double DeltaTime);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BulletRain(int32 EntryPoint);
}; // Size: 0x410

#endif

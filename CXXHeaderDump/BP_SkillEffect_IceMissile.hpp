#ifndef UE4SS_SDK_BP_SkillEffect_IceMissile_HPP
#define UE4SS_SDK_BP_SkillEffect_IceMissile_HPP

class ABP_SkillEffect_IceMissile_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    int32 ShootIceNum;                                                                // 0x03C8 (size: 0x4)
    double ShootDegree;                                                               // 0x03D0 (size: 0x8)
    double ShootInterval;                                                             // 0x03D8 (size: 0x8)
    bool IsShootStarted;                                                              // 0x03E0 (size: 0x1)
    double Timer;                                                                     // 0x03E8 (size: 0x8)
    int32 Count;                                                                      // 0x03F0 (size: 0x4)
    class AActor* Target;                                                             // 0x03F8 (size: 0x8)
    double ShootSpeed;                                                                // 0x0400 (size: 0x8)
    TArray<class ABP_SkillEffect_IceMissile_Bullet_C*> SpawnedBullet;                 // 0x0408 (size: 0x10)
    FBP_SkillEffect_IceMissile_COnSpawnedChildEffect OnSpawnedChildEffect;            // 0x0418 (size: 0x10)
    void OnSpawnedChildEffect();

    void ShootProcess(double DeltaTime);
    void ReceiveTick(float DeltaSeconds);
    void OnInitialize();
    void ExecuteUbergraph_BP_SkillEffect_IceMissile(int32 EntryPoint);
    void OnSpawnedChildEffect__DelegateSignature();
}; // Size: 0x428

#endif

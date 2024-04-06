#ifndef UE4SS_SDK_BP_SkillEffect_WaterWaveBullet_HPP
#define UE4SS_SDK_BP_SkillEffect_WaterWaveBullet_HPP

class ABP_SkillEffect_WaterWaveBullet_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UCapsuleComponent* HitCapsule;                                              // 0x03C8 (size: 0x8)
    class UParticleSystemComponent* PS_WaterWave;                                     // 0x03D0 (size: 0x8)
    double Speed;                                                                     // 0x03D8 (size: 0x8)
    double CollisionDisableTime;                                                      // 0x03E0 (size: 0x8)

    void Movement(double DeltaTime);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnSystemFinished_イベント_0(class UParticleSystemComponent* PSystem);
    void DisableCollision();
    void ExecuteUbergraph_BP_SkillEffect_WaterWaveBullet(int32 EntryPoint);
}; // Size: 0x3E8

#endif

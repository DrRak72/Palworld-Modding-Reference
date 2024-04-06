#ifndef UE4SS_SDK_BP_SkillEffect_AcidRain_Cloud_HPP
#define UE4SS_SDK_BP_SkillEffect_AcidRain_Cloud_HPP

class ABP_SkillEffect_AcidRain_Cloud_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UPalSkillDamageReactionComponent* PalSkillDamageReaction;                   // 0x03C8 (size: 0x8)
    class UBoxComponent* HitBoxCollision;                                             // 0x03D0 (size: 0x8)
    class UNiagaraComponent* CloudEffect;                                             // 0x03D8 (size: 0x8)
    FVector TargetOffset;                                                             // 0x03E0 (size: 0x18)
    double FollowSpeed;                                                               // 0x03F8 (size: 0x8)
    FVector ShotExtent;                                                               // 0x0400 (size: 0x18)
    double ShotInterval;                                                              // 0x0418 (size: 0x8)
    double TempTime;                                                                  // 0x0420 (size: 0x8)
    double ShotStartTime;                                                             // 0x0428 (size: 0x8)
    FVector preLocation;                                                              // 0x0430 (size: 0x18)
    bool IsInitialized;                                                               // 0x0448 (size: 0x1)
    double FindTargetDistance;                                                        // 0x0450 (size: 0x8)
    int32 HP;                                                                         // 0x0458 (size: 0x4)
    FVector TargetLocation;                                                           // 0x0460 (size: 0x18)
    class ABP_SkillEffec_AcidRain_Bullet_C* Bullet;                                   // 0x0478 (size: 0x8)
    float SpawnRainBulletTimeOffset;                                                  // 0x0480 (size: 0x4)

    void FindNearestTarget(bool& IsExist);
    void GetTargetLocation(FVector& Location);
    void ShootBullet();
    void ReceiveTick(float DeltaSeconds);
    void OnDamageSkill(const FPalDamageInfo& DamageInfo);
    void OnInitialize();
    void FadeOutEffect(double DeltaSecond);
    void EndSkill();
    void SpawnRainBullet();
    void ExecuteUbergraph_BP_SkillEffect_AcidRain_Cloud(int32 EntryPoint);
}; // Size: 0x484

#endif

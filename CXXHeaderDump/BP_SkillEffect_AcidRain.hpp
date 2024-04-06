#ifndef UE4SS_SDK_BP_SkillEffect_AcidRain_HPP
#define UE4SS_SDK_BP_SkillEffect_AcidRain_HPP

class ABP_SkillEffect_AcidRain_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* ParticleEffect;                                          // 0x03C8 (size: 0x8)
    FVector TargetOffset;                                                             // 0x03D0 (size: 0x18)
    FVector preLocation;                                                              // 0x03E8 (size: 0x18)
    double FollowSpeed;                                                               // 0x0400 (size: 0x8)
    FVector TargetLocation;                                                           // 0x0408 (size: 0x18)
    bool HasCloudSpawned;                                                             // 0x0420 (size: 0x1)

    void GetTargetLocation(FVector& Location);
    void ReceiveTick(float DeltaSeconds);
    void FadeOutEffect(double DeltaSecond);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SkillEffect_AcidRain(int32 EntryPoint);
}; // Size: 0x421

#endif

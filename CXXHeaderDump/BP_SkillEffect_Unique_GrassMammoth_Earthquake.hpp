#ifndef UE4SS_SDK_BP_SkillEffect_Unique_GrassMammoth_Earthquake_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_GrassMammoth_Earthquake_HPP

class ABP_SkillEffect_Unique_GrassMammoth_Earthquake_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* ImpactWaveEffect;                                        // 0x03C8 (size: 0x8)
    class UNiagaraComponent* DustEffect;                                              // 0x03D0 (size: 0x8)
    double ImpactTime;                                                                // 0x03D8 (size: 0x8)
    double ImpactRaidus;                                                              // 0x03E0 (size: 0x8)
    double ImpactHeight;                                                              // 0x03E8 (size: 0x8)
    class UPrimitiveComponent* FirstHitCollision;                                     // 0x03F0 (size: 0x8)
    double ImpactTimer;                                                               // 0x03F8 (size: 0x8)
    TArray<int32> FoliageIndex;                                                       // 0x0400 (size: 0x10)
    double ImpactAlpha;                                                               // 0x0410 (size: 0x8)
    TArray<class AActor*> HitActors;                                                  // 0x0418 (size: 0x10)

    void CheckHeightAndFalling(class APalCharacter* TargetActor, bool& IsHit);
    void GetRootLocationZ(class APalCharacter* Character, double& LocationZ);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_Unique_GrassMammoth_Earthquake(int32 EntryPoint);
}; // Size: 0x428

#endif

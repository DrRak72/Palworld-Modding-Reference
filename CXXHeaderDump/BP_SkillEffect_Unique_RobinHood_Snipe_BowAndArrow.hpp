#ifndef UE4SS_SDK_BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_HPP

class ABP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class USkeletalMeshComponent* SK_RobinHood_arrow;                                 // 0x03C8 (size: 0x8)
    class USkeletalMeshComponent* SK_RobinHood_bow;                                   // 0x03D0 (size: 0x8)

    void FadeOutEffect(double DeltaSecond);
    void OnShootArrow_Event();
    void ExecuteUbergraph_BP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow(int32 EntryPoint);
}; // Size: 0x3D8

#endif

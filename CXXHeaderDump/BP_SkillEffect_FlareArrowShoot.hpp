#ifndef UE4SS_SDK_BP_SkillEffect_FlareArrowShoot_HPP
#define UE4SS_SDK_BP_SkillEffect_FlareArrowShoot_HPP

class ABP_SkillEffect_FlareArrowShoot_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UParticleSystemComponent* PS_FireBlastShoot;                                // 0x03C8 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SkillEffect_FlareArrowShoot(int32 EntryPoint);
}; // Size: 0x3D0

#endif

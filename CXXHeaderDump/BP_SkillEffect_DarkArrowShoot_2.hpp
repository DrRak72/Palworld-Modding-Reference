#ifndef UE4SS_SDK_BP_SkillEffect_DarkArrowShoot_2_HPP
#define UE4SS_SDK_BP_SkillEffect_DarkArrowShoot_2_HPP

class ABP_SkillEffect_DarkArrowShoot_2_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* NS_FireBlastMuzzle;                                      // 0x03C8 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SkillEffect_DarkArrowShoot_2(int32 EntryPoint);
}; // Size: 0x3D0

#endif

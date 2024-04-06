#ifndef UE4SS_SDK_BP_SkillEffect_Unique_Eagle_GlidingNail_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_Eagle_GlidingNail_HPP

class ABP_SkillEffect_Unique_Eagle_GlidingNail_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* NS_UniqueSkill_Eagle_GlidingNail_loop;                   // 0x03C8 (size: 0x8)

    void FollowOwnerActorLocation();
    void ReceiveTick(float DeltaSeconds);
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_Unique_Eagle_GlidingNail(int32 EntryPoint);
}; // Size: 0x3D0

#endif

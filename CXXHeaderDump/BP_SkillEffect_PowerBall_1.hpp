#ifndef UE4SS_SDK_BP_SkillEffect_PowerBall_1_HPP
#define UE4SS_SDK_BP_SkillEffect_PowerBall_1_HPP

class ABP_SkillEffect_PowerBall_1_C : public ABP_SkillEffect_ParabolaBallBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0418 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SkillEffect_PowerBall_1(int32 EntryPoint);
}; // Size: 0x420

#endif

#ifndef UE4SS_SDK_BP_SkillEffect_Unique_WarpBeam_Beam_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_WarpBeam_Beam_HPP

class ABP_SkillEffect_Unique_WarpBeam_Beam_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x03C8 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x03D0 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x03D8 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x03E0 (size: 0x8)

    void ReceiveBeginPlay();
    void EndCollision();
    void SetBeamDurationAndSize(double Duration, double Size);
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_Unique_WarpBeam_Beam(int32 EntryPoint);
}; // Size: 0x3E8

#endif

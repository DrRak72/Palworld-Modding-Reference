#ifndef UE4SS_SDK_BP_SkillEffect_Unique_WarpBeam_Wave_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_WarpBeam_Wave_HPP

class ABP_SkillEffect_Unique_WarpBeam_Wave_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x03C8 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x03D0 (size: 0x8)

    void FadeOutEffect(double DeltaSecond);
    void SetLifeAndSize(double Life, double Size);
    void StartFade();
    void ExecuteUbergraph_BP_SkillEffect_Unique_WarpBeam_Wave(int32 EntryPoint);
}; // Size: 0x3D8

#endif

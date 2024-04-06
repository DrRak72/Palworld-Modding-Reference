#ifndef UE4SS_SDK_BP_SkillEffect_DiamondFall_Explode_HPP
#define UE4SS_SDK_BP_SkillEffect_DiamondFall_Explode_HPP

class ABP_SkillEffect_DiamondFall_Explode_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03C8 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x03D0 (size: 0x8)

    void FadeOutEffect(double DeltaSecond);
    void OnBreakAction();
    void ReceiveBeginPlay();
    void SetScale(double NewScale);
    void ExecuteUbergraph_BP_SkillEffect_DiamondFall_Explode(int32 EntryPoint);
}; // Size: 0x3D8

#endif

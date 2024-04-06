#ifndef UE4SS_SDK_BP_Action_AcidRain_HPP
#define UE4SS_SDK_BP_Action_AcidRain_HPP

class UBP_Action_AcidRain_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    class ABP_SkillEffect_AcidRain_Cloud_C* CloudEffect;                              // 0x02C0 (size: 0x8)
    class ABP_SkillEffect_AcidRain_C* ChargeEffect;                                   // 0x02C8 (size: 0x8)

    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void ExecuteUbergraph_BP_Action_AcidRain(int32 EntryPoint);
}; // Size: 0x2D0

#endif

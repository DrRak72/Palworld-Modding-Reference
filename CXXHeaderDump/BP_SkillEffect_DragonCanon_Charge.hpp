#ifndef UE4SS_SDK_BP_SkillEffect_DragonCanon_Charge_HPP
#define UE4SS_SDK_BP_SkillEffect_DragonCanon_Charge_HPP

class ABP_SkillEffect_DragonCanon_Charge_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* ChargeEffect;                                            // 0x03C8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SkillEffect_DragonCanon_Charge(int32 EntryPoint);
}; // Size: 0x3D0

#endif

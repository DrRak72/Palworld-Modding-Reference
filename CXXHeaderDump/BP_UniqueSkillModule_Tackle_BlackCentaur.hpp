#ifndef UE4SS_SDK_BP_UniqueSkillModule_Tackle_BlackCentaur_HPP
#define UE4SS_SDK_BP_UniqueSkillModule_Tackle_BlackCentaur_HPP

class UBP_UniqueSkillModule_Tackle_BlackCentaur_C : public UBP_UniqueSkillModule_Tackle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0118 (size: 0x8)
    TSubclassOf<class ABP_SkillEffectBase_C> RushEffectClass;                         // 0x0120 (size: 0x8)
    class ABP_SkillEffect_Unique_BlackCentaur_Tackle_Rush_C* LeftRushEffect;          // 0x0128 (size: 0x8)
    class ABP_SkillEffect_Unique_BlackCentaur_Tackle_Rush_C* RightRushEffect;         // 0x0130 (size: 0x8)

    void OnMontageNotifyEvent(class UAnimMontage* Montage, FName NotifyName);
    void OnEndModule();
    void ExecuteUbergraph_BP_UniqueSkillModule_Tackle_BlackCentaur(int32 EntryPoint);
}; // Size: 0x138

#endif

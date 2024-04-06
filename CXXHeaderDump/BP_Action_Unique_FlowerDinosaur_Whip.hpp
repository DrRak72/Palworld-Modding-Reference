#ifndef UE4SS_SDK_BP_Action_Unique_FlowerDinosaur_Whip_HPP
#define UE4SS_SDK_BP_Action_Unique_FlowerDinosaur_Whip_HPP

class UBP_Action_Unique_FlowerDinosaur_Whip_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    FName flagName_0;                                                                 // 0x0218 (size: 0x8)
    class ABP_SkillEffectBase_C* SkillEffect;                                         // 0x0220 (size: 0x8)

    void SetMontagePlayRate(double PlayRate);
    void CreateEffect();
    void SetPalMoveState(bool isDisable);
    void OnNotifyEnd_989BB40F4904E794166EE4ACBFE071CC(FName NotifyName);
    void OnNotifyBegin_989BB40F4904E794166EE4ACBFE071CC(FName NotifyName);
    void OnInterrupted_989BB40F4904E794166EE4ACBFE071CC(FName NotifyName);
    void OnBlendOut_989BB40F4904E794166EE4ACBFE071CC(FName NotifyName);
    void OnCompleted_989BB40F4904E794166EE4ACBFE071CC(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void OnBreakAction();
    void ExecuteUbergraph_BP_Action_Unique_FlowerDinosaur_Whip(int32 EntryPoint);
}; // Size: 0x228

#endif

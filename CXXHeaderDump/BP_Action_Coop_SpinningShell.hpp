#ifndef UE4SS_SDK_BP_Action_Coop_SpinningShell_HPP
#define UE4SS_SDK_BP_Action_Coop_SpinningShell_HPP

class UBP_Action_Coop_SpinningShell_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0140 (size: 0x8)
    class UAnimMontage* Montage_Start;                                                // 0x0148 (size: 0x8)
    class UAnimMontage* Montage_Loop;                                                 // 0x0150 (size: 0x8)
    class UAnimMontage* Montage_End;                                                  // 0x0158 (size: 0x8)
    class ABP_SkillEffect_Drillgame_SpiningShell_C* EffectActor;                      // 0x0160 (size: 0x8)

    void OnNotifyEnd_A12170E743AC260CA42A989907238A36(FName NotifyName);
    void OnNotifyBegin_A12170E743AC260CA42A989907238A36(FName NotifyName);
    void OnInterrupted_A12170E743AC260CA42A989907238A36(FName NotifyName);
    void OnBlendOut_A12170E743AC260CA42A989907238A36(FName NotifyName);
    void OnCompleted_A12170E743AC260CA42A989907238A36(FName NotifyName);
    void OnNotifyEnd_1CAF81584401FF0759F088A5B2131844(FName NotifyName);
    void OnNotifyBegin_1CAF81584401FF0759F088A5B2131844(FName NotifyName);
    void OnInterrupted_1CAF81584401FF0759F088A5B2131844(FName NotifyName);
    void OnBlendOut_1CAF81584401FF0759F088A5B2131844(FName NotifyName);
    void OnCompleted_1CAF81584401FF0759F088A5B2131844(FName NotifyName);
    void OnNotifyEnd_116C8E3B44FE1A6DB3D45BB7E6C50013(FName NotifyName);
    void OnNotifyBegin_116C8E3B44FE1A6DB3D45BB7E6C50013(FName NotifyName);
    void OnInterrupted_116C8E3B44FE1A6DB3D45BB7E6C50013(FName NotifyName);
    void OnBlendOut_116C8E3B44FE1A6DB3D45BB7E6C50013(FName NotifyName);
    void OnCompleted_116C8E3B44FE1A6DB3D45BB7E6C50013(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Coop_SpinningShell(int32 EntryPoint);
}; // Size: 0x168

#endif

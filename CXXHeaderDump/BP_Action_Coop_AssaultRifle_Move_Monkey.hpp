#ifndef UE4SS_SDK_BP_Action_Coop_AssaultRifle_Move_Monkey_HPP
#define UE4SS_SDK_BP_Action_Coop_AssaultRifle_Move_Monkey_HPP

class UBP_Action_Coop_AssaultRifle_Move_Monkey_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0140 (size: 0x8)
    class UBP_CoopParam_AssaultRifleMode_C* CoopParam;                                // 0x0148 (size: 0x8)

    void ChangeAnime(class UAnimMontage* NewAnime, class UAnimMontage* StopAnime, class UAnimMontage* StopAnime2);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Coop_AssaultRifle_Move_Monkey(int32 EntryPoint);
}; // Size: 0x150

#endif

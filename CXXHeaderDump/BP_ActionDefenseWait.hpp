#ifndef UE4SS_SDK_BP_ActionDefenseWait_HPP
#define UE4SS_SDK_BP_ActionDefenseWait_HPP

class UBP_ActionDefenseWait_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0140 (size: 0x8)
    EPalGeneralMontageType DefenseMontageType;                                        // 0x0148 (size: 0x1)
    class UAnimMontage* tempMontage;                                                  // 0x0150 (size: 0x8)

    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_ActionDefenseWait(int32 EntryPoint);
}; // Size: 0x158

#endif

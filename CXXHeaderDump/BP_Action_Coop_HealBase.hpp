#ifndef UE4SS_SDK_BP_Action_Coop_HealBase_HPP
#define UE4SS_SDK_BP_Action_Coop_HealBase_HPP

class UBP_Action_Coop_HealBase_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0140 (size: 0x8)
    class UAnimMontage* Anim Montage;                                                 // 0x0148 (size: 0x8)
    double ElapsedTime;                                                               // 0x0150 (size: 0x8)
    double FinishTime;                                                                // 0x0158 (size: 0x8)
    double HealTime;                                                                  // 0x0160 (size: 0x8)
    bool IsHealed;                                                                    // 0x0168 (size: 0x1)
    class AActor* HealTarget;                                                         // 0x0170 (size: 0x8)

    void TickAction(float DeltaTime);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Coop_HealBase(int32 EntryPoint);
}; // Size: 0x178

#endif

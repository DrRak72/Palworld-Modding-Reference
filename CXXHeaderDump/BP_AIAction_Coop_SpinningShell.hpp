#ifndef UE4SS_SDK_BP_AIAction_Coop_SpinningShell_HPP
#define UE4SS_SDK_BP_AIAction_Coop_SpinningShell_HPP

class UBP_AIAction_Coop_SpinningShell_C : public UBP_AIAction_OtomoFollow_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UPalActionBase* PlayedAction;                                               // 0x0210 (size: 0x8)

    void OnCancel();
    void OnCoopEnd();
    void OnCoopStart();
    void ActionStart(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionPause(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_Coop_SpinningShell(int32 EntryPoint);
}; // Size: 0x218

#endif

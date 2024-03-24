#ifndef UE4SS_SDK_BP_AIAction_BaseCamp_Trantrum_HPP
#define UE4SS_SDK_BP_AIAction_BaseCamp_Trantrum_HPP

class UBP_AIAction_BaseCamp_Trantrum_C : public UPalAIActionBaseCampTrantrum
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x0168 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0170 (size: 0x8)

    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void カスタムイベント_0();
    void ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum(int32 EntryPoint);
}; // Size: 0x178

#endif

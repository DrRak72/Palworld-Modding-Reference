#ifndef UE4SS_SDK_BP_AIAction_BaseCampFighter_HPP
#define UE4SS_SDK_BP_AIAction_BaseCampFighter_HPP

class UBP_AIAction_BaseCampFighter_C : public UPalAIActionBaseCampFighter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0140 (size: 0x8)

    void ActionStart(class APawn* ControlledPawn);
    void NotifyOrderCommand(const EPalMapBaseCampWorkerOrderType OrderType);
    void ActionResume(class APawn* ControlledPawn);
    void ChangeActionWait();
    void ExecuteUbergraph_BP_AIAction_BaseCampFighter(int32 EntryPoint);
}; // Size: 0x148

#endif

#ifndef UE4SS_SDK_BP_AIAction_BaseCampFighterGunner_HPP
#define UE4SS_SDK_BP_AIAction_BaseCampFighterGunner_HPP

class UBP_AIAction_BaseCampFighterGunner_C : public UPalAIActionBaseCampFighter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0140 (size: 0x8)

    void ChangeActionWait();
    void ActionStart(class APawn* ControlledPawn);
    void NotifyOrderCommand(const EPalMapBaseCampWorkerOrderType OrderType);
    void ExecuteUbergraph_BP_AIAction_BaseCampFighterGunner(int32 EntryPoint);
}; // Size: 0x148

#endif

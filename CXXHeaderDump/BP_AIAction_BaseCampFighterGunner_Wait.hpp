#ifndef UE4SS_SDK_BP_AIAction_BaseCampFighterGunner_Wait_HPP
#define UE4SS_SDK_BP_AIAction_BaseCampFighterGunner_Wait_HPP

class UBP_AIAction_BaseCampFighterGunner_Wait_C : public UPalAIActionBaseCampFighterWait
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0140 (size: 0x8)

    void TickInternal(double DeltaTime);
    void LookMapObjectForward(double DeltaTime, class APalMapObject* MapObject);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ExecuteUbergraph_BP_AIAction_BaseCampFighterGunner_Wait(int32 EntryPoint);
}; // Size: 0x148

#endif

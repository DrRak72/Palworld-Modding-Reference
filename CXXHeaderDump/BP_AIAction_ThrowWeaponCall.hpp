#ifndef UE4SS_SDK_BP_AIAction_ThrowWeaponCall_HPP
#define UE4SS_SDK_BP_AIAction_ThrowWeaponCall_HPP

class UBP_AIAction_ThrowWeaponCall_C : public UBP_AIAction_CallBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0178 (size: 0x8)

    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_ThrowWeaponCall(int32 EntryPoint);
}; // Size: 0x180

#endif

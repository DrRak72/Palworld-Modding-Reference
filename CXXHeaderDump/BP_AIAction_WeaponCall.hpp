#ifndef UE4SS_SDK_BP_AIAction_WeaponCall_HPP
#define UE4SS_SDK_BP_AIAction_WeaponCall_HPP

class UBP_AIAction_WeaponCall_C : public UBP_AIAction_CallBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0178 (size: 0x8)
    class APawn* ControlledPawn;                                                      // 0x0180 (size: 0x8)

    void CanChangeNextWeapon(class APalCharacter* Character, bool& CanChange);
    void HasAnyAction(class APalCharacter* Character, bool& HasAction);
    void PlayAttachAction(TSubclassOf<class UPalActionBase> action, class APalCharacter* Outer, class APalCharacter* Target, class UPalActionBase*& NewAction);
    void FindAttachAction(TSubclassOf<class UPalActionBase>& action);
    void EquipWeapon();
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_WeaponCall(int32 EntryPoint);
}; // Size: 0x188

#endif

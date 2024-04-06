#ifndef UE4SS_SDK_BP_AIActionHealWater_HPP
#define UE4SS_SDK_BP_AIActionHealWater_HPP

class UBP_AIActionHealWater_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0130 (size: 0x8)
    class APalCharacter* OwnerPawn;                                                   // 0x0138 (size: 0x8)
    class APalCharacter* HealTarget;                                                  // 0x0140 (size: 0x8)
    class UPalPartnerSkillParameterComponent* PartnerSkill;                           // 0x0148 (size: 0x8)

    void AddSkillLog();
    void SetMoveDisableFlag(bool isDisable);
    void SetDisableThrowPalFlag(bool isDisable);
    void GetHealValue(int32& HealValue);
    void EndPartnerSkill();
    void StartPartnerSkill();
    void Setup(class UObject* Object);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void OnActionNotify(const class UPalActionBase* action, FName NotifyName);
    void ExecuteUbergraph_BP_AIActionHealWater(int32 EntryPoint);
}; // Size: 0x150

#endif

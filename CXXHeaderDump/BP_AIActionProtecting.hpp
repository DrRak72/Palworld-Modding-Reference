#ifndef UE4SS_SDK_BP_AIActionProtecting_HPP
#define UE4SS_SDK_BP_AIActionProtecting_HPP

class UBP_AIActionProtecting_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0130 (size: 0x8)
    class APalCharacter* ProtectCharacter;                                            // 0x0138 (size: 0x8)
    FName RidingSpeedUpFlagName;                                                      // 0x0140 (size: 0x8)
    class APalCharacter* OwnerPawn;                                                   // 0x0148 (size: 0x8)
    class UPalPartnerSkillParameterComponent* PartnerSkillParam;                      // 0x0150 (size: 0x8)
    bool IsAborted;                                                                   // 0x0158 (size: 0x1)
    bool IsGliding;                                                                   // 0x0159 (size: 0x1)
    bool IsReleased;                                                                  // 0x015A (size: 0x1)

    void CancelCheck();
    void OnCoopEnd();
    void SetupAction(class APawn* ControlledPawn);
    void SetProtectCharacter(class APalCharacter* RidingCharacter);
    void BindCoopReleaseEvent();
    void OnCoopRelease();
    void UnbindCoopReleaseEvent();
    void OnDead(FPalDeadInfo DeadInfo);
    void StartPartnerSkill();
    void StopPartnerSkill();
    void OnDamage(FPalDamageResult DamageResult);
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void OnLanded(class UPalCharacterMovementComponent* Component, const FHitResult& Hit);
    void DeadProc(FPalDeadInfo DeadInfo);
    void ActionAbort(class APawn* ControlledPawn);
    void CoopRelease();
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIActionProtecting(int32 EntryPoint);
}; // Size: 0x15B

#endif

#ifndef UE4SS_SDK_BP_AIActionOnHeadShotStand_HPP
#define UE4SS_SDK_BP_AIActionOnHeadShotStand_HPP

class UBP_AIActionOnHeadShotStand_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0130 (size: 0x8)
    class UPalAnimInstance* PlayerABP;                                                // 0x0138 (size: 0x8)
    class APalCharacter* PlayerCharacter;                                             // 0x0140 (size: 0x8)
    class APalCharacter* OwnerCharacter;                                              // 0x0148 (size: 0x8)
    class UBP_CoopParam_OnHeadShot_C* CoopParam;                                      // 0x0150 (size: 0x8)
    bool IsAimMode;                                                                   // 0x0158 (size: 0x1)
    class UPalShooterComponent* ShooterCP;                                            // 0x0160 (size: 0x8)
    class UPalPartnerSkillParameterComponent* PartnerSkillParam;                      // 0x0168 (size: 0x8)
    bool IsAborted;                                                                   // 0x0170 (size: 0x1)
    class UPalActionComponent* ActionComponent;                                       // 0x0178 (size: 0x8)

    void CheckReSetupAction();
    void ClearAdditionalCameraOffset();
    void SetAdditionalCameraOffset();
    void SetActor_GoalPosition();
    void FinishAction();
    void SetupAction(class APawn* ControlledPawn);
    void StopPartnerSkill();
    void OnShoot();
    void OnCoolDown();
    void StartPartnerSkill();
    void CoopRelease();
    void OnOverheat();
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void UnbindCoopRegisterEvent();
    void OnStartAim_イベント_0();
    void BindCoopRegisterEvent();
    void OnEndAim_イベント_0();
    void ActionAbort(class APawn* ControlledPawn);
    void CoopFinish();
    void ExecuteUbergraph_BP_AIActionOnHeadShotStand(int32 EntryPoint);
}; // Size: 0x180

#endif

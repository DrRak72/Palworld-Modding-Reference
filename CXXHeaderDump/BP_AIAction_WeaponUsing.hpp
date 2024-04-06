#ifndef UE4SS_SDK_BP_AIAction_WeaponUsing_HPP
#define UE4SS_SDK_BP_AIAction_WeaponUsing_HPP

class UBP_AIAction_WeaponUsing_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0130 (size: 0x8)
    class AActor* OwnerPawn;                                                          // 0x0138 (size: 0x8)
    class APalCharacter* WeaponUser;                                                  // 0x0140 (size: 0x8)
    class UPalPartnerSkillParameterComponent* PartnerSkillParam;                      // 0x0148 (size: 0x8)
    class UBP_CoopParam_Weapon_C* CoopParam;                                          // 0x0150 (size: 0x8)
    class UPalShooterComponent* Shooter;                                              // 0x0158 (size: 0x8)
    bool IsShooting;                                                                  // 0x0160 (size: 0x1)
    class UPalActionBase* AttachWeaponAction;                                         // 0x0168 (size: 0x8)

    void StopAttachAction();
    void ProcFinish();
    void StartPartnerSkill();
    void OnDetachWeapon();
    void OnWeaponAttached();
    void OnEndAttachAction();
    void AttachWeaponProc();
    void Initialize(class APawn* ControlledPawn);
    void SetShootDisableFlag(bool isDisable);
    void FindAttachAction(TSubclassOf<class UPalActionBase>& action, bool& Result);
    void PlayAttachAction(class UPalActionBase*& NewAction);
    void AttachWeapon(bool& Result, bool& IsWeaponChanged);
    void SetWeaponUser(class APalCharacter* WeaponUser);
    void BindCoopReleaseEvent();
    void UnbindCoopReleaseEvent();
    void CoopRelease();
    void OnDead(FPalDeadInfo DeadInfo);
    void OnStartPartnerSkill();
    void OnStopPartnerSkill();
    void OnWeaponNotify(EWeaponNotifyType NotifyType);
    void OnPartnerSkillOverheat();
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionAbort(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_WeaponUsing(int32 EntryPoint);
}; // Size: 0x170

#endif

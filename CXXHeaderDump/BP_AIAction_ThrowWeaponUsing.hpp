#ifndef UE4SS_SDK_BP_AIAction_ThrowWeaponUsing_HPP
#define UE4SS_SDK_BP_AIAction_ThrowWeaponUsing_HPP

class UBP_AIAction_ThrowWeaponUsing_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0130 (size: 0x8)
    class APalCharacter* OwnerPawn;                                                   // 0x0138 (size: 0x8)
    class APalCharacter* WeaponUser;                                                  // 0x0140 (size: 0x8)
    bool ShootAble;                                                                   // 0x0148 (size: 0x1)
    double Yaw;                                                                       // 0x0150 (size: 0x8)
    class UPalPartnerSkillParameterComponent* PartnerSkillParameter;                  // 0x0158 (size: 0x8)
    FName Flag Name;                                                                  // 0x0160 (size: 0x8)
    class UPalShooterComponent* Shooter;                                              // 0x0168 (size: 0x8)
    class UBP_CoopParam_Weapon_C* Coop;                                               // 0x0170 (size: 0x8)
    class AActor* ThrownBullet;                                                       // 0x0178 (size: 0x8)

    void SetReloadDisable(bool isDisable);
    void ProcFinish();
    void PrcoAbort();
    void ProcCancel(bool& IsFinished);
    void On Weapon Detached();
    void SetThrowPalDisable(bool isDisable);
    void SetShootWeaponDisable(bool isDisable);
    void TryEquipNowSelectedWeapon(bool& Result);
    void SetOwnerLocation(FVector Location);
    void OnWeaponAttached();
    void SetupWeapon(bool& Result);
    void Initialize(class APawn* ControlledPawn, bool& Result);
    void SetOwnerTransform(FVector Location, FRotator Rotation);
    void SetWeaponUser(class APalCharacter* Trainer);
    void BindCoopReleaseEvent();
    void UnbindCoopReleaseEvent();
    void CoopRelease();
    void ThrowWeapon(class AActor* Bullet);
    void RegisterThrowWeaponDelegate(class APalWeaponBase* weapon);
    void UnregisterThrowWeaponDelegate(class APalWeaponBase* weapon);
    void OnHit(FVector BulletLocation);
    void StartPartnerSkill();
    void ExecPartnerSkill();
    void OnPartnerSkillOverheat();
    void StopPartnerSkill();
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_ThrowWeaponUsing(int32 EntryPoint);
}; // Size: 0x180

#endif

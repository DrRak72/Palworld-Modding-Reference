#ifndef UE4SS_SDK_BP_Musket_HPP
#define UE4SS_SDK_BP_Musket_HPP

class ABP_Musket_C : public ABP_AssaultRifleBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0578 (size: 0x8)
    class USkeletalMeshComponent* weapon;                                             // 0x0580 (size: 0x8)

    void GetMuzzleEffect(class UNiagaraSystem*& NewParam);
    void SetShootHold(bool IsHold);
    float GetDefaultBlurAngle();
    void PlayAnimOnEquip();
    void GetAmmoClass(TSubclassOf<class AActor>& AmmoClass);
    FTransform GetLeftHandTransform();
    void GetAimingBlurAngle(double& Angle);
    void Is UseEjectionPort(bool& isUse);
    void GeyEjectionPortTransform(FTransform& Transform);
    void GetShotAnimation();
    bool IsUseLeftHandAttach();
    void OnShoot();
    void GetMuzzleRotator(FRotator& Rotator);
    void GetShootInterval(double& Time);
    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    void GetMuzzleLocation(FVector& MuzzleLocation);
    FName GetEquipSocketName();
    void OnReloadStart();
    void OnAttachWeapon(class AActor* attachActor);
    void OnPullTrigger();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnDetachWeapon(class AActor* detachActor);
    void ExecuteUbergraph_BP_Musket(int32 EntryPoint);
}; // Size: 0x588

#endif

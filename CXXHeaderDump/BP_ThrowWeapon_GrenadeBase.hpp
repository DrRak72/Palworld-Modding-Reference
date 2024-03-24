#ifndef UE4SS_SDK_BP_ThrowWeapon_GrenadeBase_HPP
#define UE4SS_SDK_BP_ThrowWeapon_GrenadeBase_HPP

class ABP_ThrowWeapon_GrenadeBase_C : public ABP_ThrowWeaponBase_C
{
    class UStaticMeshComponent* StaticMesh;                                           // 0x0558 (size: 0x8)
    FName ItemName;                                                                   // 0x0560 (size: 0x8)

    bool IsEnableAutoAim();
    int32 GetRemainBulletCount();
    void GetShootPitch(double& Pitch);
    void ComsumeItem();
    void On Throw();
    void GetBulletShootRotation(FRotator& BulletRotate);
    void GetThrowObjectClass(TSubclassOf<class AActor>& ThrowObject);
    FName GetEquipSocketName();
}; // Size: 0x568

#endif

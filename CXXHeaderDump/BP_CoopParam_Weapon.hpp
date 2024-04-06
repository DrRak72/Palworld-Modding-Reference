#ifndef UE4SS_SDK_BP_CoopParam_Weapon_HPP
#define UE4SS_SDK_BP_CoopParam_Weapon_HPP

class UBP_CoopParam_Weapon_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    TSubclassOf<class APalWeaponBase> WeaponClass;                                    // 0x00A8 (size: 0x8)
    class APalWeaponBase* WeaponObject;                                               // 0x00B0 (size: 0x8)
    FBP_CoopParam_Weapon_COnCreatedBulletDelegate OnCreatedBulletDelegate;            // 0x00B8 (size: 0x10)
    void OnCreatedBulletDelegate(class APalBullet* Bullet);
    FBP_CoopParam_Weapon_COnDestroyBulletDelegate OnDestroyBulletDelegate;            // 0x00C8 (size: 0x10)
    void OnDestroyBulletDelegate(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, FHitResult HiｔResult);
    class UPalAutoDestroyActorHolder* AutoDestory;                                    // 0x00D8 (size: 0x8)
    int32 CreateBulletCount;                                                          // 0x00E0 (size: 0x4)
    TSubclassOf<class UPalActionBase> WeaponAttachAction;                             // 0x00E8 (size: 0x8)

    void Create Weapon(class AActor* TrainerPlayer);
    void AttachWeapon_ToAll(class AActor* TrainerPlayer);
    void GetWeaponDamage(int32& Dmg);
    void GetShooter(class UPalShooterComponent*& Shooter);
    void IsWeaponAttached(bool& Result);
    void Attach Weapon(bool& Result, bool& IsWeaponChanged);
    void ReceiveBeginPlay();
    void OnCompleteInitializeParameterDelegate_イベント_0(class APalCharacter* InCharacter);
    void OnAttachWeapon();
    void OnShootBullet(class APalBullet* Bullet);
    void OnDestroyBullet(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const FHitResult& Hi);
    void OnDetachWeapon();
    void AttachCoopWeaponToAll_Event(class AActor* AttachPlayerTrainer);
    void CreateWeaponToAll(class AActor* Player);
    void ExecuteUbergraph_BP_CoopParam_Weapon(int32 EntryPoint);
    void OnCreatedBulletDelegate__DelegateSignature(class APalBullet* Bullet);
    void OnDestroyBulletDelegate__DelegateSignature(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, FHitResult HiｔResult);
}; // Size: 0xF0

#endif

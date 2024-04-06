#ifndef UE4SS_SDK_BP_ThrowElecBomb_CoopWeapon_HPP
#define UE4SS_SDK_BP_ThrowElecBomb_CoopWeapon_HPP

class ABP_ThrowElecBomb_CoopWeapon_C : public ABP_ThrowWeaponBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0558 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0560 (size: 0x8)
    bool Threw;                                                                       // 0x0568 (size: 0x1)
    int32 WeaponDmageByOutside;                                                       // 0x056C (size: 0x4)
    class AActor* Attacker;                                                           // 0x0570 (size: 0x8)

    class AActor* GetWeaponAttacker();
    bool IsEmptyMagazine();
    int32 GetWeaponDamage();
    void On Throw();
    void GetThrowObjectClass(TSubclassOf<class AActor>& ThrowObject);
    FName GetEquipSocketName();
    void OnAttachWeapon(class AActor* attachActor);
    void OnDetachWeapon(class AActor* detachActor);
    void SetWeaponDamage(int32 Damageam);
    void SetAttacker(class AActor* AttackerPal);
    void ExecuteUbergraph_BP_ThrowElecBomb_CoopWeapon(int32 EntryPoint);
}; // Size: 0x578

#endif

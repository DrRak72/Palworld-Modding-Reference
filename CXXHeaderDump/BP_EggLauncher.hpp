#ifndef UE4SS_SDK_BP_EggLauncher_HPP
#define UE4SS_SDK_BP_EggLauncher_HPP

class ABP_EggLauncher_C : public APalWeaponBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0538 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0540 (size: 0x8)
    class USphereComponent* Root;                                                     // 0x0548 (size: 0x8)
    bool IsAttach;                                                                    // 0x0550 (size: 0x1)
    bool IsShooting;                                                                  // 0x0551 (size: 0x1)
    bool OnTrigger;                                                                   // 0x0552 (size: 0x1)
    bool IsReqClose;                                                                  // 0x0553 (size: 0x1)
    int32 WeaponDamageByOutSide;                                                      // 0x0554 (size: 0x4)
    class AActor* Attacker;                                                           // 0x0558 (size: 0x8)

    class AActor* GetWeaponAttacker();
    int32 GetWeaponDamage();
    void GetTargetLocation(FVector& TargetLocation);
    FName GetEquipSocketName();
    void OnNotifyEnd_6F8860E743DB178D6302D5B20E9FACF5(FName NotifyName);
    void OnNotifyBegin_6F8860E743DB178D6302D5B20E9FACF5(FName NotifyName);
    void OnInterrupted_6F8860E743DB178D6302D5B20E9FACF5(FName NotifyName);
    void OnBlendOut_6F8860E743DB178D6302D5B20E9FACF5(FName NotifyName);
    void OnCompleted_6F8860E743DB178D6302D5B20E9FACF5(FName NotifyName);
    void OnNotifyEnd_31450BA746076C7BADA24A882C9B621F(FName NotifyName);
    void OnNotifyBegin_31450BA746076C7BADA24A882C9B621F(FName NotifyName);
    void OnInterrupted_31450BA746076C7BADA24A882C9B621F(FName NotifyName);
    void OnBlendOut_31450BA746076C7BADA24A882C9B621F(FName NotifyName);
    void OnCompleted_31450BA746076C7BADA24A882C9B621F(FName NotifyName);
    void OnNotifyEnd_472C08554E73320DE56BAA9E9BD9D55C(FName NotifyName);
    void OnNotifyBegin_472C08554E73320DE56BAA9E9BD9D55C(FName NotifyName);
    void OnInterrupted_472C08554E73320DE56BAA9E9BD9D55C(FName NotifyName);
    void OnBlendOut_472C08554E73320DE56BAA9E9BD9D55C(FName NotifyName);
    void OnCompleted_472C08554E73320DE56BAA9E9BD9D55C(FName NotifyName);
    void OnReleaseTrigger();
    void OnRequestClosing();
    void SetWeaponDamage(int32 Damageam);
    void SetAttacker(class AActor* AttackerPal);
    void OnPullTrigger();
    void ReceiveBeginPlay();
    void OnDetachWeapon(class AActor* detachActor);
    void OnAttachWeapon(class AActor* attachActor);
    void ExecuteUbergraph_BP_EggLauncher(int32 EntryPoint);
}; // Size: 0x560

#endif

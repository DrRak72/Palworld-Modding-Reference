#ifndef UE4SS_SDK_BP_MonsterEquipWeapon_RapidBase_HPP
#define UE4SS_SDK_BP_MonsterEquipWeapon_RapidBase_HPP

class ABP_MonsterEquipWeapon_RapidBase_C : public APalMonsterEquipWeaponBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0550 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0558 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0560 (size: 0x8)
    FTimerHandle ShootHandle;                                                         // 0x0568 (size: 0x8)
    bool IsSleepMode_Debug;                                                           // 0x0570 (size: 0x1)

    float GetBulrAngle();
    FRotator GetMuzzleRotation();
    FVector GetMuzzleLocation();
    void ShootBulletBP_MEWR();
    void GetShootInterval_MEWR(double& Time);
    void ReceiveBeginPlay();
    void OnReleaseTrigger();
    void OnPullTrigger();
    void ExecuteUbergraph_BP_MonsterEquipWeapon_RapidBase(int32 EntryPoint);
}; // Size: 0x571

#endif

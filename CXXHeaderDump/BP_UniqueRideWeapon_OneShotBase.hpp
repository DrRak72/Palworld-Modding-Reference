#ifndef UE4SS_SDK_BP_UniqueRideWeapon_OneShotBase_HPP
#define UE4SS_SDK_BP_UniqueRideWeapon_OneShotBase_HPP

class ABP_UniqueRideWeapon_OneShotBase_C : public APalUniqueRideWeaponBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0540 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0548 (size: 0x8)
    bool ShootAble;                                                                   // 0x0550 (size: 0x1)

    void GetShootInterval(double& Time);
    void ShootBulletBP();
    void OnPullTrigger();
    void ExecuteUbergraph_BP_UniqueRideWeapon_OneShotBase(int32 EntryPoint);
}; // Size: 0x551

#endif

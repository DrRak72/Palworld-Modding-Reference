#ifndef UE4SS_SDK_BP_DoubleBarrelShotgun_HPP
#define UE4SS_SDK_BP_DoubleBarrelShotgun_HPP

class ABP_DoubleBarrelShotgun_C : public ABP_ShotgunBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0568 (size: 0x8)
    bool IsFirstShotDone?;                                                            // 0x0570 (size: 0x1)

    void GetAmmoClass(TSubclassOf<class AActor>& AmmoClass);
    void GetEjectedShellTransform(FTransform& Shell_RTransform, FTransform& Shell_LTransform);
    void OnShot();
    void ReceiveBeginPlay();
    void OnReloadStart();
    void OnAttachWeapon(class AActor* attachActor);
    void ExecuteUbergraph_BP_DoubleBarrelShotgun(int32 EntryPoint);
}; // Size: 0x571

#endif

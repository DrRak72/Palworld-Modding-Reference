#ifndef UE4SS_SDK_BP_PumpActionShotgun_HPP
#define UE4SS_SDK_BP_PumpActionShotgun_HPP

class ABP_PumpActionShotgun_C : public ABP_ShotgunBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0568 (size: 0x8)

    void EjectARound();
    bool IsUseLeftHandAttach();
    void OnshotInternal(bool& IsShoted);
    void PlayReloadAnimation();
    void OnNotifyEnd_FCB44FF643DA97B49C538D845683A965(FName NotifyName);
    void OnNotifyBegin_FCB44FF643DA97B49C538D845683A965(FName NotifyName);
    void OnInterrupted_FCB44FF643DA97B49C538D845683A965(FName NotifyName);
    void OnBlendOut_FCB44FF643DA97B49C538D845683A965(FName NotifyName);
    void OnCompleted_FCB44FF643DA97B49C538D845683A965(FName NotifyName);
    void OnReloadStart();
    void OnReleaseTrigger();
    void ReceiveBeginPlay();
    void OnWeaponNotify(EWeaponNotifyType Type);
    void OnShot();
    void ExecuteUbergraph_BP_PumpActionShotgun(int32 EntryPoint);
}; // Size: 0x570

#endif

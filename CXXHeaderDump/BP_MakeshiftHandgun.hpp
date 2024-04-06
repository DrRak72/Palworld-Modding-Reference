#ifndef UE4SS_SDK_BP_MakeshiftHandgun_HPP
#define UE4SS_SDK_BP_MakeshiftHandgun_HPP

class ABP_MakeshiftHandgun_C : public ABP_HandGun_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0590 (size: 0x8)
    bool IsIntervalTimeEnded;                                                         // 0x0598 (size: 0x1)
    double ShotInterval;                                                              // 0x05A0 (size: 0x8)

    void OnShot();
    void GetShootInterval(double& Time);
    void CountShotInterval();
    void ShootIntervalEvent();
    void OnPullTrigger();
    void ExecuteUbergraph_BP_MakeshiftHandgun(int32 EntryPoint);
}; // Size: 0x5A8

#endif

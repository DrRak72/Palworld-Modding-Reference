#ifndef UE4SS_SDK_BP_SphereLauncher_OneShot_HPP
#define UE4SS_SDK_BP_SphereLauncher_OneShot_HPP

class ABP_SphereLauncher_OneShot_C : public ABP_SphereLauncher_C
{

    void PlayFireSound();
    void GetShootTransformList(double BaseAnglePitch, double BaseAngleYaw, double BlurAngle, TArray<FTransform>& ShootTransformList);
}; // Size: 0x640

#endif

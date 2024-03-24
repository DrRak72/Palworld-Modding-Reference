#ifndef UE4SS_SDK_ALI_MonsterBase_HPP
#define UE4SS_SDK_ALI_MonsterBase_HPP

class IALI_MonsterBase_C : public IAnimLayerInterface
{

    void UpperOverride(FPoseLink NativePose, FPoseLink ActionPose, FPoseLink& UpperOverride);
    void LookAtOverride(FPoseLink InPose, FVector LookAtWorldLocation, FPoseLink& LookAtOverride);
    void AimingOverride(FPoseLink DefaultPose, FRotator AimRotator, FPoseLink& AimingOverride);
}; // Size: 0x28

#endif

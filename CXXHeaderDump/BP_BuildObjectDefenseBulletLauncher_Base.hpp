#ifndef UE4SS_SDK_BP_BuildObjectDefenseBulletLauncher_Base_HPP
#define UE4SS_SDK_BP_BuildObjectDefenseBulletLauncher_Base_HPP

class ABP_BuildObjectDefenseBulletLauncher_Base_C : public APalBuildObjectDefenseBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0598 (size: 0x8)
    class UChildActorComponent* WeaponActor;                                          // 0x05A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x05A8 (size: 0x8)
    class ABP_NormalStationaryLauncherBase_C* StationaryWeapon;                       // 0x05B0 (size: 0x8)
    double RotateYawSpeed;                                                            // 0x05B8 (size: 0x8)
    double RotatePitchSpeed;                                                          // 0x05C0 (size: 0x8)
    FVector TargetLocation;                                                           // 0x05C8 (size: 0x18)

    void GetLineEnd(FVector StartLocation, double Yaw, FVector& LineEnd);
    void SetupWeapon();
    void TurnToTarget_Internal(class AActor* TargetActor, double DeltaTime);
    void DebugDrawAttackableRange(double Duration);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnAvailable_BlueprintImpl();
    void ExecuteUbergraph_BP_BuildObjectDefenseBulletLauncher_Base(int32 EntryPoint);
}; // Size: 0x5E0

#endif

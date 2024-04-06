#ifndef UE4SS_SDK_BP_LaserGatlingGun_HPP
#define UE4SS_SDK_BP_LaserGatlingGun_HPP

class ABP_LaserGatlingGun_C : public ABP_AssaultRifleBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0578 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0580 (size: 0x8)

    void Is UseEjectionPort(bool& isUse);
    void GetAmmoClass(TSubclassOf<class AActor>& AmmoClass);
    void GeyEjectionPortTransform(FTransform& Transform);
    void PlayReloadAnimation();
    void StopFireLoopSound();
    void PlayFireLoopSound();
    void GetTargetPosition(FVector& targetPosition);
    bool IsUseLeftHandAttach();
    FTransform GetLeftHandTransform();
    float GetDefaultBlurAngle();
    void GetMuzzleEffect(class UNiagaraSystem*& NewParam);
    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    void GetShootInterval(double& Time);
    void GetMuzzleRotator(FRotator& Rotator);
    void GetMuzzleLocation(FVector& MuzzleLocation);
    void OnReleaseTrigger();
    void OnPullTrigger();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_LaserGatlingGun(int32 EntryPoint);
}; // Size: 0x588

#endif

#ifndef UE4SS_SDK_BP_AirGrapplingGun_HPP
#define UE4SS_SDK_BP_AirGrapplingGun_HPP

class ABP_AirGrapplingGun_C : public ABP_AssaultRifleBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0578 (size: 0x8)
    class USkeletalMeshComponent* weapon;                                             // 0x0580 (size: 0x8)
    double WireLength;                                                                // 0x0588 (size: 0x8)
    class ABP_AirGrapplingRope_C* Rope;                                               // 0x0590 (size: 0x8)

    void IsOwnerFalling(bool& IsFalling);
    void GetRayLocationAndDirection(bool UseReticleLocation, FVector& RayStart, FVector& RayDirection);
    void CreateRope();
    void Get Pivot Transform(FTransform& PivotTransform);
    FTransform GetLeftHandTransform();
    bool IsUseLeftHandAttach();
    void GetMuzzleRotator(FRotator& Rotator);
    void GetMuzzleLocation(FVector& MuzzleLocation);
    void GetMuzzleEffect(class UNiagaraSystem*& NewParam);
    void ReceiveBeginPlay();
    void OnPullTrigger();
    void OnDetachWeapon(class AActor* detachActor);
    void ExecuteUbergraph_BP_AirGrapplingGun(int32 EntryPoint);
}; // Size: 0x598

#endif

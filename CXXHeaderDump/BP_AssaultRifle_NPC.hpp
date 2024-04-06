#ifndef UE4SS_SDK_BP_AssaultRifle_NPC_HPP
#define UE4SS_SDK_BP_AssaultRifle_NPC_HPP

class ABP_AssaultRifle_NPC_C : public ABP_AssaultRifleBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0578 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0580 (size: 0x8)
    FBP_AssaultRifle_NPC_COnShootDelegate OnShootDelegate;                            // 0x0588 (size: 0x10)
    void OnShootDelegate();

    float GetDefaultBlurAngle();
    int32 GetNPCWeaponDamage();
    void GetMuzzleEffect(class UNiagaraSystem*& NewParam);
    FTransform GetLeftHandTransform();
    bool IsUseLeftHandAttach();
    void OnShoot();
    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    void GetShootInterval(double& Time);
    void GetMuzzleRotator(FRotator& Rotator);
    void GetMuzzleLocation(FVector& MuzzleLocation);
    int32 GetWeaponDamage();
    void OnPullTrigger();
    void ExecuteUbergraph_BP_AssaultRifle_NPC(int32 EntryPoint);
    void OnShootDelegate__DelegateSignature();
}; // Size: 0x598

#endif

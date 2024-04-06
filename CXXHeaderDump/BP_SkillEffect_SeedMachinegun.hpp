#ifndef UE4SS_SDK_BP_SkillEffect_SeedMachinegun_HPP
#define UE4SS_SDK_BP_SkillEffect_SeedMachinegun_HPP

class ABP_SkillEffect_SeedMachinegun_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class USphereComponent* Sphere1;                                                  // 0x03C8 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x03D0 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x03D8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03E0 (size: 0x8)
    double StartCollisionTime;                                                        // 0x03E8 (size: 0x8)
    double EndCollisionTime;                                                          // 0x03F0 (size: 0x8)

    void CalcCapsuleLocation(FVector& Location);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void EnableCollision();
    void EndCollision();
    void BndEvt__BP_SkillEffect_SeedMachinegun_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void ExecuteUbergraph_BP_SkillEffect_SeedMachinegun(int32 EntryPoint);
}; // Size: 0x3F8

#endif

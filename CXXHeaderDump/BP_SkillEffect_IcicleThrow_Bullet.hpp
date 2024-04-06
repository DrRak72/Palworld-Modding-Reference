#ifndef UE4SS_SDK_BP_SkillEffect_IcicleThrow_Bullet_HPP
#define UE4SS_SDK_BP_SkillEffect_IcicleThrow_Bullet_HPP

class ABP_SkillEffect_IcicleThrow_Bullet_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class USphereComponent* Collision_0;                                              // 0x03C8 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement_0;                         // 0x03D0 (size: 0x8)
    class UNiagaraComponent* NS_FireSeed_0;                                           // 0x03D8 (size: 0x8)
    double MinSpeed;                                                                  // 0x03E0 (size: 0x8)
    float RandSpeed;                                                                  // 0x03E8 (size: 0x4)
    double Gravity;                                                                   // 0x03F0 (size: 0x8)
    FRandomStream RandomSteam;                                                        // 0x03F8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SkillEffect_IcicleThrow_Bullet(int32 EntryPoint);
}; // Size: 0x400

#endif

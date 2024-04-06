#ifndef UE4SS_SDK_BP_SkillEffect_Unique_ThunderSword_Wave_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_ThunderSword_Wave_HPP

class ABP_SkillEffect_Unique_ThunderSword_Wave_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* NiagaraEffect;                                           // 0x03C8 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x03D0 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03D8 (size: 0x8)
    float CollisionDelay;                                                             // 0x03E0 (size: 0x4)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void FadeOutEffect(double DeltaSecond);
    void WaveEnd();
    void SetDirection(FVector NewDirct, int32 DirctIndex, int32 WaveCount);
    void SetLifeTime(double Time);
    void DelayEnableCollision();
    void ExecuteUbergraph_BP_SkillEffect_Unique_ThunderSword_Wave(int32 EntryPoint);
}; // Size: 0x3E4

#endif

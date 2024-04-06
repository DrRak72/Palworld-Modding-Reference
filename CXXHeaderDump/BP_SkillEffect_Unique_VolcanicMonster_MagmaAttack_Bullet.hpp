#ifndef UE4SS_SDK_BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_HPP

class ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* NS_CommonSkill_DragonMeteor_Bullet;                      // 0x03C8 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03D0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x03D8 (size: 0x8)
    double Const_InitPitchAngle_Min;                                                  // 0x03E0 (size: 0x8)
    double Const_InitPitchAngle_Max;                                                  // 0x03E8 (size: 0x8)
    double Const_InitSpeed;                                                           // 0x03F0 (size: 0x8)
    double Const_GravityScale;                                                        // 0x03F8 (size: 0x8)
    double Const_CollisionRadius;                                                     // 0x0400 (size: 0x8)
    double Const_CollisionActiveDelayTime;                                            // 0x0408 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Bullet(int32 EntryPoint);
}; // Size: 0x410

#endif

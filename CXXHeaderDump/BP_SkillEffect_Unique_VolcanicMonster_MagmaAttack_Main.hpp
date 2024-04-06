#ifndef UE4SS_SDK_BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_HPP

class ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* NS_UniqueSkill_VolcanicMonster_MagmaAttack_Ready;        // 0x03C8 (size: 0x8)
    class UCapsuleComponent* AttackCollision;                                         // 0x03D0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh_Main;                                      // 0x03D8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh_Sign;                                      // 0x03E0 (size: 0x8)
    double Const_Sign_Duration;                                                       // 0x03E8 (size: 0x8)
    double Const_Collision_Duration;                                                  // 0x03F0 (size: 0x8)
    double Const_Collision_Radius;                                                    // 0x03F8 (size: 0x8)
    double Const_Collision_Height;                                                    // 0x0400 (size: 0x8)
    int32 Const_BulletNum;                                                            // 0x0408 (size: 0x4)
    double Const_BulletEmitHeightOffset;                                              // 0x0410 (size: 0x8)
    double Const_BulletEmitYawAngle_RandomRange;                                      // 0x0418 (size: 0x8)

    void GetBullet(TSubclassOf<class ABP_SkillEffectBase_C>& NewParam);
    void ShootAllBullet();
    void ShootOneBullet(double YawAngle);
    void SetMainActive(bool Active);
    void SetSignActive(bool Active);
    void SetMainSize();
    void SetSignSize();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main(int32 EntryPoint);
}; // Size: 0x420

#endif

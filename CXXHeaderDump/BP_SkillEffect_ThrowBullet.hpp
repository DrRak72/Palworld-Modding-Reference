#ifndef UE4SS_SDK_BP_SkillEffect_ThrowBullet_HPP
#define UE4SS_SDK_BP_SkillEffect_ThrowBullet_HPP

class ABP_SkillEffect_ThrowBullet_C : public APalSkillEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0330 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0338 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0340 (size: 0x8)
    double Speed;                                                                     // 0x0348 (size: 0x8)

    void Drop();
    void Shoot(FVector TargetLocation);
    void ReceiveBeginPlay();
    void OnAttackDelegate_イベント_0(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void ExecuteUbergraph_BP_SkillEffect_ThrowBullet(int32 EntryPoint);
}; // Size: 0x350

#endif

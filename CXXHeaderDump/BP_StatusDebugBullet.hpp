#ifndef UE4SS_SDK_BP_StatusDebugBullet_HPP
#define UE4SS_SDK_BP_StatusDebugBullet_HPP

class ABP_StatusDebugBullet_C : public ABP_AttackBulletBase_C
{
    class UStaticMeshComponent* 14_5_x_114_mm_Bullet;                                 // 0x0370 (size: 0x8)
    EPalAdditionalEffectType Effect;                                                  // 0x0378 (size: 0x1)

    void OnHitToActor(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
}; // Size: 0x379

#endif

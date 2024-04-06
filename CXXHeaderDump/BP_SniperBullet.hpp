#ifndef UE4SS_SDK_BP_SniperBullet_HPP
#define UE4SS_SDK_BP_SniperBullet_HPP

class ABP_SniperBullet_C : public ABP_AttackBulletBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0378 (size: 0x8)

    void SpawnHitEffects(FVector ImpactPoint);
    void OnDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void ExecuteUbergraph_BP_SniperBullet(int32 EntryPoint);
}; // Size: 0x380

#endif

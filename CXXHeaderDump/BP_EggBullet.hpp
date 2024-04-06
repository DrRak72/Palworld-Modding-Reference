#ifndef UE4SS_SDK_BP_EggBullet_HPP
#define UE4SS_SDK_BP_EggBullet_HPP

class ABP_EggBullet_C : public APalBullet
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0370 (size: 0x8)
    bool IsSpawnActor;                                                                // 0x0378 (size: 0x1)
    FRotator ThrowRotator;                                                            // 0x0380 (size: 0x18)
    int32 BoundCount;                                                                 // 0x0398 (size: 0x4)

    void UpdateRotator(double DeltaTime);
    bool IsDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnSpawn(FGuid SpawnGUID, class AActor* SpawnActor);
    void OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void BndEvt__BP_EggBullet_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void ExecuteUbergraph_BP_EggBullet(int32 EntryPoint);
}; // Size: 0x39C

#endif

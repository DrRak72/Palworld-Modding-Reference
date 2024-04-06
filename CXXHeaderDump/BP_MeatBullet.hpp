#ifndef UE4SS_SDK_BP_MeatBullet_HPP
#define UE4SS_SDK_BP_MeatBullet_HPP

class ABP_MeatBullet_C : public ABP_AttackBulletBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0378 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0380 (size: 0x8)
    class UPalHitFilter* HitFilter;                                                   // 0x0388 (size: 0x8)
    bool IsExploded;                                                                  // 0x0390 (size: 0x1)

    void OnHitToActor(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void SetProjectileMovement(class AActor* Hit Actor);
    bool IsDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void GetExplosionClass(TSubclassOf<class ABP_ExplosionAttackBase_C>& ExplosionClass);
    void ReceiveTick(float DeltaSeconds);
    void OnDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void BndEvt__BP_MeatBullet_CollisionComp_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_MeatBullet(int32 EntryPoint);
}; // Size: 0x391

#endif

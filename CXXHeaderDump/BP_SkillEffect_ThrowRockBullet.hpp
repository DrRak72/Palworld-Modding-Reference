#ifndef UE4SS_SDK_BP_SkillEffect_ThrowRockBullet_HPP
#define UE4SS_SDK_BP_SkillEffect_ThrowRockBullet_HPP

class ABP_SkillEffect_ThrowRockBullet_C : public APalSkillEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0330 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0338 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0340 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0348 (size: 0x8)
    double Speed;                                                                     // 0x0350 (size: 0x8)
    double AddImplse;                                                                 // 0x0358 (size: 0x8)
    TSubclassOf<class AActor> GroundEffect;                                           // 0x0360 (size: 0x8)
    FBP_SkillEffect_ThrowRockBullet_CNewEventDispatcher_0 NewEventDispatcher_0;       // 0x0368 (size: 0x10)
    void NewEventDispatcher_0();
    TSubclassOf<class AActor> PredictedTargetClass;                                   // 0x0378 (size: 0x8)
    class AActor* PredictedTarget;                                                    // 0x0380 (size: 0x8)
    float PredictPowerRate;                                                           // 0x0388 (size: 0x4)
    bool NearTarget;                                                                  // 0x038C (size: 0x1)
    FVector Out Launch Velocity;                                                      // 0x0390 (size: 0x18)

    void AddShotImpulse();
    void SetPredictedTarget();
    void Drop();
    void Shoot(FVector TargetLocation);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void SpawnEffect();
    void ShootBullet(FVector TargetLocation);
    void CancelShoot();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__BP_SkillEffect_ThrowRockBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet(int32 EntryPoint);
    void NewEventDispatcher_0__DelegateSignature();
}; // Size: 0x3A8

#endif

#ifndef UE4SS_SDK_BP_Kitsunebi_Flamethrower_HPP
#define UE4SS_SDK_BP_Kitsunebi_Flamethrower_HPP

class ABP_Kitsunebi_Flamethrower_C : public APalWeaponBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0538 (size: 0x8)
    class UBP_PalTimerPointLightComponent_C* BP_PalTimerPointLightComponent;          // 0x0540 (size: 0x8)
    class UPalFacialComponent* PalFacial;                                             // 0x0548 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0550 (size: 0x8)
    class USphereComponent* Root;                                                     // 0x0558 (size: 0x8)
    bool IsAttach;                                                                    // 0x0560 (size: 0x1)
    bool OnTrigger;                                                                   // 0x0561 (size: 0x1)
    bool IsReqClose;                                                                  // 0x0562 (size: 0x1)
    class UNiagaraComponent* FlameEffect;                                             // 0x0568 (size: 0x8)
    double ElapsedTime;                                                               // 0x0570 (size: 0x8)
    TMap<AActor*, double> IgnoreHitActors;                                            // 0x0578 (size: 0x50)
    double HitIntarvalTimeSec;                                                        // 0x05C8 (size: 0x8)
    TEnumAsByte<ETraceTypeQuery> HitTraceChannel;                                     // 0x05D0 (size: 0x1)
    class UNiagaraSystem* EffectAsset_Flamethrower;                                   // 0x05D8 (size: 0x8)
    int32 WeaponDmageByOutside;                                                       // 0x05E0 (size: 0x4)
    class AActor* AttackerMonster;                                                    // 0x05E8 (size: 0x8)
    int32 TempCount;                                                                  // 0x05F0 (size: 0x4)

    class AActor* GetWeaponAttacker();
    void GetAttackType(EPalAttackType& AttackType);
    void PlayShootMotion();
    void PlayIdleMotion(bool StopAllMontages);
    void ResetMeshDisplay();
    void SetMeshDisplay();
    void ApplyDamage(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector HitLocation, FHitResult Hit);
    void SetIgnoreActor(class AActor* HitActor);
    void IsActorAlreadyHit(class AActor* HitActor, bool& IsAlreadyHit);
    void Trace Hit Flame(TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, FVector SimulationPositionOffset);
    void GetRotatorToTarget(FRotator& NewRotation);
    void UpdateEffectTransform();
    void StopEfffect();
    void Tick Ignore Hit Actors(double DeltaTime);
    void Tick Shooting(double DeltaTime);
    void BeginShoot(class UNiagaraComponent*& FlameEffect);
    int32 GetWeaponDamage();
    FName GetEquipSocketName();
    void OnNotifyEnd_266D644B475C5EADF9D744838A1159F1(FName NotifyName);
    void OnNotifyBegin_266D644B475C5EADF9D744838A1159F1(FName NotifyName);
    void OnInterrupted_266D644B475C5EADF9D744838A1159F1(FName NotifyName);
    void OnBlendOut_266D644B475C5EADF9D744838A1159F1(FName NotifyName);
    void OnCompleted_266D644B475C5EADF9D744838A1159F1(FName NotifyName);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnPullTrigger();
    void OnReleaseTrigger();
    void OnAttachWeapon(class AActor* attachActor);
    void OnDetachWeapon(class AActor* detachActor);
    void OnRequestClosing();
    void ReceiveParticleData(const TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const FVector& SimulationPositionOffset);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnShootFire();
    void SetWeaponDamage(int32 Damageam);
    void SetAttacker(class AActor* AttackerPal);
    void ExecuteUbergraph_BP_Kitsunebi_Flamethrower(int32 EntryPoint);
}; // Size: 0x5F4

#endif

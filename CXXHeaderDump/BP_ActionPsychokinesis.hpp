#ifndef UE4SS_SDK_BP_ActionPsychokinesis_HPP
#define UE4SS_SDK_BP_ActionPsychokinesis_HPP

class UBP_ActionPsychokinesis_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    TSubclassOf<class APalSkillEffectBase> DownEffect;                                // 0x02C0 (size: 0x8)
    TArray<double> DefaultGravityScale;                                               // 0x02C8 (size: 0x10)
    bool EnableTargetUp;                                                              // 0x02D8 (size: 0x1)
    TArray<class AActor*> TargetActors;                                               // 0x02E0 (size: 0x10)
    TArray<double> LocationZOfTargetActors;                                           // 0x02F0 (size: 0x10)
    double TargetUpSpeed;                                                             // 0x0300 (size: 0x8)
    double TargetUpHeight;                                                            // 0x0308 (size: 0x8)
    float TargetUpTime;                                                               // 0x0310 (size: 0x4)
    double LaunchDownVelocity Z;                                                      // 0x0318 (size: 0x8)
    FTimerHandle TimerHandle_Down;                                                    // 0x0320 (size: 0x8)
    class UNiagaraComponent* SkillSign;                                               // 0x0328 (size: 0x8)

    void SetTargetParametersForFloating(class AActor* Target);
    void CacheTargetCurrentData(class AActor* Target);
    void SetEnableZeroGravity(class UPalCharacterMovementComponent* CharaMoveComp, bool Enable);
    void Set Move Disable(class AActor* Target, bool isDisable);
    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void TickAction(float DeltaTime);
    void OnEndAction();
    void TargetDown();
    void OnTargetHit(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    void OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnBreakAction();
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionPsychokinesis(int32 EntryPoint);
}; // Size: 0x330

#endif

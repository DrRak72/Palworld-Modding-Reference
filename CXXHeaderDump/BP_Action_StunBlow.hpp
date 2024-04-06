#ifndef UE4SS_SDK_BP_Action_StunBlow_HPP
#define UE4SS_SDK_BP_Action_StunBlow_HPP

class UBP_Action_StunBlow_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0140 (size: 0x8)
    double StunTimeSec;                                                               // 0x0148 (size: 0x8)
    FVector BlowVelocity;                                                             // 0x0150 (size: 0x18)
    FTimerHandle TimerHandle;                                                         // 0x0168 (size: 0x8)
    FTransform DefaultTransform;                                                      // 0x0170 (size: 0x60)
    FName Flag Name;                                                                  // 0x01D0 (size: 0x8)
    bool IsElapsedMinBlowTime;                                                        // 0x01D8 (size: 0x1)
    class UNiagaraComponent* StunEffect;                                              // 0x01E0 (size: 0x8)
    FVector PrevLocation;                                                             // 0x01E8 (size: 0x18)
    double MaxStunTimeSec;                                                            // 0x0200 (size: 0x8)
    double ElapsedTime;                                                               // 0x0208 (size: 0x8)
    FBP_Action_StunBlow_CNewEventDispatcher_0 NewEventDispatcher_0;                   // 0x0210 (size: 0x10)
    void NewEventDispatcher_0();
    bool IsSpawnEffect;                                                               // 0x0220 (size: 0x1)

    void BlowScale(double& Scale);
    void SetActiveAI(bool IsActive);
    void IsElapsedMaxStunTime(double DeltaTime, bool& IsElapsed);
    void CreateStunEffect(class UNiagaraSystem* SystemTemplate);
    void UpdateEffectLocation();
    void Get Socket Transform(FName SocketName, FTransform& Transform);
    void TraceGround(FHitResult& Result, bool& OnHitGround);
    void SetThrowPalDisable(bool isDisable);
    void UpdateLocation();
    void BlowAway();
    void Set Stun(bool IsStun);
    void SetSimPhysics(bool isSimulate);
    void Initialize();
    void OnLoaded_0B1B9A5C4332DEB64E60199DB9AA861E(class UObject* Loaded);
    void OnElapsedMinimumBlowTime();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void OnBeginAction();
    void Finish();
    void SpawnStunEffect(TSoftObjectPtr<UNiagaraSystem> Path);
    void OnBreakAction();
    void ExecuteUbergraph_BP_Action_StunBlow(int32 EntryPoint);
    void NewEventDispatcher_0__DelegateSignature();
}; // Size: 0x221

#endif

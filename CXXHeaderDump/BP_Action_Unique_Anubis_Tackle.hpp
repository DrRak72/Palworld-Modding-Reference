#ifndef UE4SS_SDK_BP_Action_Unique_Anubis_Tackle_HPP
#define UE4SS_SDK_BP_Action_Unique_Anubis_Tackle_HPP

class UBP_Action_Unique_Anubis_Tackle_C : public UPalActionWazaBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    bool IsMoveMode;                                                                  // 0x0158 (size: 0x1)
    double MaxSpeed;                                                                  // 0x0160 (size: 0x8)
    FVector PrevDirection;                                                            // 0x0168 (size: 0x18)
    double RotaterPerSec;                                                             // 0x0180 (size: 0x8)
    double StopRrange;                                                                // 0x0188 (size: 0x8)
    TEnumAsByte<EAction_Anubis_Tackle::Type> State;                                   // 0x0190 (size: 0x1)
    double StopRate;                                                                  // 0x0198 (size: 0x8)
    class UNiagaraComponent* LoopingEffect;                                           // 0x01A0 (size: 0x8)
    TArray<TSoftObjectPtr<UNiagaraComponent>> SpawnedEffects;                         // 0x01A8 (size: 0x10)
    class UNiagaraComponent* OmenEffect;                                              // 0x01B8 (size: 0x8)
    class UNiagaraComponent* OmenEffectSide;                                          // 0x01C0 (size: 0x8)
    double OmenScaleY;                                                                // 0x01C8 (size: 0x8)
    double OmenScaleZ;                                                                // 0x01D0 (size: 0x8)
    double OmenSideScaleY;                                                            // 0x01D8 (size: 0x8)
    double OmenSideScaleZ;                                                            // 0x01E0 (size: 0x8)
    double MoveSpeed;                                                                 // 0x01E8 (size: 0x8)
    FVector ToTargetVector;                                                           // 0x01F0 (size: 0x18)
    FVector CurrentVector;                                                            // 0x0208 (size: 0x18)
    double CurrentPredictTargetRate;                                                  // 0x0220 (size: 0x8)
    double PredictTargetRate;                                                         // 0x0228 (size: 0x8)
    FTimerHandle TimerHandle;                                                         // 0x0230 (size: 0x8)
    double TackleTimer;                                                               // 0x0238 (size: 0x8)

    void StopAllMontage();
    void SetHiddenAllNiagara();
    void TackleMovement(double DeltaTime);
    void GetDesiredTransformOfOmenEffect(double ScaleY, double ScaleZ, FTransform& Transform);
    void ChargeAndRotate(double DeltaTime);
    void StopMovement(double DeltaTime);
    void PlayEndMontage();
    void CheckEndTackle(double DeltaTime, bool& IsEnd);
    void TackleMotament(double DeltaTime);
    void OnBeginAction();
    void OnMontageNotifyBeginDelegate_イベント_0(class UAnimMontage* Montage, FName NotifyName);
    void TickAction(float DeltaTime);
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Unique_Anubis_Tackle(int32 EntryPoint);
}; // Size: 0x240

#endif

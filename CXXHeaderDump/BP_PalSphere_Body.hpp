#ifndef UE4SS_SDK_BP_PalSphere_Body_HPP
#define UE4SS_SDK_BP_PalSphere_Body_HPP

class ABP_PalSphere_Body_C : public ABP_PalCaptureBodyBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0328 (size: 0x8)
    FVector HitedBallGoalLocation;                                                    // 0x0330 (size: 0x18)
    double HitedBallMoveTime;                                                         // 0x0348 (size: 0x8)
    double HitedBallMoveTimer;                                                        // 0x0350 (size: 0x8)
    class UParticleSystemComponent* CureEffect;                                       // 0x0358 (size: 0x8)
    TEnumAsByte<EPalCaptureSphereState::Type> PalSphereState;                         // 0x0360 (size: 0x1)
    TArray<bool> JudgedFlagArray;                                                     // 0x0368 (size: 0x10)
    double JudgeInterval;                                                             // 0x0378 (size: 0x8)
    double JudgeTimer;                                                                // 0x0380 (size: 0x8)
    int32 nowJudgePhaseCount;                                                         // 0x0388 (size: 0x4)
    class UCurveVector* BallShakeCurve;                                               // 0x0390 (size: 0x8)
    double BallShakeTime;                                                             // 0x0398 (size: 0x8)
    double BallShakeTimer;                                                            // 0x03A0 (size: 0x8)
    double BouncePower;                                                               // 0x03A8 (size: 0x8)
    double ShakePower;                                                                // 0x03B0 (size: 0x8)
    double afterShakePassingPhaseEventDelay;                                          // 0x03B8 (size: 0x8)
    double afterHitedBallPassingPhaseDelay;                                           // 0x03C0 (size: 0x8)
    double flyToSkyDelay;                                                             // 0x03C8 (size: 0x8)
    class UNiagaraSystem* passingPhaseEffect;                                         // 0x03D0 (size: 0x8)
    TArray<double> rateArray;                                                         // 0x03D8 (size: 0x10)
    class UNiagaraSystem* AbsorbToBallEffect;                                         // 0x03E8 (size: 0x8)
    class UNiagaraSystem* AbsorbToBallCenterEffect;                                   // 0x03F0 (size: 0x8)
    class UNiagaraSystem* OpenSphereEffect;                                           // 0x03F8 (size: 0x8)
    FPalDataTableRowName_SoundID SoundId_Shake;                                       // 0x0400 (size: 0x8)
    class UAnimSequence* OpenSphereAnim;                                              // 0x0408 (size: 0x8)
    TMap<TEnumAsByte<E_PalCaptureSphereBouncedReason::Type>, UNiagaraSystem*> BounceEffectMap; // 0x0410 (size: 0x50)
    class UPalCaptureBallEffectSettingDataAsset* EffectSettingDataAsset;              // 0x0460 (size: 0x8)

    void FindOwnerPlayer(class APalPlayerCharacter*& Player);
    void IsSkipFirstJudge(class UPalCharacterParameterComponent* Parameter, TArray<double>& RateList, bool& isSkip);
    void SetParameterCaptureAbsorbToBallEffectBySize(class UNiagaraComponent* Effect);
    void CheckBouncedReason(TEnumAsByte<E_PalCaptureSphereBouncedReason::Type>& reasonType);
    void PrevIndexFullPercentage(int32 Index, bool& IsFull);
    void BallShakeTick(double DeltaTime);
    void JudgeProcess(int32 JudgeIndex, bool& Result);
    void PlayOpenSphereEffect();
    void PlayBallCenterEffect();
    void PlayCaptureAbsorbToBallEffect();
    void StopTargetPal();
    void SetupInServer(class APalCharacter* TargetCharacter);
    void PlaySoundShake();
    void SetCaptureState(TEnumAsByte<EPalCaptureSphereState::Type> NewState);
    void Judging(double DeltaTime);
    void TickMovement_MoveToSky(double DeltaTime);
    void TickMovement_HitedBall(double DeltaTime);
    void SynchronizeJudgeParameter(const TArray<bool>& JudgeFlagArray, const TArray<double>& JudgeRateArray);
    void OnShakeBodyToALL();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void CaptureSuccessEvent();
    void PlayCaptureEffectEvent();
    void BounceBallEvent();
    void FlyToSkyEvent(double Delay);
    void DelayPassingPhase(int32 Phase, double DelayTime);
    void DelayPassingPhase_WithEffect(int32 Phase, double DelayTime);
    void OnCompleteCaptureEmissiveEffect(class UPalVisualEffectBase* VisualEffect);
    void OnPassingCapturePhase_イベント_0(int32 PhaseCount, class UPalIndividualCharacterHandle* targetHandle);
    void FailedCapture_OutOfBall();
    void intoBall(FVector GoolLocation);
    void ExecuteUbergraph_BP_PalSphere_Body(int32 EntryPoint);
}; // Size: 0x468

#endif

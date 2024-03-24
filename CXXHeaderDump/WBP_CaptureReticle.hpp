#ifndef UE4SS_SDK_WBP_CaptureReticle_HPP
#define UE4SS_SDK_WBP_CaptureReticle_HPP

class UWBP_CaptureReticle_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UCanvasPanel* Canvas_Root;                                                  // 0x0410 (size: 0x8)
    class UWBP_PalGetReticle_C* WBP_PalGetReticle;                                    // 0x0418 (size: 0x8)
    class UWBP_Reticle_Cancel_C* WBP_Reticle_Cancel;                                  // 0x0420 (size: 0x8)
    class APalPlayerController* localController;                                      // 0x0428 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> traceObjectTypeQueryArray;                  // 0x0430 (size: 0x10)
    TEnumAsByte<EPalCaptureReticleSeqence::Type> reticleSeqence;                      // 0x0440 (size: 0x1)
    TSoftObjectPtr<APalMonsterCharacter> NowTargetMonster;                            // 0x0448 (size: 0x30)
    class UPalLoadoutSelectorComponent* LoadoutSelector;                              // 0x0478 (size: 0x8)
    bool isCaptureItemEquiped;                                                        // 0x0480 (size: 0x1)
    TSoftObjectPtr<APalWeaponBase> lastEquipedWeapon;                                 // 0x0488 (size: 0x30)
    TMap<class TSoftObjectPtr<ABP_PalCaptureBodyBase_C>, class UWBP_PalGetReticle_C*> secondStepWidgetMap; // 0x04B8 (size: 0x50)
    bool isBonusEnabledWhenLastCheck;                                                 // 0x0508 (size: 0x1)
    bool IsStopReticleUpdate;                                                         // 0x0509 (size: 0x1)
    double ReticleStopTimer;                                                          // 0x0510 (size: 0x8)
    TMap<class TSoftObjectPtr<APalCharacter>, class UWBP_CaptureFailedPercent_C*> FailedCaptureRateWidgetMap; // 0x0518 (size: 0x50)
    TMap<TEnumAsByte<E_PalCaptureSphereBouncedReason::Type>, EPalLogType> BouncedBallLogTypeMap; // 0x0568 (size: 0x50)

    void Set Display Capture Rate(class APalMonsterCharacter* TargetMonster, class APalWeaponBase* WeaponBase);
    void ShouldReticleDIsplay(bool& ShouldDisplay);
    void DisplayCaptureFailedLog(class UPalIndividualCharacterHandle* targetHandle);
    void OnBouncedBall(TEnumAsByte<E_PalCaptureSphereBouncedReason::Type> reasonType, class UPalIndividualCharacterHandle* targetHandle);
    void OnFailedPercentWidgetClear(class UWBP_CaptureFailedPercent_C* selfWidget);
    void UpdateFailedWidgets(double DeltaTime);
    void CalcCaptureSuccessRate(TArray<double>& rateArray, double& successRate);
    void IsBonusEnabled(FVector baseLocation, class APalMonsterCharacter* targeActor, bool& Enabled);
    void Get Display Rate(class APalWeaponBase* captureItemActor, class APalMonsterCharacter* TargetMonster, double& Rate, bool& isSneakBonus);
    void On Shake Ball(class ABP_PalCaptureBodyBase_C* shakedBody);
    void UpdateSecondStepWidgetPosition();
    void OnPassingJudge(int32 PhaseCount, class UPalIndividualCharacterHandle* targetHandle);
    void OnFailedCapture(class UPalIndividualCharacterHandle* targetHandle, TEnumAsByte<EPalSphereCaptureFailedReason::Type> failedReason);
    void OnSuccessedCapture(class UPalIndividualCharacterHandle* targetHandle);
    void OnStartedCapture(class AActor* createdBodyActor, class UPalIndividualCharacterHandle* targetHandle, bool isBonus);
    void OnThrowCaptureWeapon(class AActor* Bullet);
    void RegisterWeaponEvent(class APalWeaponBase* newWeapon);
    void Unregister Weapon Event();
    void On Change Weapon(class APalWeaponBase* weapon);
    void SetupAfterPlayerSpawned();
    void ChangeSeqence(TEnumAsByte<EPalCaptureReticleSeqence::Type> newSeqence);
    void FindTargetCharacter(class APalMonsterCharacter*& TargetMonster);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void OnSetup_AfterCreatedPlayer();
    void ExecuteUbergraph_WBP_CaptureReticle(int32 EntryPoint);
}; // Size: 0x5B8

#endif

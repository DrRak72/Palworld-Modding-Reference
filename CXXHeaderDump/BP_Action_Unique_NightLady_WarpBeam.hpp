#ifndef UE4SS_SDK_BP_Action_Unique_NightLady_WarpBeam_HPP
#define UE4SS_SDK_BP_Action_Unique_NightLady_WarpBeam_HPP

class UBP_Action_Unique_NightLady_WarpBeam_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    FTimerHandle WarpTimer;                                                           // 0x0218 (size: 0x8)
    float WarpDestinationDistance;                                                    // 0x0220 (size: 0x4)
    FTimerHandle BeamTimer;                                                           // 0x0228 (size: 0x8)
    float WarpDestinationDistance_NoneChara;                                          // 0x0230 (size: 0x4)
    float BeamDuration;                                                               // 0x0234 (size: 0x4)
    TArray<FReserveMontage> Montage List;                                             // 0x0238 (size: 0x10)
    bool BeamActing;                                                                  // 0x0248 (size: 0x1)
    TArray<class ABP_SkillEffect_Unique_WarpBeam_Beam_C*> Beams;                      // 0x0250 (size: 0x10)
    double CurrentBeamTime;                                                           // 0x0260 (size: 0x8)
    double HommingStrength;                                                           // 0x0268 (size: 0x8)
    bool StartHomming;                                                                // 0x0270 (size: 0x1)
    bool MaintainHorizontal;                                                          // 0x0271 (size: 0x1)
    double HalfWarpDegree;                                                            // 0x0278 (size: 0x8)
    class UCurveFloat* AngleCurve;                                                    // 0x0280 (size: 0x8)
    EVisibilityBasedAnimTickOption OriginalTickOption;                                // 0x0288 (size: 0x1)
    double CurrentWarpCheckDistance;                                                  // 0x0290 (size: 0x8)
    int32 MaxWarpCheck;                                                               // 0x0298 (size: 0x4)
    class ABP_SkillEffect_Unique_WarpBeam_Wave_C* CurrentWaveEffect;                  // 0x02A0 (size: 0x8)
    double SearchDegree;                                                              // 0x02A8 (size: 0x8)
    float OriginalGravity;                                                            // 0x02B0 (size: 0x4)

    void GetCheckedTeleportDestination(FVector& TargetLocation, bool& HasFloor);
    void AjustCharacterRotation(double DeltaTime);
    void Adjustbeam(double DeltaTime);
    void CreateBeam();
    void CalculateTeleportDestination(bool IsCharacter, FVector& Destination);
    void OnNotifyEnd_FEB6788843F94F59D0CCD4B662C87AF4(FName NotifyName);
    void OnNotifyBegin_FEB6788843F94F59D0CCD4B662C87AF4(FName NotifyName);
    void OnInterrupted_FEB6788843F94F59D0CCD4B662C87AF4(FName NotifyName);
    void OnBlendOut_FEB6788843F94F59D0CCD4B662C87AF4(FName NotifyName);
    void OnCompleted_FEB6788843F94F59D0CCD4B662C87AF4(FName NotifyName);
    void OnBeginAction();
    void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
    void Warp();
    void OnEndAction();
    void PrepareBeam();
    void EndBeam();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_Action_Unique_NightLady_WarpBeam(int32 EntryPoint);
}; // Size: 0x2B4

#endif

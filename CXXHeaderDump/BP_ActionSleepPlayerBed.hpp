#ifndef UE4SS_SDK_BP_ActionSleepPlayerBed_HPP
#define UE4SS_SDK_BP_ActionSleepPlayerBed_HPP

class UBP_ActionSleepPlayerBed_C : public UPalAction_SleepPlayerBed
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    FTransform PlayerInitTF;                                                          // 0x0160 (size: 0x60)
    bool AutoCancelAble;                                                              // 0x01C0 (size: 0x1)
    TArray<class UPalIndividualCharacterHandle*> SleepOtomoList;                      // 0x01C8 (size: 0x10)
    class UAkAudioEvent* FadeInSound;                                                 // 0x01D8 (size: 0x8)
    class UAkAudioEvent* FadeOutSound;                                                // 0x01E0 (size: 0x8)
    double FadeInterval;                                                              // 0x01E8 (size: 0x8)
    bool IsNightSkipStarted;                                                          // 0x01F0 (size: 0x1)
    double FadeInTime;                                                                // 0x01F8 (size: 0x8)
    double FadeOutTime;                                                               // 0x0200 (size: 0x8)
    float SleepEndDelay;                                                              // 0x0208 (size: 0x4)
    bool IsSleeping;                                                                  // 0x020C (size: 0x1)
    FName flagName;                                                                   // 0x0210 (size: 0x8)
    bool GetupDelay;                                                                  // 0x0218 (size: 0x1)
    float GetupPlayerCameraAngleX;                                                    // 0x021C (size: 0x4)
    float GetupPlayerCameraAngleZ;                                                    // 0x0220 (size: 0x4)
    class ABP_PlayerBedCamera_C* BedCamera;                                           // 0x0228 (size: 0x8)
    class AActor* PrevViewTarget;                                                     // 0x0230 (size: 0x8)

    void FullRecoveryHPAll();
    void Detach Bed Camera();
    void AttachBedCamera();
    void DisableInteract(bool Disable);
    void DisableLocalPlayerInput(bool Disable);
    void DisableShooter(bool Disable);
    void Disable Movement(bool Disable);
    bool IsSleepLooping();
    void SleepEndOtomo();
    void SleepStartOtomo();
    void Check Sleep Loop();
    void GetMontage(EPalGeneralMontageType GeneralMontage, class UAnimMontage*& Montage);
    void IsPartyFullRecoverd(bool& Completed);
    void Movement Set Active(bool Active);
    void OnNotifyEnd_EE77CE3D437B303B4A7DF5B8A225C124(FName NotifyName);
    void OnNotifyBegin_EE77CE3D437B303B4A7DF5B8A225C124(FName NotifyName);
    void OnInterrupted_EE77CE3D437B303B4A7DF5B8A225C124(FName NotifyName);
    void OnBlendOut_EE77CE3D437B303B4A7DF5B8A225C124(FName NotifyName);
    void OnCompleted_EE77CE3D437B303B4A7DF5B8A225C124(FName NotifyName);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void OnSleepEndProcess();
    void OnPreNightSkip();
    void OnSleepLoop();
    void OnGetupPlayerBedFromModel();
    void TriggerGetup();
    void ExecuteUbergraph_BP_ActionSleepPlayerBed(int32 EntryPoint);
}; // Size: 0x238

#endif

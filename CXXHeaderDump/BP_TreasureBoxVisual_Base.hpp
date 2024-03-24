#ifndef UE4SS_SDK_BP_TreasureBoxVisual_Base_HPP
#define UE4SS_SDK_BP_TreasureBoxVisual_Base_HPP

class ABP_TreasureBoxVisual_Base_C : public APalTreasureBoxVisualBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UNiagaraComponent* Glow;                                                    // 0x02A0 (size: 0x8)
    class UNiagaraSystem* Niagara;                                                    // 0x02A8 (size: 0x8)
    FVector LocationOffset;                                                           // 0x02B0 (size: 0x18)
    class UAkAudioEvent* Ak Event;                                                    // 0x02C8 (size: 0x8)
    FBP_TreasureBoxVisual_Base_COnFinishOpenInServer OnFinishOpenInServer;            // 0x02D0 (size: 0x10)
    void OnFinishOpenInServer();
    class UAnimMontage* OpenAnimMontage;                                              // 0x02E0 (size: 0x8)
    FBP_TreasureBoxVisual_Base_COnNotifiedStartOpenInAnimation OnNotifiedStartOpenInAnimation; // 0x02E8 (size: 0x10)
    void OnNotifiedStartOpenInAnimation();
    FTimerHandle AnimationWaitTimer;                                                  // 0x02F8 (size: 0x8)

    void SetNoCollisionAllMesh();
    void PlayEffectAndSound();
    void TriggerOpenAnimation();
    void OnFinishOpenAnimation();
    void StartOpenAnimation();
    void OnPassedOpenAnimationLength();
    void OnPlayMontageNotifyBegin_BP(FName NotifyName);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TreasureBoxVisual_Base(int32 EntryPoint);
    void OnNotifiedStartOpenInAnimation__DelegateSignature();
    void OnFinishOpenInServer__DelegateSignature();
}; // Size: 0x300

#endif

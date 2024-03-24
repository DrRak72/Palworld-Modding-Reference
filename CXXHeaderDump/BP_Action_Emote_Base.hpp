#ifndef UE4SS_SDK_BP_Action_Emote_Base_HPP
#define UE4SS_SDK_BP_Action_Emote_Base_HPP

class UBP_Action_Emote_Base_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0140 (size: 0x8)
    class UAnimMontage* EmoteAnimation;                                               // 0x0148 (size: 0x8)
    bool IsEnableInputEnd;                                                            // 0x0150 (size: 0x1)
    int32 EmoteIndex;                                                                 // 0x0154 (size: 0x4)

    void SetMoveEnable(bool Enable);
    void OnNotifyEnd_11A0523F4A84359AD4CD3E999BE200ED(FName NotifyName);
    void OnNotifyBegin_11A0523F4A84359AD4CD3E999BE200ED(FName NotifyName);
    void OnInterrupted_11A0523F4A84359AD4CD3E999BE200ED(FName NotifyName);
    void OnBlendOut_11A0523F4A84359AD4CD3E999BE200ED(FName NotifyName);
    void OnCompleted_11A0523F4A84359AD4CD3E999BE200ED(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_Action_Emote_Base(int32 EntryPoint);
}; // Size: 0x158

#endif

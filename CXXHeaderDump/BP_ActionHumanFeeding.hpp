#ifndef UE4SS_SDK_BP_ActionHumanFeeding_HPP
#define UE4SS_SDK_BP_ActionHumanFeeding_HPP

class UBP_ActionHumanFeeding_C : public UPalAction_FeedItemToCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0180 (size: 0x8)
    class UAnimMontage* Montage;                                                      // 0x0188 (size: 0x8)

    void OnNotifyEnd_537FF57B4DD66B0EC3E6829E8F0AB07E(FName NotifyName);
    void OnNotifyBegin_537FF57B4DD66B0EC3E6829E8F0AB07E(FName NotifyName);
    void OnInterrupted_537FF57B4DD66B0EC3E6829E8F0AB07E(FName NotifyName);
    void OnBlendOut_537FF57B4DD66B0EC3E6829E8F0AB07E(FName NotifyName);
    void OnCompleted_537FF57B4DD66B0EC3E6829E8F0AB07E(FName NotifyName);
    void PlayMontageFeeding();
    void ExecuteUbergraph_BP_ActionHumanFeeding(int32 EntryPoint);
}; // Size: 0x190

#endif

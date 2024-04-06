#ifndef UE4SS_SDK_BP_Action_Coop_NightRunner_NegativeKoala_HPP
#define UE4SS_SDK_BP_Action_Coop_NightRunner_NegativeKoala_HPP

class UBP_Action_Coop_NightRunner_NegativeKoala_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0140 (size: 0x8)

    void OnNotifyEnd_BCA1F4734895A0A34F9DBABBDBAC2305(FName NotifyName);
    void OnNotifyBegin_BCA1F4734895A0A34F9DBABBDBAC2305(FName NotifyName);
    void OnInterrupted_BCA1F4734895A0A34F9DBABBDBAC2305(FName NotifyName);
    void OnBlendOut_BCA1F4734895A0A34F9DBABBDBAC2305(FName NotifyName);
    void OnCompleted_BCA1F4734895A0A34F9DBABBDBAC2305(FName NotifyName);
    void OnNotifyEnd_7266469A4B49063A57A1A182103DAE93(FName NotifyName);
    void OnNotifyBegin_7266469A4B49063A57A1A182103DAE93(FName NotifyName);
    void OnInterrupted_7266469A4B49063A57A1A182103DAE93(FName NotifyName);
    void OnBlendOut_7266469A4B49063A57A1A182103DAE93(FName NotifyName);
    void OnCompleted_7266469A4B49063A57A1A182103DAE93(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Coop_NightRunner_NegativeKoala(int32 EntryPoint);
}; // Size: 0x148

#endif

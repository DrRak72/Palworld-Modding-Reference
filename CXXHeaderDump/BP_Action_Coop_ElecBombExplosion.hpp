#ifndef UE4SS_SDK_BP_Action_Coop_ElecBombExplosion_HPP
#define UE4SS_SDK_BP_Action_Coop_ElecBombExplosion_HPP

class UBP_Action_Coop_ElecBombExplosion_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0140 (size: 0x8)

    void OnNotifyEnd_F4A358244EEE427B03122C8822DA355E(FName NotifyName);
    void OnNotifyBegin_F4A358244EEE427B03122C8822DA355E(FName NotifyName);
    void OnInterrupted_F4A358244EEE427B03122C8822DA355E(FName NotifyName);
    void OnBlendOut_F4A358244EEE427B03122C8822DA355E(FName NotifyName);
    void OnCompleted_F4A358244EEE427B03122C8822DA355E(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Coop_ElecBombExplosion(int32 EntryPoint);
}; // Size: 0x148

#endif

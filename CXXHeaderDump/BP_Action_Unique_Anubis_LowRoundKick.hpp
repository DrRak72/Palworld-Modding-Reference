#ifndef UE4SS_SDK_BP_Action_Unique_Anubis_LowRoundKick_HPP
#define UE4SS_SDK_BP_Action_Unique_Anubis_LowRoundKick_HPP

class UBP_Action_Unique_Anubis_LowRoundKick_C : public UPalActionWazaBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)

    void OnNotifyEnd_A59173C84007480E2273A5B14ED45DC4(FName NotifyName);
    void OnNotifyBegin_A59173C84007480E2273A5B14ED45DC4(FName NotifyName);
    void OnInterrupted_A59173C84007480E2273A5B14ED45DC4(FName NotifyName);
    void OnBlendOut_A59173C84007480E2273A5B14ED45DC4(FName NotifyName);
    void OnCompleted_A59173C84007480E2273A5B14ED45DC4(FName NotifyName);
    void OnBeginAction();
    void OnBreakAction();
    void ExecuteUbergraph_BP_Action_Unique_Anubis_LowRoundKick(int32 EntryPoint);
}; // Size: 0x158

#endif

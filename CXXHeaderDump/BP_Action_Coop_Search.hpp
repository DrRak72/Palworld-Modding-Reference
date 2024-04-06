#ifndef UE4SS_SDK_BP_Action_Coop_Search_HPP
#define UE4SS_SDK_BP_Action_Coop_Search_HPP

class UBP_Action_Coop_Search_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0140 (size: 0x8)

    void OnNotifyEnd_BC5F457C4F11D0792B90F989354DBBB7(FName NotifyName);
    void OnNotifyBegin_BC5F457C4F11D0792B90F989354DBBB7(FName NotifyName);
    void OnInterrupted_BC5F457C4F11D0792B90F989354DBBB7(FName NotifyName);
    void OnBlendOut_BC5F457C4F11D0792B90F989354DBBB7(FName NotifyName);
    void OnCompleted_BC5F457C4F11D0792B90F989354DBBB7(FName NotifyName);
    void OnNotifyEnd_A3E49DD14AD6320674680B93BBE791F7(FName NotifyName);
    void OnNotifyBegin_A3E49DD14AD6320674680B93BBE791F7(FName NotifyName);
    void OnInterrupted_A3E49DD14AD6320674680B93BBE791F7(FName NotifyName);
    void OnBlendOut_A3E49DD14AD6320674680B93BBE791F7(FName NotifyName);
    void OnCompleted_A3E49DD14AD6320674680B93BBE791F7(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Coop_Search(int32 EntryPoint);
}; // Size: 0x148

#endif

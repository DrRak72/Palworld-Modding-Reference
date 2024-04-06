#ifndef UE4SS_SDK_BP_Action_Coop_Berserk_Gorilla_HPP
#define UE4SS_SDK_BP_Action_Coop_Berserk_Gorilla_HPP

class UBP_Action_Coop_Berserk_Gorilla_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0140 (size: 0x8)

    void OnNotifyEnd_E1DB8B9942DD69BA78A5869123329614(FName NotifyName);
    void OnNotifyBegin_E1DB8B9942DD69BA78A5869123329614(FName NotifyName);
    void OnInterrupted_E1DB8B9942DD69BA78A5869123329614(FName NotifyName);
    void OnBlendOut_E1DB8B9942DD69BA78A5869123329614(FName NotifyName);
    void OnCompleted_E1DB8B9942DD69BA78A5869123329614(FName NotifyName);
    void OnNotifyEnd_3D96777B49593CB89C857B8D045AA95F(FName NotifyName);
    void OnNotifyBegin_3D96777B49593CB89C857B8D045AA95F(FName NotifyName);
    void OnInterrupted_3D96777B49593CB89C857B8D045AA95F(FName NotifyName);
    void OnBlendOut_3D96777B49593CB89C857B8D045AA95F(FName NotifyName);
    void OnCompleted_3D96777B49593CB89C857B8D045AA95F(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Coop_Berserk_Gorilla(int32 EntryPoint);
}; // Size: 0x148

#endif

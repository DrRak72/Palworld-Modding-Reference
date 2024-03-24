#ifndef UE4SS_SDK_BP_AIAction_NPC_Relax_Talk_HPP
#define UE4SS_SDK_BP_AIAction_NPC_Relax_Talk_HPP

class UBP_AIAction_NPC_Relax_Talk_C : public UBP_AIAction_NPC_RelaxBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01F8 (size: 0x8)
    class UPalActionBase* TalkAction;                                                 // 0x0200 (size: 0x8)
    FPalInstanceID SelfID;                                                            // 0x0208 (size: 0x30)
    bool IsTalkingMotion;                                                             // 0x0238 (size: 0x1)
    int32 currentTalkID;                                                              // 0x023C (size: 0x4)
    double talkTimer;                                                                 // 0x0240 (size: 0x8)
    bool IsListeningMotion;                                                           // 0x0248 (size: 0x1)
    double TalkInterval;                                                              // 0x0250 (size: 0x8)

    void PlayDefaultAction();
    void StopAction();
    void GetMemberID(TArray<FPalInstanceID>& OutList);
    void ActionStart(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionPause(class APawn* ControlledPawn);
    void ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk(int32 EntryPoint);
}; // Size: 0x258

#endif

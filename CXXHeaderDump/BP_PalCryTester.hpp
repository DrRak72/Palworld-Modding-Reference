#ifndef UE4SS_SDK_BP_PalCryTester_HPP
#define UE4SS_SDK_BP_PalCryTester_HPP

class ABP_PalCryTester_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    TSubclassOf<class APalMonsterCharacter> SpawnClass;                               // 0x02A0 (size: 0x8)
    class AActor* SpawnedActor;                                                       // 0x02A8 (size: 0x8)

    void InpActEvt_L_K2Node_InputKeyEvent_5(FKey Key);
    void InpActEvt_K_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_H_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_G_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_J_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_N_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PalCryTester(int32 EntryPoint);
}; // Size: 0x2B0

#endif

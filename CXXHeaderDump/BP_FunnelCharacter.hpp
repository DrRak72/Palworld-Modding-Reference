#ifndef UE4SS_SDK_BP_FunnelCharacter_HPP
#define UE4SS_SDK_BP_FunnelCharacter_HPP

class ABP_FunnelCharacter_C : public APalFunnelCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0830 (size: 0x8)
    class UPalNavigationInvokerComponent* PalNavigationInvoker;                       // 0x0838 (size: 0x8)
    class UPalFacialComponent* PalFacial;                                             // 0x0840 (size: 0x8)

    void SetLocationNearTrainer();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnActive();
    void OnInactive();
    void ExecuteUbergraph_BP_FunnelCharacter(int32 EntryPoint);
}; // Size: 0x848

#endif

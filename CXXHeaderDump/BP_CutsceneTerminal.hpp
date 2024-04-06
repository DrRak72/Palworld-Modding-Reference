#ifndef UE4SS_SDK_BP_CutsceneTerminal_HPP
#define UE4SS_SDK_BP_CutsceneTerminal_HPP

class ABP_CutsceneTerminal_C : public ABP_CutsceneCharacterBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UWidgetComponent* Widget_Shadow;                                            // 0x02B0 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x02B8 (size: 0x8)
    class UPalSkeletalMeshComponent* PalSkeletalMesh;                                 // 0x02C0 (size: 0x8)

    void GetShadowWidget(class UWBP_DemoOP_TerminalShadow_C*& ShadowWidget);
    void GetDisplayWidget(class UWBP_DemoOP_TerminalScreen_C*& TerminalWidget);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CutsceneTerminal(int32 EntryPoint);
}; // Size: 0x2C8

#endif

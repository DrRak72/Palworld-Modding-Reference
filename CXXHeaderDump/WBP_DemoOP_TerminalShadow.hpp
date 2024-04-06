#ifndef UE4SS_SDK_WBP_DemoOP_TerminalShadow_HPP
#define UE4SS_SDK_WBP_DemoOP_TerminalShadow_HPP

class UWBP_DemoOP_TerminalShadow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anim_ShadowIn;                                            // 0x0280 (size: 0x8)
    class UImage* Image_Shadow;                                                       // 0x0288 (size: 0x8)
    class UPalRetainerBox* PalRetainerBox_Mask;                                       // 0x0290 (size: 0x8)

    void AnmEvent_ShadowIn();
    void ExecuteUbergraph_WBP_DemoOP_TerminalShadow(int32 EntryPoint);
}; // Size: 0x298

#endif

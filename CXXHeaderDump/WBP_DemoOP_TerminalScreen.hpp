#ifndef UE4SS_SDK_WBP_DemoOP_TerminalScreen_HPP
#define UE4SS_SDK_WBP_DemoOP_TerminalScreen_HPP

class UWBP_DemoOP_TerminalScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anim_Text;                                                // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anim_Start;                                               // 0x0288 (size: 0x8)
    class UImage* Image_Base;                                                         // 0x0290 (size: 0x8)
    class UImage* Image_Base_1;                                                       // 0x0298 (size: 0x8)
    class UImage* Image_BlurCircle;                                                   // 0x02A0 (size: 0x8)
    class UImage* Image_Pattern_Dot;                                                  // 0x02A8 (size: 0x8)
    class UImage* Image_Pattern_Grid;                                                 // 0x02B0 (size: 0x8)
    class UImage* Image_Symbol;                                                       // 0x02B8 (size: 0x8)
    class UPalRetainerBox* PalRetainerBox_Glitch;                                     // 0x02C0 (size: 0x8)

    void AnmEvent_Reset();
    void AnmEvent_Boot();
    void AnmEvent_Text_Seq1();
    void ExecuteUbergraph_WBP_DemoOP_TerminalScreen(int32 EntryPoint);
}; // Size: 0x2C8

#endif

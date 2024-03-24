#ifndef UE4SS_SDK_WBP_Map_Cursor_HPP
#define UE4SS_SDK_WBP_Map_Cursor_HPP

class UWBP_Map_Cursor_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Focus;                                                // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Loop;                                                 // 0x0288 (size: 0x8)

    void AnmEvent_Reset();
    void AnmEvent_Focus();
    void AnmEvent_Loop();
    void AnmEvent_Unfocus();
    void Construct();
    void ExecuteUbergraph_WBP_Map_Cursor(int32 EntryPoint);
}; // Size: 0x290

#endif

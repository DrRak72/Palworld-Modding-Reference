#ifndef UE4SS_SDK_WBP_Ingame_PalSkill_Flight_HPP
#define UE4SS_SDK_WBP_Ingame_PalSkill_Flight_HPP

class UWBP_Ingame_PalSkill_Flight_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_InputHold;                                            // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* Text_KeyGuide;                                          // 0x0288 (size: 0x8)
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon;                // 0x0290 (size: 0x8)
    bool IsUp;                                                                        // 0x0298 (size: 0x1)
    FDataTableRowHandle UpMsgId;                                                      // 0x02A0 (size: 0x10)
    FDataTableRowHandle DownMsgId;                                                    // 0x02B0 (size: 0x10)

    void AnmEvent_StartInteract();
    void AnmEvent_EndInteract();
    void Construct();
    void OnDownInputMethodChanged(ECommonInputType bNewInputType);
    void ExecuteUbergraph_WBP_Ingame_PalSkill_Flight(int32 EntryPoint);
}; // Size: 0x2C0

#endif

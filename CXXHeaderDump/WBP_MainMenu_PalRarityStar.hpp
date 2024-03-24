#ifndef UE4SS_SDK_WBP_MainMenu_PalRarityStar_HPP
#define UE4SS_SDK_WBP_MainMenu_PalRarityStar_HPP

class UWBP_MainMenu_PalRarityStar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Highlight;                                            // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_OffToOn;                                              // 0x0288 (size: 0x8)
    class UImage* Off;                                                                // 0x0290 (size: 0x8)
    class UImage* On;                                                                 // 0x0298 (size: 0x8)

    void SetActiveRank(bool IsActive);
    void AnmEvent_OnToOff();
    void AnmEvent_OffToOn();
    void AnmEvent_ForceOff();
    void AnmEvent_Highlight();
    void ExecuteUbergraph_WBP_MainMenu_PalRarityStar(int32 EntryPoint);
}; // Size: 0x2A0

#endif

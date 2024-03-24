#ifndef UE4SS_SDK_WBP_Paldex_TaskIcon_HPP
#define UE4SS_SDK_WBP_Paldex_TaskIcon_HPP

class UWBP_Paldex_TaskIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_off_to_on;                                            // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_on;                                                   // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_off;                                                  // 0x0290 (size: 0x8)
    class UImage* Flare_00;                                                           // 0x0298 (size: 0x8)
    class UImage* Flare_01;                                                           // 0x02A0 (size: 0x8)
    class UImage* Flare_B_00;                                                         // 0x02A8 (size: 0x8)
    class UImage* Flare_T_00;                                                         // 0x02B0 (size: 0x8)
    class UImage* Icon_OFF;                                                           // 0x02B8 (size: 0x8)
    class UImage* Icon_ON;                                                            // 0x02C0 (size: 0x8)

    void AnmEvent_On();
    void AnmEvent_Off();
    void AnmEvent_Activate();
    void ExecuteUbergraph_WBP_Paldex_TaskIcon(int32 EntryPoint);
}; // Size: 0x2C8

#endif

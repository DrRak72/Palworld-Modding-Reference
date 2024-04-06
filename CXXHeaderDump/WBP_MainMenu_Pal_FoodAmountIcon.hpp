#ifndef UE4SS_SDK_WBP_MainMenu_Pal_FoodAmountIcon_HPP
#define UE4SS_SDK_WBP_MainMenu_Pal_FoodAmountIcon_HPP

class UWBP_MainMenu_Pal_FoodAmountIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_OFF;                                                  // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_ON;                                                   // 0x0288 (size: 0x8)
    class UImage* Icon_OFF;                                                           // 0x0290 (size: 0x8)
    class UImage* Icon_ON;                                                            // 0x0298 (size: 0x8)

    void AnmEvent_On();
    void AnmEvent_Off();
    void ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmountIcon(int32 EntryPoint);
}; // Size: 0x2A0

#endif

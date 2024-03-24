#ifndef UE4SS_SDK_WBP_MainMenu_Pal_FoodAmount_HPP
#define UE4SS_SDK_WBP_MainMenu_Pal_FoodAmount_HPP

class UWBP_MainMenu_Pal_FoodAmount_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UHorizontalBox* HorizontalBox_0;                                            // 0x0280 (size: 0x8)
    class UWBP_MainMenu_Pal_FoodAmountIcon_C* WBP_MainMenu_Pal_FoodAmountIcon;        // 0x0288 (size: 0x8)
    class UWBP_MainMenu_Pal_FoodAmountIcon_C* WBP_MainMenu_Pal_FoodAmountIcon_1;      // 0x0290 (size: 0x8)
    class UWBP_MainMenu_Pal_FoodAmountIcon_C* WBP_MainMenu_Pal_FoodAmountIcon_2;      // 0x0298 (size: 0x8)
    class UWBP_MainMenu_Pal_FoodAmountIcon_C* WBP_MainMenu_Pal_FoodAmountIcon_3;      // 0x02A0 (size: 0x8)
    class UWBP_MainMenu_Pal_FoodAmountIcon_C* WBP_MainMenu_Pal_FoodAmountIcon_4;      // 0x02A8 (size: 0x8)
    class UWBP_MainMenu_Pal_FoodAmountIcon_C* WBP_MainMenu_Pal_FoodAmountIcon_5;      // 0x02B0 (size: 0x8)
    class UWBP_MainMenu_Pal_FoodAmountIcon_C* WBP_MainMenu_Pal_FoodAmountIcon_6;      // 0x02B8 (size: 0x8)
    class UWBP_MainMenu_Pal_FoodAmountIcon_C* WBP_MainMenu_Pal_FoodAmountIcon_7;      // 0x02C0 (size: 0x8)
    class UWBP_MainMenu_Pal_FoodAmountIcon_C* WBP_MainMenu_Pal_FoodAmountIcon_8;      // 0x02C8 (size: 0x8)
    class UWBP_MainMenu_Pal_FoodAmountIcon_C* WBP_MainMenu_Pal_FoodAmountIcon_9;      // 0x02D0 (size: 0x8)
    TArray<class UWBP_MainMenu_Pal_FoodAmountIcon_C*> IconArray;                      // 0x02D8 (size: 0x10)

    void SetFoodAmount(int32 FoodAmount);
    void OnInitialized();
    void ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount(int32 EntryPoint);
}; // Size: 0x2E8

#endif

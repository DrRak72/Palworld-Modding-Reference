#ifndef UE4SS_SDK_WBP_IngameMenuConstruction_InfoItem_HPP
#define UE4SS_SDK_WBP_IngameMenuConstruction_InfoItem_HPP

class UWBP_IngameMenuConstruction_InfoItem_C : public UUserWidget
{
    class UWidgetAnimation* Anim_ON;                                                  // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_OnToOff;                                              // 0x0280 (size: 0x8)
    class UImage* Base_B;                                                             // 0x0288 (size: 0x8)
    class UImage* Base_G;                                                             // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C;                                      // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_2;                                    // 0x02A0 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_71;                                   // 0x02A8 (size: 0x8)
    class UImage* Dot_0;                                                              // 0x02B0 (size: 0x8)
    class UImage* Dot_1;                                                              // 0x02B8 (size: 0x8)
    class UImage* Dot_4;                                                              // 0x02C0 (size: 0x8)
    class UImage* Dot_5;                                                              // 0x02C8 (size: 0x8)
    class UImage* Frame;                                                              // 0x02D0 (size: 0x8)
    class UImage* Icon;                                                               // 0x02D8 (size: 0x8)
    class UImage* Off;                                                                // 0x02E0 (size: 0x8)

    void Setup(FName ID, int32 NeedNum, int32 HasNum);
}; // Size: 0x2E8

#endif

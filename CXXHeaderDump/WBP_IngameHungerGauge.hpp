#ifndef UE4SS_SDK_WBP_IngameHungerGauge_HPP
#define UE4SS_SDK_WBP_IngameHungerGauge_HPP

class UWBP_IngameHungerGauge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Down_Loop;                                            // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Gauge_Default;                                        // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Gauge_Low;                                            // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToDown;                                         // 0x0298 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Debuff;                                           // 0x02A0 (size: 0x8)
    class UImage* Dot;                                                                // 0x02A8 (size: 0x8)
    class UImage* Dot_1;                                                              // 0x02B0 (size: 0x8)
    class UImage* Dot_2;                                                              // 0x02B8 (size: 0x8)
    class UImage* Dot_3;                                                              // 0x02C0 (size: 0x8)
    class UImage* Dot_02;                                                             // 0x02C8 (size: 0x8)
    class UImage* Dot_03;                                                             // 0x02D0 (size: 0x8)
    class UImage* Dot_04;                                                             // 0x02D8 (size: 0x8)
    class UImage* Dot_05;                                                             // 0x02E0 (size: 0x8)
    class UImage* Icon;                                                               // 0x02E8 (size: 0x8)
    class UImage* Image_78;                                                           // 0x02F0 (size: 0x8)
    class UImage* Image_Base;                                                         // 0x02F8 (size: 0x8)
    class UImage* Image_Line;                                                         // 0x0300 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x0308 (size: 0x8)
    class UProgressBar* ProgressBar_219;                                              // 0x0310 (size: 0x8)

    void SetHunger_ByRate(double Rate);
    void SetHunger(FFixedPoint nowHunger, FFixedPoint maxHunger);
    void AnmEvent_Debuff();
    void AnmEvent_Normal();
    void Construct();
    void ExecuteUbergraph_WBP_IngameHungerGauge(int32 EntryPoint);
}; // Size: 0x318

#endif

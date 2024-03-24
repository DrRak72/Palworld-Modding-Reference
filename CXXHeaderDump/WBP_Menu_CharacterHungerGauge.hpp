#ifndef UE4SS_SDK_WBP_Menu_CharacterHungerGauge_HPP
#define UE4SS_SDK_WBP_Menu_CharacterHungerGauge_HPP

class UWBP_Menu_CharacterHungerGauge_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0578 (size: 0x8)
    class UCanvasPanel* Canvas_Hunger;                                                // 0x0580 (size: 0x8)
    class UImage* Image_96;                                                           // 0x0588 (size: 0x8)
    class UImage* Image_Line;                                                         // 0x0590 (size: 0x8)
    class UProgressBar* ProgressBar_HungerGauge;                                      // 0x0598 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxHunger;                                         // 0x05A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowHunger;                                         // 0x05A8 (size: 0x8)
    class UBP_PalTextBlock_C* TextHunger;                                             // 0x05B0 (size: 0x8)

    void UpdateHunger(double nowHunger, double nowMaxHunger);
    void Construct();
    void Destruct();
    void OnInitialized();
    void ExecuteUbergraph_WBP_Menu_CharacterHungerGauge(int32 EntryPoint);
}; // Size: 0x5B8

#endif
#ifndef UE4SS_SDK_WBP_Menu_CharacterHPGauge_HPP
#define UE4SS_SDK_WBP_Menu_CharacterHPGauge_HPP

class UWBP_Menu_CharacterHPGauge_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0578 (size: 0x8)
    class UCanvasPanel* Canvas_HP;                                                    // 0x0580 (size: 0x8)
    class UImage* Image_96;                                                           // 0x0588 (size: 0x8)
    class UImage* Image_Line;                                                         // 0x0590 (size: 0x8)
    class UProgressBar* ProgressBar_HPGauge;                                          // 0x0598 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxHP;                                             // 0x05A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowHP;                                             // 0x05A8 (size: 0x8)
    class UBP_PalTextBlock_C* TextHP_1;                                               // 0x05B0 (size: 0x8)

    void UpdateHP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void Construct();
    void Destruct();
    void OnInitialized();
    void ExecuteUbergraph_WBP_Menu_CharacterHPGauge(int32 EntryPoint);
}; // Size: 0x5B8

#endif

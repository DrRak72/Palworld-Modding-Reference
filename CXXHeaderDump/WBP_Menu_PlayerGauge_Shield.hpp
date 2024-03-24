#ifndef UE4SS_SDK_WBP_Menu_PlayerGauge_Shield_HPP
#define UE4SS_SDK_WBP_Menu_PlayerGauge_Shield_HPP

class UWBP_Menu_PlayerGauge_Shield_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UCanvasPanel* Canvas_HP;                                                    // 0x0280 (size: 0x8)
    class UImage* Image_Line;                                                         // 0x0288 (size: 0x8)
    class UProgressBar* ProgressBar_ShieldGauge;                                      // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxSield;                                          // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowShield;                                         // 0x02A0 (size: 0x8)
    FFixedPoint64 CachedShieldHP;                                                     // 0x02A8 (size: 0x8)

    void UpdateShieldMaxHP(FFixedPoint64 nowShieldMaxHP);
    void UpdateShield(FFixedPoint64 nowShieldMaxHP, FFixedPoint64 nowShieldHP);
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_Menu_PlayerGauge_Shield(int32 EntryPoint);
}; // Size: 0x2B0

#endif

#ifndef UE4SS_SDK_WBP_IngameBossHP_HPP
#define UE4SS_SDK_WBP_IngameBossHP_HPP

class UWBP_IngameBossHP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_BossDefeat;                                           // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0290 (size: 0x8)
    class UProgressBar* BossGaugeHP;                                                  // 0x0298 (size: 0x8)
    class UProgressBar* BossGaugeHP_Back;                                             // 0x02A0 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_380;                                  // 0x02A8 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Num_HP_00;                              // 0x02B0 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Num_HP_01;                              // 0x02B8 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_ATK;                                     // 0x02C0 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_DEF;                                     // 0x02C8 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_HP;                                      // 0x02D0 (size: 0x8)
    class UCanvasPanel* Canvas_PalCommonDetail;                                       // 0x02D8 (size: 0x8)
    class UImage* Image;                                                              // 0x02E0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02E8 (size: 0x8)
    class UImage* Image_145;                                                          // 0x02F0 (size: 0x8)
    class UImage* Image_Base;                                                         // 0x02F8 (size: 0x8)
    class UImage* Image_Frame;                                                        // 0x0300 (size: 0x8)
    class UOverlay* Overlay_Potencial;                                                // 0x0308 (size: 0x8)
    class UBP_PalTextBlock_C* Text_BossName;                                          // 0x0310 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LvTitle;                                           // 0x0318 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LvValue;                                           // 0x0320 (size: 0x8)
    class UWBP_PalElementIcon_C* WBP_PalElementIcon_Double_00;                        // 0x0328 (size: 0x8)
    class UWBP_PalElementIcon_C* WBP_PalElementIcon_Double_01;                        // 0x0330 (size: 0x8)
    class UWBP_PalElementIcon_C* WBP_PalElementIcon_Single;                           // 0x0338 (size: 0x8)
    class UPalUIDelayGaugeCalculator* DelayGauge;                                     // 0x0340 (size: 0x8)

    void Set Enable Talent Detail(bool isEnable, class UPalIndividualCharacterParameter* Parameter);
    void SetLevelVisibility(bool Visible);
    void SetElement(EPalElementType type1, EPalElementType type2);
    void SetLevel(int32 Level);
    void SetBossPrefix(FText Text);
    void SetHP(int32 nowHP, int32 MaxHP);
    void SetBossName(FText InText);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void ExecuteUbergraph_WBP_IngameBossHP(int32 EntryPoint);
}; // Size: 0x348

#endif

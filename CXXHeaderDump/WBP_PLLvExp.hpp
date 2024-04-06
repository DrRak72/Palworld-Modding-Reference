#ifndef UE4SS_SDK_WBP_PLLvExp_HPP
#define UE4SS_SDK_WBP_PLLvExp_HPP

class UWBP_PLLvExp_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x05A8 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x05B0 (size: 0x8)
    class UProgressBar* Gage_Exp_Back;                                                // 0x05B8 (size: 0x8)
    class UProgressBar* Gauge_Exp;                                                    // 0x05C0 (size: 0x8)
    class UImage* GaugeBarPoint;                                                      // 0x05C8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Exp;                                               // 0x05D0 (size: 0x8)
    class UWBP_LvNum_C* WBP_LvNum;                                                    // 0x05D8 (size: 0x8)
    double closeAnimeDelay;                                                           // 0x05E0 (size: 0x8)
    bool isOpened;                                                                    // 0x05E8 (size: 0x1)
    double delayGaugeTimer;                                                           // 0x05F0 (size: 0x8)
    double delayGaugeTime;                                                            // 0x05F8 (size: 0x8)
    double delayGaugeProgressPerSecond;                                               // 0x0600 (size: 0x8)
    double targetPercent;                                                             // 0x0608 (size: 0x8)
    int32 totalDIsplayExp;                                                            // 0x0610 (size: 0x4)
    double CloseTimer;                                                                // 0x0618 (size: 0x8)

    void UpdateGaugeEdgeImagePosition(double Percent);
    void UpdateLevel(int32 NewLevel);
    void UpdateExp(int32 addExp, int32 oldExp, double nowExpRate);
    void Setup();
    void SetAddExpText(int32 Value);
    void Finished_D0ED7FF7495A5D9266FC3DB1824EA6F6();
    void Finished_45DAD3564BCF5FB025F120A933EEC011();
    void AnmEvent_Open_UI();
    void AnmEvent_Close_UI();
    void OnInitialized();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_PLLvExp(int32 EntryPoint);
}; // Size: 0x620

#endif

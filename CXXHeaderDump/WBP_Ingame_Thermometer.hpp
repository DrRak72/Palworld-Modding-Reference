#ifndef UE4SS_SDK_WBP_Ingame_Thermometer_HPP
#define UE4SS_SDK_WBP_Ingame_Thermometer_HPP

class UWBP_Ingame_Thermometer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_HotToCold;                                            // 0x0280 (size: 0x8)
    class UImage* Base;                                                               // 0x0288 (size: 0x8)
    class UCanvasPanel* CanvasPanelBuff;                                              // 0x0290 (size: 0x8)
    class UImage* Flare;                                                              // 0x0298 (size: 0x8)
    class UImage* Flare2;                                                             // 0x02A0 (size: 0x8)
    class UImage* Hand;                                                               // 0x02A8 (size: 0x8)
    class UImage* IconFire;                                                           // 0x02B0 (size: 0x8)
    class UImage* IconIce;                                                            // 0x02B8 (size: 0x8)
    class UImage* PointFire_1;                                                        // 0x02C0 (size: 0x8)
    class UImage* PointFire_2;                                                        // 0x02C8 (size: 0x8)
    class UImage* PointFire_3;                                                        // 0x02D0 (size: 0x8)
    class UImage* PointIce_1;                                                         // 0x02D8 (size: 0x8)
    class UImage* PointIce_2;                                                         // 0x02E0 (size: 0x8)
    class UImage* PointIce_3;                                                         // 0x02E8 (size: 0x8)
    float ThermomaterAnimeEndTime;                                                    // 0x02F0 (size: 0x4)
    int32 LimitTenperature;                                                           // 0x02F4 (size: 0x4)
    int32 CachedDisplayTemperature;                                                   // 0x02F8 (size: 0x4)
    bool IsFirstSetup;                                                                // 0x02FC (size: 0x1)
    TArray<class UImage*> HeatMaterArray;                                             // 0x0300 (size: 0x10)
    TArray<class UImage*> ColdMaterArray;                                             // 0x0310 (size: 0x10)
    double TargetTemperatureAnimeTime;                                                // 0x0320 (size: 0x8)
    double NowTemperatureAnimtTime;                                                   // 0x0328 (size: 0x8)

    void SetRegistRate(int32 HeatRegist, int32 ColdRegist);
    void SetBodyState(EPalBodyTemperatureState NewState);
    void SetTemperature(int32 NewTenperature);
    void Calc Thermomater Anime Target Time(int32 TargetTenperature, double& TargetTime);
    void AnmEvent_ChangeTemperature(int32 TargetTenperature);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void ExecuteUbergraph_WBP_Ingame_Thermometer(int32 EntryPoint);
}; // Size: 0x330

#endif

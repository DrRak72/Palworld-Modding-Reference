#ifndef UE4SS_SDK_WBP_Ingame_TimeZone_HPP
#define UE4SS_SDK_WBP_Ingame_TimeZone_HPP

class UWBP_Ingame_TimeZone_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_DayToNight;                                           // 0x0280 (size: 0x8)
    class UImage* Gauge;                                                              // 0x0288 (size: 0x8)
    class UImage* IconDay;                                                            // 0x0290 (size: 0x8)
    class UImage* IconNight;                                                          // 0x0298 (size: 0x8)

    void OnInitialized();
    void UpdateTime();
    void ExecuteUbergraph_WBP_Ingame_TimeZone(int32 EntryPoint);
}; // Size: 0x2A0

#endif

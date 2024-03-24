#ifndef UE4SS_SDK_WBP_IngameMenu_MissionList_HPP
#define UE4SS_SDK_WBP_IngameMenu_MissionList_HPP

class UWBP_IngameMenu_MissionList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Check_OffToOn;                                        // 0x0280 (size: 0x8)
    class UImage* Check;                                                              // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Camp_Max;                                          // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Mission;                                           // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MissionNum;                                        // 0x02A0 (size: 0x8)
    bool IsChecked;                                                                   // 0x02A8 (size: 0x1)

    void SetMissionInfo(FText Text, int32 NowProgress, int32 MaxProgress);
    void ToggleCheckMark(bool Enable);
    void SetDisplayMax(bool Enable);
    void Construct();
    void ExecuteUbergraph_WBP_IngameMenu_MissionList(int32 EntryPoint);
}; // Size: 0x2A9

#endif

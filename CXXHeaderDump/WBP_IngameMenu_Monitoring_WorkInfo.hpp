#ifndef UE4SS_SDK_WBP_IngameMenu_Monitoring_WorkInfo_HPP
#define UE4SS_SDK_WBP_IngameMenu_Monitoring_WorkInfo_HPP

class UWBP_IngameMenu_Monitoring_WorkInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_TextColor;                                            // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Category;                                          // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Category_1;                                        // 0x0290 (size: 0x8)
    int32 EffectID;                                                                   // 0x0298 (size: 0x4)
    TArray<FDataTableRowHandle> EffectMsgIDs;                                         // 0x02A0 (size: 0x10)
    TArray<FDataTableRowHandle> EffectLevelMsgIDs;                                    // 0x02B0 (size: 0x10)

    void Construct();
    void ChangeLevelText(int32 NewLevel);
    void ExecuteUbergraph_WBP_IngameMenu_Monitoring_WorkInfo(int32 EntryPoint);
}; // Size: 0x2C0

#endif

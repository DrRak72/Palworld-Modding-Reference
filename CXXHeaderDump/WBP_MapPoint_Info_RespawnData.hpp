#ifndef UE4SS_SDK_WBP_MapPoint_Info_RespawnData_HPP
#define UE4SS_SDK_WBP_MapPoint_Info_RespawnData_HPP

class UWBP_MapPoint_Info_RespawnData_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Name;                                   // 0x0280 (size: 0x8)
    class UImage* Image_Map_Mark_0;                                                   // 0x0288 (size: 0x8)
    class UImage* Image_Map_Mark_1;                                                   // 0x0290 (size: 0x8)
    class UImage* Image_Map_Mark_2;                                                   // 0x0298 (size: 0x8)
    class UImage* Image_Map_Mark_3;                                                   // 0x02A0 (size: 0x8)
    class UImage* Image_Map_Mark_4;                                                   // 0x02A8 (size: 0x8)
    FDataTableRowHandle MsgId;                                                        // 0x02B0 (size: 0x10)
    TArray<class UImage*> Stars;                                                      // 0x02C0 (size: 0x10)

    void Construct();
    void SetRank(int32 Rank);
    void ExecuteUbergraph_WBP_MapPoint_Info_RespawnData(int32 EntryPoint);
}; // Size: 0x2D0

#endif

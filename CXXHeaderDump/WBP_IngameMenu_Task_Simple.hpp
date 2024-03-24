#ifndef UE4SS_SDK_WBP_IngameMenu_Task_Simple_HPP
#define UE4SS_SDK_WBP_IngameMenu_Task_Simple_HPP

class UWBP_IngameMenu_Task_Simple_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UCanvasPanel* Canvas_RemainPalNum;                                          // 0x0280 (size: 0x8)
    class UCanvasPanel* Canvas_TaskDetail;                                            // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Text_BaseCampName;                                      // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_BedInsufficient;                                   // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_BedNum;                                            // 0x02A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalNum;                                            // 0x02A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RemainDIsplayPalNum;                               // 0x02B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_TaskDetail_Base;                                   // 0x02B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Timer;                                             // 0x02C0 (size: 0x8)
    class UVerticalBox* VerticalBox_All;                                              // 0x02C8 (size: 0x8)
    class UVerticalBox* VerticalBox_TaskDetail;                                       // 0x02D0 (size: 0x8)
    class UWBP_IngameMenu_Task_SimpleList_C* WBP_IngameMenu_Task_SimpleList;          // 0x02D8 (size: 0x8)
    class UWBP_IngameMenu_Task_SimpleList_C* WBP_IngameMenu_Task_SimpleList_1;        // 0x02E0 (size: 0x8)
    class UWBP_IngameMenu_Task_SimpleList_C* WBP_IngameMenu_Task_SimpleList_2;        // 0x02E8 (size: 0x8)
    class UWBP_IngameMenu_Task_SimpleList_C* WBP_IngameMenu_Task_SimpleList_3;        // 0x02F0 (size: 0x8)
    class UWBP_IngameMenu_Task_SimpleList_C* WBP_IngameMenu_Task_SimpleList_4;        // 0x02F8 (size: 0x8)
    class UWBP_IngameMenu_TaskMaterial_C* WBP_IngameMenu_TaskMaterial;                // 0x0300 (size: 0x8)
    class UWrapBox* WrapBox_ItemInfo;                                                 // 0x0308 (size: 0x8)
    TArray<class UWBP_IngameMenu_Task_SimpleList_C*> palDetailWidgetArray;            // 0x0310 (size: 0x10)
    FSlateFontInfo TaskDetailBaseFont;                                                // 0x0320 (size: 0x60)
    class UMaterial* completedTaskFontMaterial;                                       // 0x0380 (size: 0x8)
    class UMaterial* incompletedTaskFontMaterial;                                     // 0x0388 (size: 0x8)
    FDataTableRowHandle buildTaskMsgID;                                               // 0x0390 (size: 0x10)
    FDataTableRowHandle workerTaskMsgID;                                              // 0x03A0 (size: 0x10)

    void RemoveAllItemDetail();
    void AddItemInfo(bool isHideWhenZero, FName ItemId, int64 itemNum, int64 gaugeMaxNumBorder);
    void SetVisibilityTaskDetail(ESlateVisibility NewVisibility);
    void Set Pal Slots(TArray<class UPalIndividualCharacterSlot*>& Slots, int32 maxPalNum, int32 Palbed);
    void SetRemainTimer(double remainTime);
    void RemoveTaskDetailText();
    void AddTaslDetailText(FText Text, int32 nowNum, int32 requireNum);
    void Set Task List(FPalBaseCampTaskCheckedData taskCheckedData, FPalBaseCampTaskDataSet taskData);
    void SetRemainDIsplayPalNum(int32 Num);
    void Set Camp Pal and Bed Num(int32 nowPalNum, int32 maxPalNum, int32 BedNum);
    void Set Camp Name(FText BaseCampName);
    void OnInitialized();
    void ExecuteUbergraph_WBP_IngameMenu_Task_Simple(int32 EntryPoint);
}; // Size: 0x3B0

#endif

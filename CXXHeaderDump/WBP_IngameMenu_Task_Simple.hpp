#ifndef UE4SS_SDK_WBP_IngameMenu_Task_Simple_HPP
#define UE4SS_SDK_WBP_IngameMenu_Task_Simple_HPP

class UWBP_IngameMenu_Task_Simple_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UCanvasPanel* Canvas_RemainPalNum;                                          // 0x0280 (size: 0x8)
    class UCanvasPanel* Canvas_TaskDetail;                                            // 0x0288 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Alarm;                                        // 0x0290 (size: 0x8)
    class UHorizontalBox* HorizontalBox_WorkMode;                                     // 0x0298 (size: 0x8)
    class UImage* Image_21;                                                           // 0x02A0 (size: 0x8)
    class UImage* Image_22;                                                           // 0x02A8 (size: 0x8)
    class UImage* Image_23;                                                           // 0x02B0 (size: 0x8)
    class UImage* Image_24;                                                           // 0x02B8 (size: 0x8)
    class UImage* Image_25;                                                           // 0x02C0 (size: 0x8)
    class UImage* Image_454;                                                          // 0x02C8 (size: 0x8)
    class UImage* Image_Icon_AlarmMode;                                               // 0x02D0 (size: 0x8)
    class UImage* Image_Icon_Bed;                                                     // 0x02D8 (size: 0x8)
    class UImage* Image_Icon_Pal;                                                     // 0x02E0 (size: 0x8)
    class UImage* Image_Icon_WorkMode;                                                // 0x02E8 (size: 0x8)
    class UOverlay* Overlay_Alarm;                                                    // 0x02F0 (size: 0x8)
    class UOverlay* Overlay_WorkMode;                                                 // 0x02F8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_AlarmMode;                                         // 0x0300 (size: 0x8)
    class UBP_PalTextBlock_C* Text_BaseCampName;                                      // 0x0308 (size: 0x8)
    class UBP_PalTextBlock_C* Text_BedInsufficient;                                   // 0x0310 (size: 0x8)
    class UBP_PalTextBlock_C* Text_BedNum;                                            // 0x0318 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalNum;                                            // 0x0320 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RemainDIsplayPalNum;                               // 0x0328 (size: 0x8)
    class UBP_PalTextBlock_C* Text_TaskDetail_Base;                                   // 0x0330 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Timer;                                             // 0x0338 (size: 0x8)
    class UBP_PalTextBlock_C* Text_WorkHardType;                                      // 0x0340 (size: 0x8)
    class UVerticalBox* VerticalBox_All;                                              // 0x0348 (size: 0x8)
    class UVerticalBox* VerticalBox_TaskDetail;                                       // 0x0350 (size: 0x8)
    class UWBP_IngameMenu_Task_SimpleList_C* WBP_IngameMenu_Task_SimpleList;          // 0x0358 (size: 0x8)
    class UWBP_IngameMenu_Task_SimpleList_C* WBP_IngameMenu_Task_SimpleList_1;        // 0x0360 (size: 0x8)
    class UWBP_IngameMenu_Task_SimpleList_C* WBP_IngameMenu_Task_SimpleList_2;        // 0x0368 (size: 0x8)
    class UWBP_IngameMenu_Task_SimpleList_C* WBP_IngameMenu_Task_SimpleList_3;        // 0x0370 (size: 0x8)
    class UWBP_IngameMenu_Task_SimpleList_C* WBP_IngameMenu_Task_SimpleList_4;        // 0x0378 (size: 0x8)
    class UWBP_IngameMenu_TaskMaterial_C* WBP_IngameMenu_TaskMaterial;                // 0x0380 (size: 0x8)
    class UWrapBox* WrapBox_ItemInfo;                                                 // 0x0388 (size: 0x8)
    TArray<class UWBP_IngameMenu_Task_SimpleList_C*> palDetailWidgetArray;            // 0x0390 (size: 0x10)
    FSlateFontInfo TaskDetailBaseFont;                                                // 0x03A0 (size: 0x60)
    class UMaterial* completedTaskFontMaterial;                                       // 0x0400 (size: 0x8)
    class UMaterial* incompletedTaskFontMaterial;                                     // 0x0408 (size: 0x8)
    FDataTableRowHandle buildTaskMsgID;                                               // 0x0410 (size: 0x10)
    FDataTableRowHandle workerTaskMsgID;                                              // 0x0420 (size: 0x10)
    TMap<class EPalBaseCampWorkerDirectionBattleType, class FDataTableRowHandle> BattleTypeMsgMap; // 0x0430 (size: 0x50)
    TMap<class EPalBaseCampWorkerDirectionBattleType, class TSoftObjectPtr<UTexture2D>> BattleTypeIconMap; // 0x0480 (size: 0x50)
    TMap<class EPalBaseCampPassiveEffectWorkHardType, class FDataTableRowHandle> WorkHardTypeMsgMap; // 0x04D0 (size: 0x50)
    TMap<class EPalBaseCampPassiveEffectWorkHardType, class TSoftObjectPtr<UTexture2D>> WorkHardTypeIconMap; // 0x0520 (size: 0x50)

    void SetEnableWorkHardInfo(bool isEnable);
    void SetWorkHardType(EPalBaseCampPassiveEffectWorkHardType WorkHardType);
    void SetEnableWorkerBattleTypeInfo(bool isEnable);
    void SetWorkerBattleType(EPalBaseCampWorkerDirectionBattleType BattleType);
    void RemoveAllItemDetail();
    void AddItemInfo(bool isHideWhenZero, FName ItemId, int64 itemNum, int64 gaugeMaxNumBorder);
    void SetVisibilityTaskDetail(ESlateVisibility NewVisibility);
    void Set Pal Slots(TArray<class UPalIndividualCharacterSlot*>& Slots, int32 maxPalNum, int32 Palbed);
    void SetRemainTimer(double remainTime);
    void RemoveTaskDetailText();
    void AddTaslDetailText(FText Text, int32 nowNum, int32 requireNum);
    void Set Task List(FPalBaseCampTaskCheckedData taskCheckedData, FPalBaseCampTaskDataSet TaskData);
    void SetRemainDIsplayPalNum(int32 Num);
    void Set Camp Pal and Bed Num(int32 nowPalNum, int32 maxPalNum, int32 BedNum);
    void Set Camp Name(FText BaseCampName);
    void OnInitialized();
    void ExecuteUbergraph_WBP_IngameMenu_Task_Simple(int32 EntryPoint);
}; // Size: 0x570

#endif

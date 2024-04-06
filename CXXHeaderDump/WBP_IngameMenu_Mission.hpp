#ifndef UE4SS_SDK_WBP_IngameMenu_Mission_HPP
#define UE4SS_SDK_WBP_IngameMenu_Mission_HPP

class UWBP_IngameMenu_Mission_C : public UPalUIBaseCampTaskBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0458 (size: 0x8)
    class UWidgetAnimation* Anm_LevelUp;                                              // 0x0460 (size: 0x8)
    class UWidgetAnimation* Anm_CampInfo;                                             // 0x0468 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LevelNum;                                          // 0x0470 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalNum;                                            // 0x0478 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton;                                      // 0x0480 (size: 0x8)
    class UWBP_IngameMenu_MissionLevelEffect_C* WBP_IngameMenu_MissionLevelEffect;    // 0x0488 (size: 0x8)
    class UWBP_IngameMenu_MissionLevelEffect_C* WBP_IngameMenu_MissionLevelEffect_1;  // 0x0490 (size: 0x8)
    class UWBP_IngameMenu_MissionList_C* WBP_IngameMenu_MissionList;                  // 0x0498 (size: 0x8)
    class UWBP_IngameMenu_MissionList_C* WBP_IngameMenu_MissionList_1;                // 0x04A0 (size: 0x8)
    class UWBP_IngameMenu_MissionList_C* WBP_IngameMenu_MissionList_2;                // 0x04A8 (size: 0x8)
    class UWBP_IngameMenu_MissionList_C* WBP_IngameMenu_MissionList_3;                // 0x04B0 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x04B8 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton;        // 0x04C0 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_1;      // 0x04C8 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_2;      // 0x04D0 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_PalInGameMenuItemSlotButton_3;      // 0x04D8 (size: 0x8)
    FName TabActionName;                                                              // 0x04E0 (size: 0x8)
    TArray<class UWBP_IngameMenu_MissionList_C*> MissionList;                         // 0x04E8 (size: 0x10)
    FPalBaseCampTaskCheckedData ChedckedData;                                         // 0x04F8 (size: 0x60)
    FPalBaseCampTaskDataSet TaskData;                                                 // 0x0558 (size: 0x28)
    FDataTableRowHandle BuildOBjectNumTaskInfoMsgID;                                  // 0x0580 (size: 0x10)
    FDataTableRowHandle WorkerNumTaskInfoMsgID;                                       // 0x0590 (size: 0x10)
    bool CanLevelup;                                                                  // 0x05A0 (size: 0x1)
    int32 LastLevel;                                                                  // 0x05A4 (size: 0x4)
    FTimerHandle TaskUpdateTimer;                                                     // 0x05A8 (size: 0x8)
    bool ButtonActive;                                                                // 0x05B0 (size: 0x1)
    FDataTableRowHandle PalLimitMsgId;                                                // 0x05B8 (size: 0x10)

    class UWidget* BP_GetDesiredFocusTarget();
    void UpdateLevelEffectInfo(int32 Level);
    void UpdateCampInfoMax();
    void UpdateCampInfo();
    void OnUpdateCampStatus(class UPalBaseCampModel* Model);
    void Finished_37D37A8647957B4095DAF6B247AB02F5();
    void OnSetup();
    void Construct();
    void ClosePanel();
    void BndEvt__WBP_IngameMenu_Mission_WBP_CommonButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void Destruct();
    void BndEvt__WBP_IngameMenu_Mission_WBP_Menu_btn_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_IngameMenu_Mission(int32 EntryPoint);
}; // Size: 0x5C8

#endif

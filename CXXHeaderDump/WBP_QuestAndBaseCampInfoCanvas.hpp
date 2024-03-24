#ifndef UE4SS_SDK_WBP_QuestAndBaseCampInfoCanvas_HPP
#define UE4SS_SDK_WBP_QuestAndBaseCampInfoCanvas_HPP

class UWBP_QuestAndBaseCampInfoCanvas_C : public UPalUIInsideBaseCampCanvas
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0518 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Border_Bottom;                                // 0x0520 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Border_Top;                                   // 0x0528 (size: 0x8)
    class UVerticalBox* VerticalBox;                                                  // 0x0530 (size: 0x8)
    class UWBP_BattleEntry_Member_C* WBP_BattleEntry_Member;                          // 0x0538 (size: 0x8)
    class UWBP_IngameMenu_CampLevelUp_C* WBP_IngameMenu_CampLevelUp;                  // 0x0540 (size: 0x8)
    class UWBP_IngameMenu_Task_Simple_C* WBP_IngameMenu_Task_Simple;                  // 0x0548 (size: 0x8)
    class UWBP_IngameMenu_Task_Tutorial_C* WBP_IngameMenu_Task_Tutorial;              // 0x0550 (size: 0x8)
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon;                // 0x0558 (size: 0x8)
    class UWBP_WorkerSimpleDetail_C* WBP_WorkerSimpleDetail;                          // 0x0560 (size: 0x8)
    FTimerHandle tackCheckTimerHandle;                                                // 0x0568 (size: 0x8)
    double TraceLength;                                                               // 0x0570 (size: 0x8)
    TSoftObjectPtr<APalCharacter> NowDisplayInfoCharacter;                            // 0x0578 (size: 0x30)

    void ShowLevelUp(class UPalBaseCampModel* Model);
    void UpdateWindowBorder();
    void ShowBaseCampInfo();
    void HideBaseCampInfo();
    void OnCompleteTutorialQuest(class UPalQuestData* CompletedQuest);
    void OnUpdateTutorialQuest(class UPalQuestData* UpdatedQuest);
    void GetLocalPlayerGroupID(FGuid& GroupID);
    void TraceWorkerPal();
    void OnLeavePalBoxArea();
    void OnEnterPalBoxArea();
    void UpdateItemDetail();
    void UpdatePalDetail();
    void UpdateTask();
    void OnUpdateBaseCampDetail();
    void On Leave Base Camp();
    void OnEnterBaseCamp(class UPalBaseCampModel* Model);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void Construct();
    void Destruct();
    void OnSetup_AfterCreatedPlayer();
    void SetVerticalBoxVisible(bool IsVisible);
    void ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas(int32 EntryPoint);
}; // Size: 0x5A8

#endif

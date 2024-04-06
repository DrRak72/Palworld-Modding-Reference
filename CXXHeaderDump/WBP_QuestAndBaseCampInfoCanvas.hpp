#ifndef UE4SS_SDK_WBP_QuestAndBaseCampInfoCanvas_HPP
#define UE4SS_SDK_WBP_QuestAndBaseCampInfoCanvas_HPP

class UWBP_QuestAndBaseCampInfoCanvas_C : public UPalUIInsideBaseCampCanvas
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0550 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Border_Bottom;                                // 0x0558 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Border_Top;                                   // 0x0560 (size: 0x8)
    class UVerticalBox* VerticalBox;                                                  // 0x0568 (size: 0x8)
    class UWBP_BattleEntry_Member_C* WBP_BattleEntry_Member;                          // 0x0570 (size: 0x8)
    class UWBP_IngameMenu_CampLevelUp_C* WBP_IngameMenu_CampLevelUp;                  // 0x0578 (size: 0x8)
    class UWBP_IngameMenu_Task_Simple_C* WBP_IngameMenu_Task_Simple;                  // 0x0580 (size: 0x8)
    class UWBP_IngameMenu_Task_Tutorial_C* WBP_IngameMenu_Task_Tutorial;              // 0x0588 (size: 0x8)
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon;                // 0x0590 (size: 0x8)
    class UWBP_WorkerSimpleDetail_C* WBP_WorkerSimpleDetail;                          // 0x0598 (size: 0x8)
    FTimerHandle tackCheckTimerHandle;                                                // 0x05A0 (size: 0x8)
    double TraceLength;                                                               // 0x05A8 (size: 0x8)
    TSoftObjectPtr<APalCharacter> NowDisplayInfoCharacter;                            // 0x05B0 (size: 0x30)
    FTimerHandle CollectWorkerDirectorModelTimer;                                     // 0x05E0 (size: 0x8)
    bool Display Tutorial;                                                            // 0x05E8 (size: 0x1)

    void OnChangedUISettings(const FPalOptionUISettings& PrevSettings, const FPalOptionUISettings& NewSettings);
    void OnUpdateBaseCampWorkHard(EPalBaseCampPassiveEffectWorkHardType WorkHardType);
    void OnUpdateWorkerBattleType(EPalBaseCampWorkerDirectionBattleType BattleType);
    void OnTimer_CollectWorkerDirectorModel();
    void ShowLevelUp(class UPalBaseCampModel* Model);
    void UpdateWindowBorder();
    void ShowBaseCampInfo();
    void HideBaseCampInfo();
    void OnCompleteTutorialQuest(class UPalQuestData* CompletedQuest);
    void On Update Tutorial Quest(class UPalQuestData* UpdatedQuest);
    void TraceWorkerPal();
    void OnLeavePalBoxArea();
    void On Enter Pal Box Area();
    void UpdateItemDetail();
    void UpdatePalDetail();
    void UpdateTask();
    void OnUpdateBaseCampDetail();
    void On Leave Base Camp();
    void On Enter Base Camp(class UPalBaseCampModel* Model);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void Construct();
    void Destruct();
    void OnSetup_AfterCreatedPlayer();
    void SetVerticalBoxVisible(bool IsVisible);
    void ExecuteUbergraph_WBP_QuestAndBaseCampInfoCanvas(int32 EntryPoint);
}; // Size: 0x5E9

#endif

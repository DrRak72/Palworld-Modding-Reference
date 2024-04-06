#ifndef UE4SS_SDK_BP_PalGameInstance_HPP
#define UE4SS_SDK_BP_PalGameInstance_HPP

class UBP_PalGameInstance_C : public UPalGameInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0780 (size: 0x8)
    class ULoadingProcessTask* CurrentLoadingTask;                                    // 0x0788 (size: 0x8)
    class UPalHUDDispatchParameter_FadeWidget* LoadingFadeParameter;                  // 0x0790 (size: 0x8)
    TSoftObjectPtr<UWorld> LoadWorld;                                                 // 0x0798 (size: 0x30)
    bool ShowedCharaMake;                                                             // 0x07C8 (size: 0x1)
    TSoftClassPtr<APalCutsceneActor> OpeningActor;                                    // 0x07D0 (size: 0x30)
    FName CutsceneName;                                                               // 0x0800 (size: 0x8)
    class APalCutsceneActor* OpeningCutscene;                                         // 0x0808 (size: 0x8)
    FName flagName;                                                                   // 0x0810 (size: 0x8)
    int32 PlayingID;                                                                  // 0x0818 (size: 0x4)
    FDataTableRowHandle CreateSessionErrorMsgId;                                      // 0x0820 (size: 0x10)

    void SetActivePlayerActor(bool Active);
    void BP_PalGameInstance_AutoGenFunc(bool bResult);
    void Completed_32AFD11A49E65B7255FF4BA375D305CC(bool IsSuccess, FString ErrorStr);
    void StartLoading(const class UWBP_LoadingScreen_Transition_C*& CurrentLoadingWidget);
    void LoadingFinished();
    void ShowCharacterMakeScreen();
    void OnFinishCutscene(bool IsSkipped);
    void SetupGameInit();
    void StartOpening();
    void LoadLevel(const TSoftObjectPtr<UWorld> Level, const FString& Options, bool AutoClose);
    void StartGame(bool bNewGame, bool bListenServer);
    void カスタムイベント(bool bResult);
    void OnShowSelectRespawnMap();
    void SetPlayerSelectMap(bool IsSelecting);
    void OnCloseMap(class UPalHUDDispatchParameterBase* Param);
    void OnCompleteSetup();
    void OverrideLoadMap(const TSoftObjectPtr<UWorld>& World);
    void ExecuteUbergraph_BP_PalGameInstance(int32 EntryPoint);
}; // Size: 0x830

#endif

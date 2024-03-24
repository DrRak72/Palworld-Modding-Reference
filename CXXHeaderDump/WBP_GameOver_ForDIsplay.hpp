#ifndef UE4SS_SDK_WBP_GameOver_ForDIsplay_HPP
#define UE4SS_SDK_WBP_GameOver_ForDIsplay_HPP

class UWBP_GameOver_ForDIsplay_C : public UPalUIGameOver
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWBP_GameOver_Defeat_C* WBP_GameOver_Defeat;                                // 0x0438 (size: 0x8)
    FTimerHandle BlockRespawnTimerHandle;                                             // 0x0440 (size: 0x8)
    bool CanRespawn;                                                                  // 0x0448 (size: 0x1)

    void OnCancelAction();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnClickedRespawnButton();
    void OnFinishedClose();
    void OnFinishedOpen();
    void OnEndedRespawnBlockTime();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void Destruct();
    void ExecuteUbergraph_WBP_GameOver_ForDIsplay(int32 EntryPoint);
}; // Size: 0x449

#endif

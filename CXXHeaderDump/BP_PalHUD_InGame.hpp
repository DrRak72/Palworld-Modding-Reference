#ifndef UE4SS_SDK_BP_PalHUD_InGame_HPP
#define UE4SS_SDK_BP_PalHUD_InGame_HPP

class ABP_PalHUD_InGame_C : public APalHUDInGame
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0608 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0610 (size: 0x8)
    class UWBP_PalLiftItem_C* UMG_LiftItem;                                           // 0x0618 (size: 0x8)
    TMap<class TSubclassOf<UPalUserWidget>, class EPalHUDWidgetPriority> PriorityMap; // 0x0620 (size: 0x50)
    TMap<class TSubclassOf<UPalUserWidget>, class UPalUserWidget*> CreatedWidgetMap;  // 0x0670 (size: 0x50)
    FGuid NewVar;                                                                     // 0x06C0 (size: 0x10)
    bool GameOverUIBinded;                                                            // 0x06D0 (size: 0x1)

    void DisplayHUD_Respawn();
    void HideHUD_ForDeath();
    void UpdateWorldHUDs();
    void OnUpdateLiftSlot();
    void HideLiftItemDisplay();
    void ShowLiftItemDisplay();
    void Setup Lift Item Event();
    void SetupHUD_Internal();
    void OnLoaded_39EEADC54AE57646EA72A79D911211B6(UClass* Loaded);
    void OnLoaded_EF35A3894C280426B58FA0A0D5280930(UClass* Loaded);
    void OnLoaded_01D7FBF3483366434C8293A197BFD965(UClass* Loaded);
    void ReceiveTick(float DeltaSeconds);
    void Initialize();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void AsyncSetupHUDEvent();
    void AsyncLoadAndCreateWidget(TSoftClassPtr<UPalUserWidget> WidgetClass);
    void OnDyingEnd(class APalPlayerCharacter* PlayerCharacter);
    void OnRespawnPlayer(class APalPlayerCharacter* Player);
    void BindGameOverUI();
    void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
    void ExecuteUbergraph_BP_PalHUD_InGame(int32 EntryPoint);
}; // Size: 0x6D1

#endif

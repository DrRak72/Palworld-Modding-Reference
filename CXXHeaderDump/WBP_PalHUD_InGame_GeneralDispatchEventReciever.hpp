#ifndef UE4SS_SDK_WBP_PalHUD_InGame_GeneralDispatchEventReciever_HPP
#define UE4SS_SDK_WBP_PalHUD_InGame_GeneralDispatchEventReciever_HPP

class UWBP_PalHUD_InGame_GeneralDispatchEventReciever_C : public UPalUIInGameGeneralDispatchEventReciever
{
    class UWidgetAnimation* Default_In;                                               // 0x0408 (size: 0x8)
    FGuid WidgetId_BuildingUI;                                                        // 0x0410 (size: 0x10)
    FGuid WidgetId_DismantlingUI;                                                     // 0x0420 (size: 0x10)

    void OpenDismantlingUI_Impl(int32 LastSelectedIndex, bool bFromRadialMenu);
    void OpenDismantlingUIFromRadialMenu(const int32 LastSelectedIndex);
    void OpenBuildingUI_Impl(FName BuildObjectId, bool bFromRadialMenu);
    void OpenBuildingUIFromRadialMenu(const FName BuildObjectId);
    void SetDisablePlayerInputAction(bool Disable);
    void CloseDismantlingUI();
    void OpenDismantlingUI();
    void CloseBuildingUI();
    void OpenBuildingUI(const FName BuildObjectId);
}; // Size: 0x430

#endif

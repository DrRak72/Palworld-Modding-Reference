#ifndef UE4SS_SDK_WBP_TechnologyUI_HPP
#define UE4SS_SDK_WBP_TechnologyUI_HPP

class UWBP_TechnologyUI_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWBP_InventoryEquipment_ItemInfo_C* WBP_InventoryEquipment_ItemInfo;        // 0x0438 (size: 0x8)
    class UWBP_MainMenu_Technology_00_C* WBP_MainMenu_Technology_00;                  // 0x0440 (size: 0x8)
    FDataTableRowHandle UnlockCheckMsgId;                                             // 0x0448 (size: 0x10)
    class UWBP_MainMenu_Technology_Content_C* lastSelectedButton;                     // 0x0458 (size: 0x8)
    FVector2D MouseDragScrollMultiply;                                                // 0x0460 (size: 0x10)
    class UWBP_MainMenu_Technology_Content_C* LastHoveredTechnologyPanel;             // 0x0470 (size: 0x8)
    FWBP_TechnologyUI_COnAllClearedNewFlag OnAllClearedNewFlag;                       // 0x0478 (size: 0x10)
    void OnAllClearedNewFlag(TEnumAsByte<EPalUIInGameMainMenuTabType::Type> Tab);

    void On Unlocked Any Technology();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnUnhoveredTechnology(class UWBP_MainMenu_Technology_Content_C* Widget);
    void OnHoveredTechnology(class UWBP_MainMenu_Technology_Content_C* Widget);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void On Close Dialog(bool bResult);
    void OnClickedTechnology(class UWBP_MainMenu_Technology_Content_C* Widget);
    void Setup();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_3_OnClickedTchnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
    void BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_4_OnHoveredTechnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
    void BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_5_OnUnhoveredTechnology__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
    void Destruct();
    void ExecuteUbergraph_WBP_TechnologyUI(int32 EntryPoint);
    void OnAllClearedNewFlag__DelegateSignature(TEnumAsByte<EPalUIInGameMainMenuTabType::Type> Tab);
}; // Size: 0x488

#endif

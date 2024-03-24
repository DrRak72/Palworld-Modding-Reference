#ifndef UE4SS_SDK_WBP_PlayerRadialMenu_HPP
#define UE4SS_SDK_WBP_PlayerRadialMenu_HPP

class UWBP_PlayerRadialMenu_C : public UPalUIPlayerRadialMenuBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0410 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0418 (size: 0x8)
    class UWBP_CommonRadialMenuBase_C* WBP_CommonRadialMenuBase;                      // 0x0420 (size: 0x8)
    bool isAnyRadialMenuOpened;                                                       // 0x0428 (size: 0x1)
    FName cameraModifierName;                                                         // 0x042C (size: 0x8)
    TEnumAsByte<EPlayerRadialMenuOpenType::Type> OpenedRadialType;                    // 0x0434 (size: 0x1)
    int32 OtomoIndex;                                                                 // 0x0438 (size: 0x4)
    FPalDataTableRowName_UIInputAction DecideMenuAction;                              // 0x043C (size: 0x8)
    FPalUIActionBindData Action Handle;                                               // 0x0444 (size: 0x4)
    FDataTableRowHandle FeedMsgID;                                                    // 0x0448 (size: 0x10)
    FDataTableRowHandle FeedWithNameMsgID;                                            // 0x0458 (size: 0x10)
    FDataTableRowHandle CareMsgID;                                                    // 0x0468 (size: 0x10)
    FDataTableRowHandle CareWithNameMsgID;                                            // 0x0478 (size: 0x10)
    FDataTableRowHandle EmoteTitleMsgID;                                              // 0x0488 (size: 0x10)
    class UWBP_IngameMenuConstruction_Radial_C* ConstructionMenu;                     // 0x0498 (size: 0x8)
    FName InteractDIsableFlagName;                                                    // 0x04A0 (size: 0x8)
    FDataTableRowHandle InstructionAttackMsgID;                                       // 0x04A8 (size: 0x10)
    FDataTableRowHandle InstructionAssistMsgID;                                       // 0x04B8 (size: 0x10)
    FDataTableRowHandle InstructionEscapetMsgID;                                      // 0x04C8 (size: 0x10)
    FDataTableRowHandle EmoteMsgID_0;                                                 // 0x04D8 (size: 0x10)
    FDataTableRowHandle EmoteMsgID_1;                                                 // 0x04E8 (size: 0x10)
    FDataTableRowHandle EmoteMsgID_2;                                                 // 0x04F8 (size: 0x10)
    FDataTableRowHandle EmoteMsgID_3;                                                 // 0x0508 (size: 0x10)
    FDataTableRowHandle EmoteMsgID_4;                                                 // 0x0518 (size: 0x10)
    FDataTableRowHandle EmoteMsgID_5;                                                 // 0x0528 (size: 0x10)
    FDataTableRowHandle EmoteMsgID_6;                                                 // 0x0538 (size: 0x10)
    FDataTableRowHandle EmoteMsgID_7;                                                 // 0x0548 (size: 0x10)
    FDataTableRowHandle SlaughterMsgID;                                               // 0x0558 (size: 0x10)

    void IsPlayerDying(bool& IsDying);
    void IsAnyMenuOpened(bool& isOpened);
    void SetInteractEnable(bool IsInteractEnable);
    void EmptyFunction();
    void HasConstructionMenu(bool& HasMenu);
    void IsPlayerRiding(bool& IsRiding);
    void CloseConstructionMenu();
    void CreateConstructionMenu(class UWBP_IngameMenuConstruction_Radial_C*& createdWidget);
    void OpenConstructionMenu(FName SelectMapObjectId, int32 SelectedIndex);
    void OnPressConstructionMenuButton();
    void OnDecidedEmoteMenu(int32 Index);
    void CreateEmoteMenu();
    void Open Emote Menu();
    void OnPlayerRideOn(class AActor* RideActor);
    void OnDecidedInstruction_Care();
    void OnDecidedInstruction_Feed();
    void OnDecidedPlayerActionMenu(int32 Index);
    void OnOtomoChanged_Inactivated();
    void OnOtomoChanged_Activated();
    void UnbindPlayerActionMenuEvent();
    void BindPlayerActionMenuEvent();
    void CreateInstructionsAdditionalWidget(FText InText, class UWBP_PlayerRadialMenu_MenuContent_C*& createdWidget);
    void OnDamagedPlayer(FPalDamageResult DamageResult);
    void CloseSetup();
    void CloseMenu();
    void CreatePlayerActionMenu();
    void Can Open Player Action Menu(bool& Result);
    void OpenSetup();
    void OpenMenu();
    void OpenPlayerActionMenu();
    void OnPushedAnyWidget(const FGuid& pushedWidgetID);
    void BindOpenPlayerActionMenu();
    void UnbindOpenPlayerActionMenu();
    void SetupEvent();
    void ExecuteUbergraph_WBP_PlayerRadialMenu(int32 EntryPoint);
}; // Size: 0x568

#endif

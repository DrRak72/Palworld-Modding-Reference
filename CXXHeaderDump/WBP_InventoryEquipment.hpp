#ifndef UE4SS_SDK_WBP_InventoryEquipment_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_HPP

class UWBP_InventoryEquipment_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    class UCanvasPanel* Canvas_EquipmentSlots;                                        // 0x05A8 (size: 0x8)
    class UCanvasPanel* Canvas_Inventory;                                             // 0x05B0 (size: 0x8)
    class UCanvasPanel* Canvas_StatusPoint;                                           // 0x05B8 (size: 0x8)
    class UImage* Image_EditStatusPointInputBlocker;                                  // 0x05C0 (size: 0x8)
    class UOverlay* Overlay_CancelStatusPoint;                                        // 0x05C8 (size: 0x8)
    class UOverlay* Overlay_ConfirmStatusPoint;                                       // 0x05D0 (size: 0x8)
    class USizeBox* SizeBox_NameEdit;                                                 // 0x05D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_CharacterName;                                     // 0x05E0 (size: 0x8)
    class UVerticalBox* VerticalBox_Glider;                                           // 0x05E8 (size: 0x8)
    class UVerticalBox* VerticalBox_StatusPointButton;                                // 0x05F0 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton_NameEdit;                             // 0x05F8 (size: 0x8)
    class UWBP_InventoryEquipment_TrashButton_C* WBP_InventoryEquipment_DropButton;   // 0x0600 (size: 0x8)
    class UWBP_InventoryEquipment_GrowsPointButton_C* WBP_InventoryEquipment_GrowsPoint; // 0x0608 (size: 0x8)
    class UWBP_InventoryEquipment_StatusPointButton_C* WBP_InventoryEquipment_StatusPointButton; // 0x0610 (size: 0x8)
    class UWBP_InventoryEquipment_StatusPointButton_C* WBP_InventoryEquipment_StatusPointButton_1; // 0x0618 (size: 0x8)
    class UWBP_InventoryEquipment_StatusPointButton_C* WBP_InventoryEquipment_StatusPointButton_2; // 0x0620 (size: 0x8)
    class UWBP_InventoryEquipment_StatusPointButton_C* WBP_InventoryEquipment_StatusPointButton_3; // 0x0628 (size: 0x8)
    class UWBP_InventoryEquipment_StatusPointButton_C* WBP_InventoryEquipment_StatusPointButton_4; // 0x0630 (size: 0x8)
    class UWBP_InventoryEquipment_StatusPointButton_C* WBP_InventoryEquipment_StatusPointButton_5; // 0x0638 (size: 0x8)
    class UWBP_InventoryEquipment_StatusUpButton_C* WBP_InventoryEquipment_StatusUpButton; // 0x0640 (size: 0x8)
    class UWBP_InventoryEquipment_TabList_C* WBP_InventoryEquipment_TabList;          // 0x0648 (size: 0x8)
    class UWBP_InventoryEquipment_TrashButton_C* WBP_InventoryEquipment_TrashButton_1; // 0x0650 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Accessory_00;        // 0x0658 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Accessory_01;        // 0x0660 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Body;                // 0x0668 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Food_00;             // 0x0670 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Food_01;             // 0x0678 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Food_02;             // 0x0680 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Food_03;             // 0x0688 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Food_04;             // 0x0690 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Glider;              // 0x0698 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Head;                // 0x06A0 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Shield;              // 0x06A8 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Weapon_00;           // 0x06B0 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Weapon_01;           // 0x06B8 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Weapon_02;           // 0x06C0 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Weapon_03;           // 0x06C8 (size: 0x8)
    class UWBP_MainMenu_Money_C* WBP_MainMenu_Money;                                  // 0x06D0 (size: 0x8)
    class UWBP_MainMenu_PalSkillInfo_C* WBP_MainMenu_PalSkillInfo;                    // 0x06D8 (size: 0x8)
    class UWBP_Menu_PlayerEXP_C* WBP_Menu_PlayerEXP;                                  // 0x06E0 (size: 0x8)
    class UWBP_Menu_PlayerGauge_HP_C* WBP_Menu_PlayerGauge_HP;                        // 0x06E8 (size: 0x8)
    class UWBP_Menu_PlayerGauge_Hunger_C* WBP_Menu_PlayerGauge_Hunger;                // 0x06F0 (size: 0x8)
    class UWBP_Menu_PlayerGauge_Shield_C* WBP_Menu_PlayerGauge_Shield;                // 0x06F8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_StatusPointCancel;        // 0x0700 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_StatusPointConfirm;       // 0x0708 (size: 0x8)
    class UWBP_PalPlayerInframeRender_C* WBP_PalPlayerInframeRender;                  // 0x0710 (size: 0x8)
    class UWBP_PalPlayerInventoryScrollList_C* WBP_PalPlayerInventoryScrollList;      // 0x0718 (size: 0x8)
    class UWBP_PlayerInventoryWeightInfo_C* WBP_PlayerInventoryWeightInfo;            // 0x0720 (size: 0x8)
    class UWBP_StatusBuffTimerContainer_C* WBP_StatusBuffTimerContainer;              // 0x0728 (size: 0x8)
    TArray<class UWBP_PalInGameMenuItemSlotButton_C*> WeaponLoadoutSlotArray;         // 0x0730 (size: 0x10)
    TArray<class UWBP_PalInGameMenuItemSlotButton_C*> FoodSlotArray;                  // 0x0740 (size: 0x10)
    class UBP_InGameMenuInventoryModel_C* Model;                                      // 0x0750 (size: 0x8)
    TArray<class UWBP_PalInGameMenuItemSlotButton_C*> PlayerArmorSlotArray;           // 0x0758 (size: 0x10)
    TArray<class UWBP_PalInGameMenuItemSlotButton_C*> DropSlotArray;                  // 0x0768 (size: 0x10)
    FWBP_InventoryEquipment_COnClickedItemDrop OnClickedItemDrop;                     // 0x0778 (size: 0x10)
    void OnClickedItemDrop();
    FWBP_InventoryEquipment_COnClickedItemDestroy OnClickedItemDestroy;               // 0x0788 (size: 0x10)
    void OnClickedItemDestroy();
    int32 CachedUnusedStatusPoint;                                                    // 0x0798 (size: 0x4)
    TMap<FName, int32> SimulateUsePoint;                                              // 0x07A0 (size: 0x50)
    int32 AllSimulateUsePoint;                                                        // 0x07F0 (size: 0x4)
    FWBP_InventoryEquipment_COnConfirmStatusPointEdit OnConfirmStatusPointEdit;       // 0x07F8 (size: 0x10)
    void OnConfirmStatusPointEdit(TMap<FName, int32> PointMap);
    bool IsSimulatingStatusPoint;                                                     // 0x0808 (size: 0x1)
    FWBP_InventoryEquipment_COnRequestSwapEquipment OnRequestSwapEquipment;           // 0x0810 (size: 0x10)
    void OnRequestSwapEquipment(EPalPlayerEquipItemSlotType EquipType);
    FWBP_InventoryEquipment_COnClickedSortButton OnClickedSortButton;                 // 0x0820 (size: 0x10)
    void OnClickedSortButton();
    class UWBP_PalItemSlotButtonBase_C* CurrentSlot;                                  // 0x0830 (size: 0x8)
    FDataTableRowHandle UseTechnologyItemMsgID;                                       // 0x0838 (size: 0x10)
    FDataTableRowHandle UseAncientTechnologyItemMsgID;                                // 0x0848 (size: 0x10)
    FDataTableRowHandle UseStatusPointItemMsgID;                                      // 0x0858 (size: 0x10)
    FDataTableRowHandle CantUseStatusPointItemMsgID;                                  // 0x0868 (size: 0x10)
    FDataTableRowHandle FoodSlotTitleMsgID;                                           // 0x0878 (size: 0x10)
    FDataTableRowHandle FoodSlotInfoMsgID;                                            // 0x0888 (size: 0x10)
    FDataTableRowHandle FoodSlotRequireMsgID;                                         // 0x0898 (size: 0x10)
    class UPalItemSlot* CachedUseTechnologyPointItemSLot;                             // 0x08A8 (size: 0x8)
    class UPalItemSlot* CachedUseGainStatusPointItemSlot;                             // 0x08B0 (size: 0x8)
    TMap<class FName, class UWBP_InventoryEquipment_StatusPointButton_C*> StatusPointButtonMap; // 0x08B8 (size: 0x50)
    TMap<FName, TEnumAsByte<E_PalUIStatusDIsplayParameter::Type>> StatusEnumMap;      // 0x0908 (size: 0x50)
    TMap<TEnumAsByte<E_PalUIStatusDIsplayParameter::Type>, FDataTableRowHandle> DescMsgIdMap; // 0x0958 (size: 0x50)
    FWBP_InventoryEquipment_COnClickedChangePlayerNameButton OnClickedChangePlayerNameButton; // 0x09A8 (size: 0x10)
    void OnClickedChangePlayerNameButton();
    FDataTableRowHandle UseReturnTorBaseCampItemMsgID;                                // 0x09B8 (size: 0x10)
    FDataTableRowHandle CannotUseReturnTorBaseCampItemMsgID;                          // 0x09C8 (size: 0x10)
    class UPalItemSlot* CachedUseReturnToBaseCampItemSLot;                            // 0x09D8 (size: 0x8)
    FDataTableRowHandle CannotUseReturnTorBaseCampItemByActionMsgID;                  // 0x09E0 (size: 0x10)

    void OnClosedDummy(bool bResult);
    void NoProcess(bool bResult);
    void OpenReturnToBaseCampDialog(class UPalItemSlot* StaticItemId);
    void OnUpdateNickName_Binded(FString NewNickName);
    void OnUnhoverStatusButton(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
    void OnHoverStatusButton(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
    void OpenOverlayItemSlotWindow(class UWidget* RelativeWidget, FVector2D AnchorPosition, FVector2D overrideInfoWidgetAlignment, FText Title, FText Info, FText SubInfo);
    void OpenOverlayStatusInfo(class UWidget* RelativeWidget, FVector2D AnchorPosition, FVector2D overrideInfoWidgetAlignment, FText Title, FText Desc, TEnumAsByte<E_PalUIStatusDIsplayParameter::Type> Status);
    void OnUnHoverFoodSlot(class UWBP_PalItemSlotButtonBase_C* Button);
    void OnHoverFoodSlot(class UWBP_PalItemSlotButtonBase_C* Button);
    void On Update Player Status Point();
    class UWidget* CustomNavi_ToStatusUp(EUINavigation Navigation);
    void SetupFoodEquipSlot();
    void SetEnableGliderSlot(bool isEnable);
    void UnsetCurrentSlot(class UWBP_PalItemSlotButtonBase_C* Button);
    void SetCurrentSlot(class UWBP_PalItemSlotButtonBase_C* Button);
    void GetStatusPointTopFocusTarget(class UWidget*& TargetWidget);
    void Update Player Status();
    void Update Unused Status Point();
    void SetupStatusPointButtons();
    void On Update Player Buff();
    void On Update Player Level(int32 NewLevel);
    void OnClickedStatusPointDecrementButton(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
    void OnClickedStatusPointIncrementButton(class UWBP_InventoryEquipment_StatusPointButton_C* Button);
    class UWidget* CustomNavi_ToGliderSlot(EUINavigation Navigation);
    class UWidget* CustomNavi_ToAccessorySlot2(EUINavigation Navigation);
    class UWidget* CustomNavi_ToFoodSlotRight(EUINavigation Navigation);
    class UWidget* CustomNavi_ToFoodSlotLeft(EUINavigation Navigation);
    void OnClickedDropSlot(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void Get Inventory Last Focus Target(class UWidget*& TargetWidget);
    void On Closed Gain Status Point Item Use Dialog(bool bResult);
    void OnClosedReturnToBaseCampItemUseDialog(bool bResult);
    void OnClosedAncientTechnologyItemUseDialog(bool bResult);
    void OnClosedTechnologyItemUseDialog(bool bResult);
    void OnClosedItemUseSelectWindow(class UPalHUDDispatchParameterBase* UPalHUDDispatchParam);
    void Open Item Use Window(class UPalItemSlot* CurrentItemSlot);
    void End Edit Status Point Mode(bool IsCancel);
    void Change to Edit Status Point Mode();
    void SetupDropSlot();
    void SetInventoryWeight(double nowWeight, double maxWeight);
    void OnClickedFoodSlot(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void OnClickedArmorSlot(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void OnClickedWeaponLoadout(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void Setup Equipment Slot();
    void SetupCharacterName();
    void Setup(class UBP_InGameMenuInventoryModel_C* Model);
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_InventoryEquipment_WBP_InventoryEquipment_TabList_K2Node_ComponentBoundEvent_1_OnClickedSortButton__DelegateSignature();
    void BndEvt__WBP_InventoryEquipment_WBP_InventoryEquipment_TabList_K2Node_ComponentBoundEvent_2_OnChangedFocusIndex__DelegateSignature(int32 OldIndex, int32 newIndex, class UWidget* FocusTargetWidget);
    void BndEvt__WBP_InventoryEquipment_WBP_InventoryEquipment_DropButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_InventoryEquipment_WBP_InventoryEquipment_TrashButton_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void BndEvt__WBP_InventoryEquipment_WBP_PalInvisibleButton_StatusPointConfirm_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_InventoryEquipment_WBP_PalInvisibleButton_StatusPointCancel_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_InventoryEquipment_WBP_InventoryEquipment_StatusUpButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
    void OnUddateMaxWeight(float maxWeight);
    void Destruct();
    void ConfirmStatusPoint();
    void OnArmorSlotUpdate(class UPalItemSlot* Slot, EPalPlayerEquipItemSlotType slotType);
    void BndEvt__WBP_InventoryEquipment_WBP_CommonButton_NameEdit_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void EmptyEvent(bool IsConfirm);
    void ExecuteUbergraph_WBP_InventoryEquipment(int32 EntryPoint);
    void OnClickedChangePlayerNameButton__DelegateSignature();
    void OnClickedSortButton__DelegateSignature();
    void OnRequestSwapEquipment__DelegateSignature(EPalPlayerEquipItemSlotType EquipType);
    void OnConfirmStatusPointEdit__DelegateSignature(TMap<FName, int32> PointMap);
    void OnClickedItemDestroy__DelegateSignature();
    void OnClickedItemDrop__DelegateSignature();
}; // Size: 0x9F0

#endif

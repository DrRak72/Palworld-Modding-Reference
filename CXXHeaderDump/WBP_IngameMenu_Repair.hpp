#ifndef UE4SS_SDK_WBP_IngameMenu_Repair_HPP
#define UE4SS_SDK_WBP_IngameMenu_Repair_HPP

class UWBP_IngameMenu_Repair_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UCanvasPanel* CanvasPanelDurable;                                           // 0x0280 (size: 0x8)
    class UImage* DurableFrameB;                                                      // 0x0288 (size: 0x8)
    class UImage* Image_1007;                                                         // 0x0290 (size: 0x8)
    class UImage* Image_TargetItemIcon;                                               // 0x0298 (size: 0x8)
    class UOverlay* OverlayMaterialHead;                                              // 0x02A0 (size: 0x8)
    class UProgressBar* ProgressBar_Durability;                                       // 0x02A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RepairTargetItemName;                              // 0x02B0 (size: 0x8)
    class UVerticalBox* VerticalBox_TargetItemInfo;                                   // 0x02B8 (size: 0x8)
    class UWBP_IngameMenu_RepairAllButton_C* WBP_IngameMenu_RepairAllButton;          // 0x02C0 (size: 0x8)
    class UWBP_IngameMenu_RepairButton_C* WBP_IngameMenu_RepairButton;                // 0x02C8 (size: 0x8)
    class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem; // 0x02D0 (size: 0x8)
    class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem_1; // 0x02D8 (size: 0x8)
    class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem_2; // 0x02E0 (size: 0x8)
    class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem_3; // 0x02E8 (size: 0x8)
    class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem_4; // 0x02F0 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_BodyArmor;           // 0x02F8 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_HeadArmor;           // 0x0300 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Shield;              // 0x0308 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Weapon_00;           // 0x0310 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Weapon_01;           // 0x0318 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Weapon_02;           // 0x0320 (size: 0x8)
    class UWBP_PalInGameMenuItemSlotButton_C* WBP_ItemSlotButton_Weapon_03;           // 0x0328 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0330 (size: 0x8)
    class UWBP_PalPlayerInventoryScrollList_C* WBP_PalPlayerInventoryScrollList;      // 0x0338 (size: 0x8)
    FWBP_IngameMenu_Repair_COnClickedCloseButton OnClickedCloseButton;                // 0x0340 (size: 0x10)
    void OnClickedCloseButton();
    TArray<class UWBP_PalInGameMenuItemSlotButton_C*> WeaponSlotArray;                // 0x0350 (size: 0x10)
    FWBP_IngameMenu_Repair_COnClickedAnyItemSlot OnClickedAnyItemSlot;                // 0x0360 (size: 0x10)
    void OnClickedAnyItemSlot(class UPalItemSlot* itemSlot);
    TArray<class UWBP_IngameMenuConstruction_InfoItem_C*> MaterialInfoArray;          // 0x0370 (size: 0x10)
    FWBP_IngameMenu_Repair_COnClickedRepairButton OnClickedRepairButton;              // 0x0380 (size: 0x10)
    void OnClickedRepairButton();
    FWBP_IngameMenu_Repair_COnClickedRepairAllButton OnClickedRepairAllButton;        // 0x0390 (size: 0x10)
    void OnClickedRepairAllButton();

    void OnUpdateItemDurability(double MaxDurability, double NowDurability, class UWBP_PalItemSlotButtonBase_C* selfWidget);
    void SetEnableRepairAllButton(bool isEnableButton);
    void HideRepairItemInfo();
    void DisplayTargetItem(class UPalItemSlot* TargetItemSlot);
    void SetEnableRepairButton(bool isEnableButton);
    void DisplayRequireMaterials(TArray<FPalStaticItemIdAndNum>& Materials);
    void IsRepairable();
    void OnClickedInventory_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void GetDefaultFocusTarget(class UWidget*& TargetWidget);
    void OnClickedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* SlotWidget);
    void SetupItemSlot();
    void Setup();
    void BndEvt__WBP_IngameMenu_Repair_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Repair_WBP_PalPlayerInventoryScrollList_K2Node_ComponentBoundEvent_1_OnLeftClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void OnInitialized();
    void BndEvt__WBP_IngameMenu_Repair_WBP_ItemSlotButton_Weapon_00_K2Node_ComponentBoundEvent_2_OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void BndEvt__WBP_IngameMenu_Repair_WBP_ItemSlotButton_Weapon_01_K2Node_ComponentBoundEvent_3_OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void BndEvt__WBP_IngameMenu_Repair_WBP_ItemSlotButton_Weapon_02_K2Node_ComponentBoundEvent_4_OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void BndEvt__WBP_IngameMenu_Repair_WBP_ItemSlotButton_Weapon_03_K2Node_ComponentBoundEvent_5_OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void BndEvt__WBP_IngameMenu_Repair_WBP_ItemSlotButton_HeadArmor_K2Node_ComponentBoundEvent_6_OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void BndEvt__WBP_IngameMenu_Repair_WBP_ItemSlotButton_BodyArmor_K2Node_ComponentBoundEvent_7_OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void BndEvt__WBP_IngameMenu_Repair_WBP_ItemSlotButton_Shield_K2Node_ComponentBoundEvent_8_OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void BndEvt__WBP_IngameMenu_Repair_WBP_IngameMenu_RepairButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Repair_WBP_IngameMenu_RepairAllButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_IngameMenu_Repair(int32 EntryPoint);
    void OnClickedRepairAllButton__DelegateSignature();
    void OnClickedRepairButton__DelegateSignature();
    void OnClickedAnyItemSlot__DelegateSignature(class UPalItemSlot* itemSlot);
    void OnClickedCloseButton__DelegateSignature();
}; // Size: 0x3A0

#endif

#ifndef UE4SS_SDK_WBP_RepairEquipment_HPP
#define UE4SS_SDK_WBP_RepairEquipment_HPP

class UWBP_RepairEquipment_C : public UPalUIRepairItemBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0438 (size: 0x8)
    class UCircularThrobber* CircularThrobber_20;                                     // 0x0440 (size: 0x8)
    class UImage* Image_13;                                                           // 0x0448 (size: 0x8)
    class UOverlay* Overlay_Repairing;                                                // 0x0450 (size: 0x8)
    class UWBP_IngameMenu_Repair_C* WBP_IngameMenu_Repair;                            // 0x0458 (size: 0x8)
    TArray<class UPalItemSlot*> RepairTargetItemSlots;                                // 0x0460 (size: 0x10)
    FPalDataTableRowName_UIInputAction RepairInputAction;                             // 0x0470 (size: 0x8)
    FPalUIActionBindData RepairInputActionHandle;                                     // 0x0478 (size: 0x4)
    FDataTableRowHandle RepairFailedMsgID;                                            // 0x0480 (size: 0x10)
    FTimerHandle RepairTimeoutTimerhandle;                                            // 0x0490 (size: 0x8)
    FPalDataTableRowName_UIInputAction RepairAllInputAction;                          // 0x0498 (size: 0x8)
    TArray<class UPalItemSlot*> CollectedAllRepairableSlotArray;                      // 0x04A0 (size: 0x10)
    TArray<FPalStaticItemIdAndNum> CollectedAllRepairMaterials;                       // 0x04B0 (size: 0x10)
    bool CanAllRepair;                                                                // 0x04C0 (size: 0x1)

    void TryRepairAll();
    void OnClosedRepairAllWindow(class UPalHUDDispatchParameterBase* Param);
    void OpenRepairAllWindow();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnTimer_TimeoutRepair();
    void EndRepair(bool IsSuccess);
    void StartRepair();
    void Setup();
    void RefreshRepairable();
    void Construct();
    void BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_0_OnClickedCloseButton__DelegateSignature();
    void OnSetup();
    void BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_1_OnClickedAnyItemSlot__DelegateSignature(class UPalItemSlot* itemSlot);
    void BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_2_OnClickedRepairButton__DelegateSignature();
    void OnRecievedRepairResult(bool IsSuccess);
    void Destruct();
    void BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_3_OnClickedRepairAllButton__DelegateSignature();
    void ExecuteUbergraph_WBP_RepairEquipment(int32 EntryPoint);
}; // Size: 0x4C1

#endif

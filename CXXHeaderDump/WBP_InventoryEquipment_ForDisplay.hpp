#ifndef UE4SS_SDK_WBP_InventoryEquipment_ForDisplay_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_ForDisplay_HPP

class UWBP_InventoryEquipment_ForDisplay_C : public UPalUIInventoryEquipment
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0458 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x0460 (size: 0x8)
    class UWBP_InventoryEquipment_C* WBP_InventoryEquipment;                          // 0x0468 (size: 0x8)
    class UBP_InGameMenuInventoryModel_C* Model;                                      // 0x0470 (size: 0x8)
    FPalDataTableRowName_UIInputAction SimulateStatusPointInput;                      // 0x0478 (size: 0x8)
    FPalDataTableRowName_UIInputAction ConfirmStatusPointInput;                       // 0x0480 (size: 0x8)

    void OnEndGlide();
    void OnStartGlide();
    void Try Start Simulate Status Point();
    void Setup Static Input Action();
    void CancelSimulateStatusPoint();
    void IsSimulatingStatusPoint(bool& IsSimulating);
    class UWidget* BP_GetDesiredFocusTarget();
    void OnUpdateInventoryWeight(float nowWeight);
    void Setup(class UBP_InGameMenuInventoryModel_C* Model);
    void Construct();
    void BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_0_OnClickedItemDrop__DelegateSignature();
    void BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_1_OnClickedItemDestroy__DelegateSignature();
    void BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_2_OnConfirmStatusPointEdit__DelegateSignature(TMap<FName, int32> PointMap);
    void BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_3_OnRequestSwapEquipment__DelegateSignature(EPalPlayerEquipItemSlotType EquipType);
    void BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_4_OnClickedSortButton__DelegateSignature();
    void Destruct();
    void ExecuteUbergraph_WBP_InventoryEquipment_ForDisplay(int32 EntryPoint);
}; // Size: 0x488

#endif

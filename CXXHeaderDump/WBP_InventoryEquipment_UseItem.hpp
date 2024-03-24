#ifndef UE4SS_SDK_WBP_InventoryEquipment_UseItem_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_UseItem_HPP

class UWBP_InventoryEquipment_UseItem_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0438 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;        // 0x0440 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0448 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList;                                      // 0x0450 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_1;                                    // 0x0458 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_2;                                    // 0x0460 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_3;                                    // 0x0468 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_4;                                    // 0x0470 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_5;                                    // 0x0478 (size: 0x8)
    class UWBP_PalInGameMenuItemSlot_C* WBP_PalInGameMenuItemSlot;                    // 0x0480 (size: 0x8)
    TArray<class UWBP_Menu_PalList_C*> OtomoList;                                     // 0x0488 (size: 0x10)
    class UPalItemSlot* CurrentSlot;                                                  // 0x0498 (size: 0x8)
    FWBP_InventoryEquipment_UseItem_CEndUseItem EndUseItem;                           // 0x04A0 (size: 0x10)
    void EndUseItem();
    class UPalStaticItemDataBase* CurrentItem;                                        // 0x04B0 (size: 0x8)
    int32 CachedConsumeAmount;                                                        // 0x04B8 (size: 0x4)
    bool IsWazaMachine;                                                               // 0x04BC (size: 0x1)
    bool WazaMachineUsed;                                                             // 0x04BD (size: 0x1)
    bool MedicineUsed;                                                                // 0x04BE (size: 0x1)
    FDataTableRowHandle SkillLearnedMsgIDHandle;                                      // 0x04C0 (size: 0x10)
    FName TabActionName;                                                              // 0x04D0 (size: 0x8)
    FDataTableRowHandle SickCuredMsgIDHandle;                                         // 0x04D8 (size: 0x10)
    class UPalIndividualCharacterParameter* TempIndividualParameter;                  // 0x04E8 (size: 0x8)

    void TryPlayEatSound(FName StaticItemId, class UPalIndividualCharacterParameter* TargetCharacterParameter);
    class UWidget* BP_GetDesiredFocusTarget();
    void Setup(class UPalItemSlot* SelectedItemSlot);
    void OnInitialized();
    void UseItemTo(class UPalIndividualCharacterHandle* Individual);
    void OnUseupItem();
    void ResetCacheUseAmount(class UPalItemSlot* targetSlot);
    void OnSetup();
    void OnWazaMachineUsed(class UPalIndividualCharacterParameter* IndividualParameter, EPalWazaID WazaID);
    void Refresh(bool IsConfirm);
    void BndEvt__WBP_InventoryEquipment_UseItem_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void Destruct();
    void OnMedineUsed();
    void ShowPalDetail(class UPalIndividualCharacterHandle* Individual);
    void HidePalDetail();
    void ExecuteUbergraph_WBP_InventoryEquipment_UseItem(int32 EntryPoint);
    void EndUseItem__DelegateSignature();
}; // Size: 0x4F0

#endif

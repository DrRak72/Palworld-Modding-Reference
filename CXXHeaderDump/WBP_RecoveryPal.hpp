#ifndef UE4SS_SDK_WBP_RecoveryPal_HPP
#define UE4SS_SDK_WBP_RecoveryPal_HPP

class UWBP_RecoveryPal_C : public UPalUIRecoverPalBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0438 (size: 0x8)
    class UBP_PalTextBlock_C* Text_BaseCampName;                                      // 0x0440 (size: 0x8)
    class UWBP_IngameMenu_Base_C* WBP_IngameMenu_Base;                                // 0x0448 (size: 0x8)
    class UWBP_IngameMenu_PalBox_C* WBP_IngameMenu_PalBox;                            // 0x0450 (size: 0x8)
    class UWBP_PalCharacterScrollList_C* WBP_RecoverPalList;                          // 0x0458 (size: 0x8)
    FDataTableRowHandle BgTitleMsgID;                                                 // 0x0460 (size: 0x10)

    class UWidget* BP_GetDesiredFocusTarget();
    void WBP_RecoveryPal_AutoGenFunc(class UWBP_PalCharacterSlotButtonBase_C* createdSlot);
    void Construct();
    void OnSetup();
    void BndEvt__WBP_RecoveryPal_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_0_OnClickedPartySlot__DelegateSignature(class UPalIndividualCharacterSlot* targetSlot);
    void RecoverSlotClickedEvent(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void OnInitialized();
    void BndEvt__WBP_RecoveryPal_WBP_RecoverPalList_K2Node_ComponentBoundEvent_1_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_RecoveryPal_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_2_OnAnySlotHovered__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void BndEvt__WBP_RecoveryPal_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_3_OnClickedCloseButton__DelegateSignature();
    void ExecuteUbergraph_WBP_RecoveryPal(int32 EntryPoint);
}; // Size: 0x470

#endif

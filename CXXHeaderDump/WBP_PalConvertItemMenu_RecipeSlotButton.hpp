#ifndef UE4SS_SDK_WBP_PalConvertItemMenu_RecipeSlotButton_HPP
#define UE4SS_SDK_WBP_PalConvertItemMenu_RecipeSlotButton_HPP

class UWBP_PalConvertItemMenu_RecipeSlotButton_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Anm_rarity;                                               // 0x0410 (size: 0x8)
    class UWidgetAnimation* Anm_Select;                                               // 0x0418 (size: 0x8)
    class UImage* Base;                                                               // 0x0420 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Num;                                              // 0x0428 (size: 0x8)
    class UCanvasPanel* CanvasPanelRarety;                                            // 0x0430 (size: 0x8)
    class UImage* FocusBase;                                                          // 0x0438 (size: 0x8)
    class UImage* FocusFrame;                                                         // 0x0440 (size: 0x8)
    class UImage* Frame_Focus_Flare;                                                  // 0x0448 (size: 0x8)
    class UImage* Image_Disable;                                                      // 0x0450 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Num;                                               // 0x0458 (size: 0x8)
    class UWBP_InventoryEquipment_PalIcon_C* WBP_InventoryEquipment_PalIcon;          // 0x0460 (size: 0x8)
    class UWBP_PalInGameMenuItemIcon_C* WBP_PalInGameMenuItemIcon;                    // 0x0468 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0470 (size: 0x8)
    FWBP_PalConvertItemMenu_RecipeSlotButton_COnClickSlot OnClickSlot;                // 0x0478 (size: 0x10)
    void OnClickSlot(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* selfWidget);
    FName RecipeID;                                                                   // 0x0488 (size: 0x8)
    FWBP_PalConvertItemMenu_RecipeSlotButton_COnHoveredSlot OnHoveredSlot;            // 0x0490 (size: 0x10)
    void OnHoveredSlot(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* selfWidget);
    FWBP_PalConvertItemMenu_RecipeSlotButton_COnUnhoveredSlot OnUnhoveredSlot;        // 0x04A0 (size: 0x10)
    void OnUnhoveredSlot(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* selfWidget);
    bool Selected;                                                                    // 0x04B0 (size: 0x1)
    TMap<FName, int32> MatMap;                                                        // 0x04B8 (size: 0x50)
    FName Product Id;                                                                 // 0x0508 (size: 0x8)
    FTimerHandle UpdateSufficientTimer;                                               // 0x0510 (size: 0x8)

    void UpdateSufficient();
    void SetPalGearIcon(FName ItemId);
    void SetUnselect();
    void GetRecipeId(FName& RecipeID);
    void Setup(FName RecipeID);
    void BndEvt__WBP_PalConvertItemMenu_RecipeSlotButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_PalConvertItemMenu_RecipeSlotButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_PalConvertItemMenu_RecipeSlotButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Destruct();
    void ExecuteUbergraph_WBP_PalConvertItemMenu_RecipeSlotButton(int32 EntryPoint);
    void OnUnhoveredSlot__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* selfWidget);
    void OnHoveredSlot__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* selfWidget);
    void OnClickSlot__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* selfWidget);
}; // Size: 0x518

#endif

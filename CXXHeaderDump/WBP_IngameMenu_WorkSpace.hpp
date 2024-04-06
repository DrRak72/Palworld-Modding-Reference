#ifndef UE4SS_SDK_WBP_IngameMenu_WorkSpace_HPP
#define UE4SS_SDK_WBP_IngameMenu_WorkSpace_HPP

class UWBP_IngameMenu_WorkSpace_C : public UPalUIPaldex
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0490 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Amount;                                 // 0x0498 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_77;                                   // 0x04A0 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Name;                                   // 0x04A8 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_NoRecipe;                               // 0x04B0 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Num;                                    // 0x04B8 (size: 0x8)
    class UCanvasPanel* CanvasPanelIcon;                                              // 0x04C0 (size: 0x8)
    class UCanvasPanel* CanvasPanelMaterialText;                                      // 0x04C8 (size: 0x8)
    class UCanvasPanel* CanvasPanelSelect;                                            // 0x04D0 (size: 0x8)
    class UCheckBox* CheckBox;                                                        // 0x04D8 (size: 0x8)
    class UImage* DurableFrameB;                                                      // 0x04E0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_ProductNum;                                   // 0x04E8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_TransportCheckBox;                            // 0x04F0 (size: 0x8)
    class UImage* Image_97;                                                           // 0x04F8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_FilterContent;                                     // 0x0500 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemNumTitle;                                      // 0x0508 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemNumValue;                                      // 0x0510 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ManMonth_Value;                                    // 0x0518 (size: 0x8)
    class UWBP_ConvertItemMenuScrollList_C* WBP_ConvertItemMenuScrollList;            // 0x0520 (size: 0x8)
    class UWBP_IngameMenu_WorkSpace_StartButton_C* WBP_IngameMenu_StartButton;        // 0x0528 (size: 0x8)
    class UWBP_IngameMenu_WorkSpace_NumArrow_C* WBP_IngameMenu_WorkSpace_Add;         // 0x0530 (size: 0x8)
    class UWBP_IngameMenu_WorkSpace_NumArrow_C* WBP_IngameMenu_WorkSpace_Add10;       // 0x0538 (size: 0x8)
    class UWBP_IngameMenu_WorkSpace_NumArrow_C* WBP_IngameMenu_WorkSpace_Sub;         // 0x0540 (size: 0x8)
    class UWBP_IngameMenu_WorkSpace_NumArrow_C* WBP_IngameMenu_WorkSpace_Sub10;       // 0x0548 (size: 0x8)
    class UWBP_InventoryEquipment_ItemInfo_Tecnology_C* WBP_InventoryEquipment_ItemInfo_Tecnology; // 0x0550 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0558 (size: 0x8)
    class UWBP_PalInGameMenuItemIcon_C* WBP_PalInGameMenuItemIcon;                    // 0x0560 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0568 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_TransportCheck;           // 0x0570 (size: 0x8)
    class UBP_PalUIConvertItemModel_C* Convert Item Model;                            // 0x0578 (size: 0x8)
    int32 CurrentProductAmount;                                                       // 0x0580 (size: 0x4)
    FName InputActionName_Max;                                                        // 0x0584 (size: 0x8)
    bool IsSelectingProductNumFlag;                                                   // 0x058C (size: 0x1)
    class UWBP_PalConvertItemMenu_RecipeSlotButton_C* LastSelectedSlot;               // 0x0590 (size: 0x8)
    FName InputActionName_Start;                                                      // 0x0598 (size: 0x8)
    FName InputActionName_Cancel;                                                     // 0x05A0 (size: 0x8)
    TArray<FPalStaticItemIdAndNum> TmpComtrollableBlueprintInfo;                      // 0x05A8 (size: 0x10)
    FTimerHandle UpdateRecipeTimer;                                                   // 0x05B8 (size: 0x8)
    FName InputActionName_CanTransportOut;                                            // 0x05C0 (size: 0x8)

    void OnUpdateCanTransportOut(bool bOn);
    void FilteringRecipe(TArray<FName>& recipeIDArray, TArray<FName>& FilteredArray);
    void OnCancelInput();
    void IsSelectingProductNum(bool& IsSelecting);
    void FilterSkillUnlocker(TArray<FName>& Recipes, FName WorkBenchId, TArray<FName>& FilteredRecipes);
    class UWidget* BP_GetDesiredFocusTarget();
    void Update Recipe Detail();
    void OnClickedRecipeSlot(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Slot);
    void OnUnhoveredRecipeSlot(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Slot);
    void OnHoveredRecipeSlot(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Slot);
    void Setup();
    void OnSetup();
    void BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameMenu_WorkSpace_NumArrow_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameMenu_WorkSpace_Sub_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void SetMax();
    void BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameMenu_StartButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameMenu_WorkSpace_Add10_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_WorkSpace_WBP_IngameMenu_WorkSpace_Sub10_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_WorkSpace_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void StartProduce();
    void BndEvt__WBP_InGameMainMenu_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void ToggleCanTransportOut();
    void Destruct();
    void BndEvt__WBP_IngameMenu_WorkSpace_WBP_PalInvisibleButton_TransportCheck_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_IngameMenu_WorkSpace(int32 EntryPoint);
}; // Size: 0x5C8

#endif

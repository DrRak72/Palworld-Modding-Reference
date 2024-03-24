#ifndef UE4SS_SDK_WBP_MainMenu_Technology_Content_HPP
#define UE4SS_SDK_WBP_MainMenu_Technology_Content_HPP

class UWBP_MainMenu_Technology_Content_C : public UPalUIRecipeTechnologyDetailButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Anm_Ancient_LockToUnlock;                                 // 0x0410 (size: 0x8)
    class UWidgetAnimation* Anm_Ancient_Lock;                                         // 0x0418 (size: 0x8)
    class UWidgetAnimation* Anm_Ancient_UnLock;                                       // 0x0420 (size: 0x8)
    class UWidgetAnimation* Anm_LockToUnlock;                                         // 0x0428 (size: 0x8)
    class UWidgetAnimation* Anm_Disable;                                              // 0x0430 (size: 0x8)
    class UWidgetAnimation* Anm_Unlock;                                               // 0x0438 (size: 0x8)
    class UWidgetAnimation* Anm_Lock;                                                 // 0x0440 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0448 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Category;                               // 0x0450 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0458 (size: 0x8)
    class UImage* Image_Icon_TechPoint_0;                                             // 0x0460 (size: 0x8)
    class UImage* Image_Icon_TechPoint_1;                                             // 0x0468 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x0470 (size: 0x8)
    class UOverlay* Overlay_Prereq;                                                   // 0x0478 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_TechnologyName_Lock;                       // 0x0480 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_TechnologyName_Unlock;                     // 0x0488 (size: 0x8)
    class UCanvasPanel* Text;                                                         // 0x0490 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Prereq;                                            // 0x0498 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RequireBossDefeat;                                 // 0x04A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RequirePointNum;                                   // 0x04A8 (size: 0x8)
    class UWBP_MainMenu_NewDot_C* WBP_MainMenu_NewDot;                                // 0x04B0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x04B8 (size: 0x8)
    FPalDataTableRowName_RecipeTechnologyData Technology;                             // 0x04C0 (size: 0x8)
    FWBP_MainMenu_Technology_Content_COnHoveredButton OnHoveredButton;                // 0x04C8 (size: 0x10)
    void OnHoveredButton(class UWBP_MainMenu_Technology_Content_C* Widget);
    FWBP_MainMenu_Technology_Content_COnUnhoveredButton OnUnhoveredButton;            // 0x04D8 (size: 0x10)
    void OnUnhoveredButton(class UWBP_MainMenu_Technology_Content_C* Widget);
    FWBP_MainMenu_Technology_Content_COnClickedButton OnClickedButton;                // 0x04E8 (size: 0x10)
    void OnClickedButton(class UWBP_MainMenu_Technology_Content_C* Widget);
    bool isFocused;                                                                   // 0x04F8 (size: 0x1)
    FDataTableRowHandle UnlockBuildObjectInfoMsgId;                                   // 0x0500 (size: 0x10)
    FDataTableRowHandle UnlockRecipeInfoMsgId;                                        // 0x0510 (size: 0x10)
    FDataTableRowHandle MaskUnknownMsgId;                                             // 0x0520 (size: 0x10)
    FName BindedTechnologyName;                                                       // 0x0530 (size: 0x8)
    bool ShouldMask;                                                                  // 0x0538 (size: 0x1)
    bool Is Boss Technology;                                                          // 0x0539 (size: 0x1)
    FDataTableRowHandle BuildingMsgId;                                                // 0x0540 (size: 0x10)
    FDataTableRowHandle ItemMsgId;                                                    // 0x0550 (size: 0x10)

    void SetShouldMaskSkillUnlock(TArray<FName>& ItemRecipes);
    void UpdateButtonDetail();
    void OnUnhovered_Internal();
    void isUnlockable(bool& isUnlockable);
    void IsUnlocked(bool& IsUnlocked);
    void GetBindedTechnologyName(FName& technologyName);
    void Setup(FName technologyName);
    void OnHovered_Internal();
    void AnmEvent_Focus();
    void AnmEvent_Unfocus();
    void AnmEvent_UpdateDetail();
    void AnmEvent_Unlock();
    void PreConstruct(bool IsDesignTime);
    void OnInitialized();
    void BndEvt__WBP_MainMenu_Technology_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Technology_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Technology_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_MainMenu_Technology_Content(int32 EntryPoint);
    void OnClickedButton__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
    void OnUnhoveredButton__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
    void OnHoveredButton__DelegateSignature(class UWBP_MainMenu_Technology_Content_C* Widget);
}; // Size: 0x560

#endif

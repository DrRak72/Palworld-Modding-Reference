#ifndef UE4SS_SDK_WBP_ConvertItemMenuScrollListBlock_HPP
#define UE4SS_SDK_WBP_ConvertItemMenuScrollListBlock_HPP

class UWBP_ConvertItemMenuScrollListBlock_C : public UPalUserWidget
{
    class UWrapBox* WrapBox;                                                          // 0x0408 (size: 0x8)
    FWBP_ConvertItemMenuScrollListBlock_COnClickedAnyContent OnClickedAnyContent;     // 0x0410 (size: 0x10)
    void OnClickedAnyContent(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    FWBP_ConvertItemMenuScrollListBlock_COnHoveredAnyContent OnHoveredAnyContent;     // 0x0420 (size: 0x10)
    void OnHoveredAnyContent(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    FWBP_ConvertItemMenuScrollListBlock_COnUnhoveredAnyContent OnUnhoveredAnyContent; // 0x0430 (size: 0x10)
    void OnUnhoveredAnyContent(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);

    void GetFocusTarget(class UWidget*& Target);
    void FocusTopContent();
    void OnUnhovered_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* selftWidget);
    void OnHovered_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* selfWidget);
    void OnClicked_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    void SetCategoryName(FText categoryNameText);
    void CreateRecipeIconWidget(FName RecipeID, class UWBP_PalConvertItemMenu_RecipeSlotButton_C*& createdWidget);
    void AddRecipeList(TArray<FName>& recipeIDArray);
    void OnUnhoveredAnyContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    void OnHoveredAnyContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    void OnClickedAnyContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
}; // Size: 0x440

#endif

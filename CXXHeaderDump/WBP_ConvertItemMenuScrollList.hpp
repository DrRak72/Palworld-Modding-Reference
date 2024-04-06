#ifndef UE4SS_SDK_WBP_ConvertItemMenuScrollList_HPP
#define UE4SS_SDK_WBP_ConvertItemMenuScrollList_HPP

class UWBP_ConvertItemMenuScrollList_C : public UWBP_PalCommonScrollList_C
{
    FWBP_ConvertItemMenuScrollList_COnClickedContent OnClickedContent;                // 0x0440 (size: 0x10)
    void OnClickedContent(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    FWBP_ConvertItemMenuScrollList_COnHoverdContent OnHoverdContent;                  // 0x0450 (size: 0x10)
    void OnHoverdContent(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    FWBP_ConvertItemMenuScrollList_COnUnhoveredContent OnUnhoveredContent;            // 0x0460 (size: 0x10)
    void OnUnhoveredContent(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    FWBP_ConvertItemMenuScrollList_COnFocusedContent OnFocusedContent;                // 0x0470 (size: 0x10)
    void OnFocusedContent(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    FWBP_ConvertItemMenuScrollList_COnUnfocusedContent OnUnfocusedContent;            // 0x0480 (size: 0x10)
    void OnUnfocusedContent(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    TMap<class EPalBuildObjectTypeB, class FName> MsgIDMap;                           // 0x0490 (size: 0x50)
    TArray<class UWBP_BuildObjectScrollListBlock_C*> Blocks;                          // 0x04E0 (size: 0x10)

    void GetFocusTarget(class UWidget*& Target);
    void FocusWithRecipeID(FName RecipeID);
    void Focus();
    void OnUnfocusedContent_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    void OnFocusedContent_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    void OnUnhoveredContent_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    void OnHoveredContent_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    void OnClickedContent_Internal(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    void CreateBlock(TArray<FName>& recipeIDArray, class UWBP_ConvertItemMenuScrollListBlock_C*& createdBlock);
    void AddRecipeSet(TArray<FName>& recipeIDArray, class UWBP_ConvertItemMenuScrollListBlock_C*& createdBlock);
    void OnUnfocusedContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    void OnFocusedContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    void OnUnhoveredContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    void OnHoverdContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
    void OnClickedContent__DelegateSignature(class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget);
}; // Size: 0x4F0

#endif

#ifndef UE4SS_SDK_WBP_BuildObjectScrollListBlock_HPP
#define UE4SS_SDK_WBP_BuildObjectScrollListBlock_HPP

class UWBP_BuildObjectScrollListBlock_C : public UPalUserWidget
{
    class UWBP_ConstructionListContent_C* WBP_ConstructionListContent;                // 0x0408 (size: 0x8)
    FWBP_BuildObjectScrollListBlock_COnClickedAnyContent OnClickedAnyContent;         // 0x0410 (size: 0x10)
    void OnClickedAnyContent(class UWBP_PalBuildObjectThumbnailButton_C* Widget);
    FWBP_BuildObjectScrollListBlock_COnHoveredAnyContent OnHoveredAnyContent;         // 0x0420 (size: 0x10)
    void OnHoveredAnyContent(class UWBP_PalBuildObjectThumbnailButton_C* Widget);
    FWBP_BuildObjectScrollListBlock_COnUnhoveredAnyContent OnUnhoveredAnyContent;     // 0x0430 (size: 0x10)
    void OnUnhoveredAnyContent(class UWBP_PalBuildObjectThumbnailButton_C* Widget);
    EPalBuildObjectTypeB TypeB;                                                       // 0x0440 (size: 0x1)
    EPalBuildObjectTypeA TypeA;                                                       // 0x0441 (size: 0x1)

    void GetFocusTarget(class UWidget*& Target);
    void GetBuildObjectTypeA(EPalBuildObjectTypeA& NewParam);
    void FocusTopContent();
    void GetBuildObjectTypeB(EPalBuildObjectTypeB& TypeB);
    void OnUnhovered_Internal(class UWBP_PalBuildObjectThumbnailButton_C* selftWidget);
    void OnHovered_Internal(class UWBP_PalBuildObjectThumbnailButton_C* selfWidget);
    void OnClicked_Internal(class UWBP_PalBuildObjectThumbnailButton_C* selfWidget);
    void SetCategoryName(FText categoryNameText);
    void CreateBuildObjectIconWidget(FPalBuildObjectData BuildObjectData, class UWBP_PalBuildObjectThumbnailButton_C*& createdWidget);
    void AddBuildObjectList(TArray<FPalBuildObjectData>& buildObjectDataArray, EPalBuildObjectTypeB TypeB, EPalBuildObjectTypeA TypeA);
    void OnUnhoveredAnyContent__DelegateSignature(class UWBP_PalBuildObjectThumbnailButton_C* Widget);
    void OnHoveredAnyContent__DelegateSignature(class UWBP_PalBuildObjectThumbnailButton_C* Widget);
    void OnClickedAnyContent__DelegateSignature(class UWBP_PalBuildObjectThumbnailButton_C* Widget);
}; // Size: 0x442

#endif

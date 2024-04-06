#ifndef UE4SS_SDK_WBP_PalBuildObjectThumbnailButton_HPP
#define UE4SS_SDK_WBP_PalBuildObjectThumbnailButton_HPP

class UWBP_PalBuildObjectThumbnailButton_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0410 (size: 0x8)
    class UCanvasPanel* CanvasPanel_121;                                              // 0x0418 (size: 0x8)
    class UImage* Image;                                                              // 0x0420 (size: 0x8)
    class UImage* Image_130;                                                          // 0x0428 (size: 0x8)
    class UBP_PalTextBlock_C* NameText;                                               // 0x0430 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;                                // 0x0438 (size: 0x8)
    FVector2D CanvasSize;                                                             // 0x0440 (size: 0x10)
    FWBP_PalBuildObjectThumbnailButton_COnClicked OnClicked;                          // 0x0450 (size: 0x10)
    void OnClicked(class UWBP_PalBuildObjectThumbnailButton_C* selfWidget);
    FWBP_PalBuildObjectThumbnailButton_COnHovered OnHovered;                          // 0x0460 (size: 0x10)
    void OnHovered(class UWBP_PalBuildObjectThumbnailButton_C* selfWidget);
    FVector2D DefaultCanvasSize;                                                      // 0x0470 (size: 0x10)
    FPalBuildObjectData BuildObjectData;                                              // 0x0480 (size: 0x80)
    FWBP_PalBuildObjectThumbnailButton_COnUnhovered OnUnhovered;                      // 0x0500 (size: 0x10)
    void OnUnhovered(class UWBP_PalBuildObjectThumbnailButton_C* selftWidget);
    FSlateFontInfo DefaultFontInfo;                                                   // 0x0510 (size: 0x60)
    double Scale;                                                                     // 0x0570 (size: 0x8)

    FVector2D GetScaledCanvasSize();
    void SetScale(double NewScale);
    void SetBaseImageVisibility(ESlateVisibility InVisibility);
    void GetBuildObjectData(FPalBuildObjectData& BuildObjectData);
    void OnUnhoveredButton_Internal();
    void OnClickedButton_Internal();
    void OnHoveredButton_Internal();
    void SetButtonFocus();
    void Setup(FPalBuildObjectData BuildObjectData);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_PalBuildObjectThumbnailButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_PalBuildObjectThumbnailButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_PalBuildObjectThumbnailButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalBuildObjectThumbnailButton(int32 EntryPoint);
    void OnUnhovered__DelegateSignature(class UWBP_PalBuildObjectThumbnailButton_C* selftWidget);
    void OnHovered__DelegateSignature(class UWBP_PalBuildObjectThumbnailButton_C* selfWidget);
    void OnClicked__DelegateSignature(class UWBP_PalBuildObjectThumbnailButton_C* selfWidget);
}; // Size: 0x578

#endif

#ifndef UE4SS_SDK_WBP_IngameMenu_WorkSpace_NumArrow_HPP
#define UE4SS_SDK_WBP_IngameMenu_WorkSpace_NumArrow_HPP

class UWBP_IngameMenu_WorkSpace_NumArrow_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Anm_SelectArrow;                                          // 0x0410 (size: 0x8)
    class UImage* ArrowHover;                                                         // 0x0418 (size: 0x8)
    class UImage* DoubleArrowHover;                                                   // 0x0420 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0428 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher;                                            // 0x0430 (size: 0x8)
    FWBP_IngameMenu_WorkSpace_NumArrow_COnClicked OnClicked;                          // 0x0438 (size: 0x10)
    void OnClicked();
    FName InputActionName;                                                            // 0x0448 (size: 0x8)
    bool DoubleArrow;                                                                 // 0x0450 (size: 0x1)

    void AnmEvent_Trigger();
    void OnArrowClicked();
    void Construct();
    void BndEvt__WBP_IngameMenu_WorkSpace_NumArrow_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_WorkSpace_NumArrow_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_WorkSpace_NumArrow_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_IngameMenu_WorkSpace_NumArrow(int32 EntryPoint);
    void OnClicked__DelegateSignature();
}; // Size: 0x451

#endif

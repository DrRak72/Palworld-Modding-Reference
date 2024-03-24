#ifndef UE4SS_SDK_WBP_MenuESC_Button_HPP
#define UE4SS_SDK_WBP_MenuESC_Button_HPP

class UWBP_MenuESC_Button_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UImage* Base;                                                               // 0x0288 (size: 0x8)
    class UImage* Frame;                                                              // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Main;                                              // 0x0298 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02A0 (size: 0x8)
    FWBP_MenuESC_Button_COnClicked OnClicked;                                         // 0x02A8 (size: 0x10)
    void OnClicked(TEnumAsByte<E_PalEscMenuType::Type> MenuType);
    TEnumAsByte<E_PalEscMenuType::Type> MenuType;                                     // 0x02B8 (size: 0x1)
    TMap<TEnumAsByte<E_PalEscMenuType::Type>, FDataTableRowHandle> textIDMap;         // 0x02C0 (size: 0x50)

    void AnmEvent_Focus();
    void AnmEvent_Reset();
    void Construct();
    void BndEvt__WBP_MenuESC_Button_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MenuESC_Button_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MenuESC_Button_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnInitialized();
    void AnmEvent_Normal();
    void ExecuteUbergraph_WBP_MenuESC_Button(int32 EntryPoint);
    void OnClicked__DelegateSignature(TEnumAsByte<E_PalEscMenuType::Type> MenuType);
}; // Size: 0x310

#endif

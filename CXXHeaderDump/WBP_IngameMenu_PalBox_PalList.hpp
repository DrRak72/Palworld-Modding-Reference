#ifndef UE4SS_SDK_WBP_IngameMenu_PalBox_PalList_HPP
#define UE4SS_SDK_WBP_IngameMenu_PalBox_PalList_HPP

class UWBP_IngameMenu_PalBox_PalList_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    class UWidgetAnimation* Anm_Pal_Alive;                                            // 0x05A8 (size: 0x8)
    class UWidgetAnimation* Anm_Pal_Dead;                                             // 0x05B0 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x05B8 (size: 0x8)
    class UWidgetAnimation* Anm_Focus;                                                // 0x05C0 (size: 0x8)
    class UWidgetAnimation* Anm_Normal;                                               // 0x05C8 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_LvText;                                 // 0x05D0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_119;                                              // 0x05D8 (size: 0x8)
    class UProgressBar* Gauge_HP;                                                     // 0x05E0 (size: 0x8)
    class UProgressBar* Gauge_Hunger;                                                 // 0x05E8 (size: 0x8)
    class UImage* Image_HP_Bar;                                                       // 0x05F0 (size: 0x8)
    class UImage* Image_Huger_Bar;                                                    // 0x05F8 (size: 0x8)
    class UImage* PalIcon;                                                            // 0x0600 (size: 0x8)
    class URetainerBox* RetainerBox_0;                                                // 0x0608 (size: 0x8)
    class UBP_PalTextBlock_C* Text_HP;                                                // 0x0610 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LevelValue;                                        // 0x0618 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxHP;                                             // 0x0620 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NickName;                                          // 0x0628 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0630 (size: 0x8)
    TSoftObjectPtr<UPalIndividualCharacterParameter> lastBindedIndividualParam;       // 0x0638 (size: 0x30)
    FWBP_IngameMenu_PalBox_PalList_COnClicked OnClicked;                              // 0x0668 (size: 0x10)
    void OnClicked(class UPalIndividualCharacterSlot* targetSlot);
    FWBP_IngameMenu_PalBox_PalList_COnHovered OnHovered;                              // 0x0678 (size: 0x10)
    void OnHovered(class UPalIndividualCharacterSlot* Slot);
    class UPalIndividualCharacterSlot* targetSlot;                                    // 0x0688 (size: 0x8)
    FWBP_IngameMenu_PalBox_PalList_COnUnhovered OnUnhovered;                          // 0x0690 (size: 0x10)
    void OnUnhovered();

    void WBP_IngameMenu_PalBox_PalList_AutoGenFunc(class UPalIndividualCharacterSlot* Slot, class UPalIndividualCharacterHandle* LastHandle);
    void BindFromSlot(class UPalIndividualCharacterSlot* targetSlot);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void DraggedButtonEvent(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    void Update Level(int32 NewLevel);
    void UpdateHunger(double nowHunger, double nowMaxHunger);
    void UpdateNickname(FString NewNickName);
    void UpdateHP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void SetEmpty();
    void Setup(class UPalIndividualCharacterSlot* targetSlot);
    void AnmEvent_FocusToNormal();
    void AnmEvent_NormalToFocus();
    void AnmEvent_Reset();
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_PalBox_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_IngameMenu_PalBox_PalList(int32 EntryPoint);
    void OnUnhovered__DelegateSignature();
    void OnHovered__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void OnClicked__DelegateSignature(class UPalIndividualCharacterSlot* targetSlot);
}; // Size: 0x6A0

#endif

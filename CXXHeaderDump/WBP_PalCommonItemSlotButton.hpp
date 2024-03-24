#ifndef UE4SS_SDK_WBP_PalCommonItemSlotButton_HPP
#define UE4SS_SDK_WBP_PalCommonItemSlotButton_HPP

class UWBP_PalCommonItemSlotButton_C : public UWBP_PalItemSlotButtonBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0568 (size: 0x8)
    class UWidgetAnimation* Anm_UnselectToSelect;                                     // 0x0570 (size: 0x8)
    class UWidgetAnimation* Anm_Unlock;                                               // 0x0578 (size: 0x8)
    class UWidgetAnimation* Anm_Lock;                                                 // 0x0580 (size: 0x8)
    class UWidgetAnimation* Anm_Push;                                                 // 0x0588 (size: 0x8)
    class UWidgetAnimation* Anm_Unfocus;                                              // 0x0590 (size: 0x8)
    class UWidgetAnimation* Anm_Focus;                                                // 0x0598 (size: 0x8)
    class UImage* FocusedFrame;                                                       // 0x05A0 (size: 0x8)
    class UImage* FocusedFrame_1;                                                     // 0x05A8 (size: 0x8)
    class UImage* PushEff;                                                            // 0x05B0 (size: 0x8)
    class UImage* PushEff_1;                                                          // 0x05B8 (size: 0x8)
    class UWBP_PalCommonItemSlot_C* WBP_PalCommonItemSlot;                            // 0x05C0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x05C8 (size: 0x8)

    void RegisterItemSlotWidget(class UWBP_PalItemSlotBase_C*& itemSlotWidget);
    void RegisterButton(class UCommonButtonBase*& Button);
    void AnmEvent_Lock();
    void AnmEvent_Unlock();
    void AnmEvent_Focus();
    void AnmEvent_Unfocus();
    void AnmEvent_Push();
    void OnInitialized();
    void PlayFocusAnim(class UWBP_PalItemSlotButtonBase_C* Widget);
    void PlayUnfocusAnim(class UWBP_PalItemSlotButtonBase_C* Widget);
    void PlayPushAnim(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void PlayDropAnim(class UWBP_PalItemSlotButtonBase_C* Widget);
    void LiftedEvent(int32 LiftNum, class UWBP_PalItemSlotButtonBase_C* Widget);
    void DraggedEvent(class UWBP_PalItemSlotButtonBase_C* Widget);
    void ExecuteUbergraph_WBP_PalCommonItemSlotButton(int32 EntryPoint);
}; // Size: 0x5D0

#endif

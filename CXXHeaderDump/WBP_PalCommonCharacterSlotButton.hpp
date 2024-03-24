#ifndef UE4SS_SDK_WBP_PalCommonCharacterSlotButton_HPP
#define UE4SS_SDK_WBP_PalCommonCharacterSlotButton_HPP

class UWBP_PalCommonCharacterSlotButton_C : public UWBP_PalCharacterSlotButtonBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04A8 (size: 0x8)
    class UWidgetAnimation* Anm_UnselectToSelect;                                     // 0x04B0 (size: 0x8)
    class UWidgetAnimation* Anm_Push;                                                 // 0x04B8 (size: 0x8)
    class UCanvasPanel* CanvasPanel_36;                                               // 0x04C0 (size: 0x8)
    class UImage* Check_0;                                                            // 0x04C8 (size: 0x8)
    class UImage* Check_1;                                                            // 0x04D0 (size: 0x8)
    class UImage* FocusedFrame;                                                       // 0x04D8 (size: 0x8)
    class UImage* PushEff;                                                            // 0x04E0 (size: 0x8)
    class UWBP_PalCommonCharacterSlot_C* WBP_PalCommonCharacterSlot;                  // 0x04E8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x04F0 (size: 0x8)

    void SetOverrideSize(FVector2D newSize);
    void RegisterCharacterSlotWidget(class UWBP_PalCharacterSlotBase_C*& characterSlotWidget);
    void RegisterButton(class UCommonButtonBase*& Button);
    void PlayUnfocusAnim(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void Destruct();
    void SetEnable(bool isEnable);
    void AnmEvent_BasePal(bool Enable);
    void AnmEvent_ConsumePal(bool Enable);
    void PlayFocusAnim(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalCommonCharacterSlotButton(int32 EntryPoint);
}; // Size: 0x4F8

#endif

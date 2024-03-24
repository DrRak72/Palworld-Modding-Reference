#ifndef UE4SS_SDK_WBP_RecoverPalStateIndicator_HPP
#define UE4SS_SDK_WBP_RecoverPalStateIndicator_HPP

class UWBP_RecoverPalStateIndicator_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0410 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton;      // 0x0418 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_1;    // 0x0420 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_2;    // 0x0428 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_3;    // 0x0430 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_4;    // 0x0438 (size: 0x8)
    class UWBP_PalCommonWindow_BlueBorder_C* WBP_PalCommonWindow_BlueBorder;          // 0x0440 (size: 0x8)
    class UPalUIRecoverPalStatusIndicatorParameter* Parameter;                        // 0x0448 (size: 0x8)

    void GetSlotWidget(int32 Index, class UWBP_PalCommonCharacterSlotButton_C*& SlotWidget);
    void Initialize();
    void OnSetup();
    void ExecuteUbergraph_WBP_RecoverPalStateIndicator(int32 EntryPoint);
}; // Size: 0x450

#endif

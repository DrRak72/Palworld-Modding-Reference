#ifndef UE4SS_SDK_WBP_RakLogistics_FilterButton_HPP
#define UE4SS_SDK_WBP_RakLogistics_FilterButton_HPP

class UWBP_RakLogistics_FilterButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UTextBlock* ButtonText;                                                     // 0x0280 (size: 0x8)
    class UButton* FilterButton;                                                      // 0x0288 (size: 0x8)
    FText ButtonTextIn;                                                               // 0x0290 (size: 0x18)
    uint8 EnumByte;                                                                   // 0x02A8 (size: 0x1)
    FWBP_RakLogistics_FilterButton_CClickDispatcher ClickDispatcher;                  // 0x02B0 (size: 0x10)
    void ClickDispatcher(class UWBP_RakLogistics_FilterButton_C* Button);
    class UVerticalBox* List;                                                         // 0x02C0 (size: 0x8)

    void Construct();
    void BndEvt__WBP_RakLogistics_FilterButton_FilterButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_RakLogistics_FilterButton(int32 EntryPoint);
    void ClickDispatcher__DelegateSignature(class UWBP_RakLogistics_FilterButton_C* Button);
}; // Size: 0x2C8

#endif

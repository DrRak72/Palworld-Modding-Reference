#ifndef UE4SS_SDK_WBP_RakLogistics_Main_HPP
#define UE4SS_SDK_WBP_RakLogistics_Main_HPP

class UWBP_RakLogistics_Main_C : public UCommonActivatableWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UComboBoxString* BaseItemsValue;                                            // 0x03D0 (size: 0x8)
    class UButton* Button_54;                                                         // 0x03D8 (size: 0x8)
    class UImage* HeaderSpacer;                                                       // 0x03E0 (size: 0x8)
    class UImage* Image;                                                              // 0x03E8 (size: 0x8)
    class USpinBox* MergeDistanceValue;                                               // 0x03F0 (size: 0x8)
    class UButton* SaveButton;                                                        // 0x03F8 (size: 0x8)
    class UCheckBox* SortContainersValue;                                             // 0x0400 (size: 0x8)
    class USpinBox* TickIntervalValue;                                                // 0x0408 (size: 0x8)
    class UComboBoxString* WorldItemsValue;                                           // 0x0410 (size: 0x8)
    class ABP_ClientReplicator_C* ClientRep;                                          // 0x0418 (size: 0x8)
    bool InitComplete;                                                                // 0x0420 (size: 0x1)

    void SetRep(class ABP_ClientReplicator_C* ClientRep);
    void UpdateVars();
    FEventReply On_Image_MouseButtonDown_0(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void InpActEvt_Escape_K2Node_InputKeyEvent_0(FKey Key);
    void PreConstruct(bool IsDesignTime);
    void BP_OnActivated();
    void BP_OnDeactivated();
    void On_Image_MouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void BndEvt__WBP_RakLogistics_Main_SaveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_RakLogistics_Main(int32 EntryPoint);
}; // Size: 0x421

#endif

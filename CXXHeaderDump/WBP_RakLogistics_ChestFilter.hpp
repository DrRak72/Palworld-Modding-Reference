#ifndef UE4SS_SDK_WBP_RakLogistics_ChestFilter_HPP
#define UE4SS_SDK_WBP_RakLogistics_ChestFilter_HPP

class UWBP_RakLogistics_ChestFilter_C : public UCommonActivatableWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UVerticalBox* ActiveAFilters;                                               // 0x03D0 (size: 0x8)
    class UVerticalBox* ActiveBFilters;                                               // 0x03D8 (size: 0x8)
    class UButton* Button_54;                                                         // 0x03E0 (size: 0x8)
    class UButton* ClearButton;                                                       // 0x03E8 (size: 0x8)
    class UImage* HeaderSpacer;                                                       // 0x03F0 (size: 0x8)
    class UImage* Image;                                                              // 0x03F8 (size: 0x8)
    class UVerticalBox* InactiveAFilters;                                             // 0x0400 (size: 0x8)
    class UVerticalBox* InactiveBFilters;                                             // 0x0408 (size: 0x8)
    class UButton* SaveButton;                                                        // 0x0410 (size: 0x8)
    class ABP_ClientReplicator_C* ClientRep;                                          // 0x0418 (size: 0x8)
    bool InitComplete;                                                                // 0x0420 (size: 0x1)
    TMap<class UVerticalBox*, class UVerticalBox*> OppositeList;                      // 0x0428 (size: 0x50)
    FGuid Container ID;                                                               // 0x0478 (size: 0x10)
    class UPalMapObjectConcreteModelBase* Chest Model;                                // 0x0488 (size: 0x8)
    TArray<EPalItemTypeA> NewTypeA;                                                   // 0x0490 (size: 0x10)
    TArray<EPalItemTypeB> NewTypeB;                                                   // 0x04A0 (size: 0x10)

    void SortStrArr(const TArray<FString>& SourceArray, TArray<FString>& Sorted);
    void SortBox(class UVerticalBox* List);
    void ButtonClicked(class UWBP_RakLogistics_FilterButton_C* Button);
    void Update Lists(FContainerFilterStruct FilterStruct, FGuid ContainerId, class UPalMapObjectConcreteModelBase* ChestModel);
    void SetRep(class ABP_ClientReplicator_C* ClientRep);
    FEventReply On_Image_MouseButtonDown_0(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void InpActEvt_Escape_K2Node_InputKeyEvent_0(FKey Key);
    void PreConstruct(bool IsDesignTime);
    void BP_OnActivated();
    void BP_OnDeactivated();
    void On_Image_MouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void BndEvt__WBP_RakLogistics_Main_SaveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_RakLogistics_ChestFilter_ClearButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_RakLogistics_ChestFilter(int32 EntryPoint);
}; // Size: 0x4B0

#endif

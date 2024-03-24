#ifndef UE4SS_SDK_WBP_PanelWidgetChildrenSelectorBase_HPP
#define UE4SS_SDK_WBP_PanelWidgetChildrenSelectorBase_HPP

class UWBP_PanelWidgetChildrenSelectorBase_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    int32 NowFocusChildIndex;                                                         // 0x0410 (size: 0x4)
    FWBP_PanelWidgetChildrenSelectorBase_COnChangedFocusIndex OnChangedFocusIndex;    // 0x0418 (size: 0x10)
    void OnChangedFocusIndex(int32 OldIndex, int32 newIndex, class UWidget* FocusTargetWidget);
    FWBP_PanelWidgetChildrenSelectorBase_COnNext OnNext;                              // 0x0428 (size: 0x10)
    void OnNext(int32 OldIndex, int32 newIndex);
    FWBP_PanelWidgetChildrenSelectorBase_COnPrev OnPrev;                              // 0x0438 (size: 0x10)
    void OnPrev(int32 OldIndex, int32 newIndex);
    class UPanelWidget* MyPanelWidget;                                                // 0x0448 (size: 0x8)
    FWBP_PanelWidgetChildrenSelectorBase_COnChangeEnableChild OnChangeEnableChild;    // 0x0450 (size: 0x10)
    void OnChangeEnableChild(int32 Index, class UWidget* ChildWidget, bool isEnable);

    void GetChildrenNum(int32& ChildrenNum);
    void GetPanelChildren(bool& IsValidPanel, TArray<class UWidget*>& Children);
    void GetIndexByWidget(class UWidget* Widget, int32& findedIndex);
    void IsValidIndex(int32 Index, bool& IsValid);
    void SetEnableAllChildren(bool isEnable);
    void SetEnableChild(bool isEnable, int32 TargetIndex);
    void IsEnabeChild(int32 Index, bool& isEnable);
    void SelectByIndex(int32 FocusIndex);
    void SelectPrev();
    void SelectNext();
    void RegisterPanelWidget(class UPanelWidget*& PanelWidget);
    void Construct();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PanelWidgetChildrenSelectorBase(int32 EntryPoint);
    void OnChangeEnableChild__DelegateSignature(int32 Index, class UWidget* ChildWidget, bool isEnable);
    void OnPrev__DelegateSignature(int32 OldIndex, int32 newIndex);
    void OnNext__DelegateSignature(int32 OldIndex, int32 newIndex);
    void OnChangedFocusIndex__DelegateSignature(int32 OldIndex, int32 newIndex, class UWidget* FocusTargetWidget);
}; // Size: 0x460

#endif

#ifndef UE4SS_SDK_WBP_WorldMap_IconBase_NoDesign_HPP
#define UE4SS_SDK_WBP_WorldMap_IconBase_NoDesign_HPP

class UWBP_WorldMap_IconBase_NoDesign_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    FWBP_WorldMap_IconBase_NoDesign_COnHovered OnHovered;                             // 0x0410 (size: 0x10)
    void OnHovered(class UWBP_WorldMap_IconBase_NoDesign_C* iconWidget);
    FWBP_WorldMap_IconBase_NoDesign_COnUnhovered OnUnhovered;                         // 0x0420 (size: 0x10)
    void OnUnhovered(class UWBP_WorldMap_IconBase_NoDesign_C* iconWidget);
    FWBP_WorldMap_IconBase_NoDesign_COnClicked OnClicked;                             // 0x0430 (size: 0x10)
    void OnClicked(class UWBP_WorldMap_IconBase_NoDesign_C* iconWidget);
    FGuid LocationId;                                                                 // 0x0440 (size: 0x10)
    bool IsCallInternalClickEvent;                                                    // 0x0450 (size: 0x1)

    void SetEnable(bool Enable);
    void OnClicked_Internal();
    void ClickEvent();
    void Setup(class UPalLocationPoint* LocationPoint, FGuid LocationId);
    void GetLocationPosition(FVector& LocationPosition);
    void GetLocationPoint(class UPalLocationPoint*& LocationPoint);
    void Setup_Internal(class UPalLocationPoint* LocationPoint);
    void GetText(FText& Text);
    void Destruct();
    void ExecuteUbergraph_WBP_WorldMap_IconBase_NoDesign(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* iconWidget);
    void OnUnhovered__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* iconWidget);
    void OnHovered__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* iconWidget);
}; // Size: 0x451

#endif

#ifndef UE4SS_SDK_WBP_ConstructionListContent_HPP
#define UE4SS_SDK_WBP_ConstructionListContent_HPP

class UWBP_ConstructionListContent_C : public UUserWidget
{
    class UWidgetAnimation* Anm_Create;                                               // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Select;                                               // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_72;                                   // 0x0288 (size: 0x8)
    class UImage* InventoryListLine_C;                                                // 0x0290 (size: 0x8)
    class UImage* InventoryListLine_L;                                                // 0x0298 (size: 0x8)
    class UImage* InventoryListLine_R;                                                // 0x02A0 (size: 0x8)
    class UWrapBox* WrapBox_92;                                                       // 0x02A8 (size: 0x8)

    void AddWidget(class UUserWidget* inWidgett);
    void SetCategoryName(FText CategoryName);
}; // Size: 0x2B0

#endif

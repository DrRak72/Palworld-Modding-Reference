#ifndef UE4SS_SDK_WBP_InventoryListContent_HPP
#define UE4SS_SDK_WBP_InventoryListContent_HPP

class UWBP_InventoryListContent_C : public UUserWidget
{
    class UWidgetAnimation* Anm_Create;                                               // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Select;                                               // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_72;                                   // 0x0288 (size: 0x8)
    class UImage* InventoryListLine_C;                                                // 0x0290 (size: 0x8)
    class UImage* InventoryListLine_L;                                                // 0x0298 (size: 0x8)
    class UImage* InventoryListLine_R;                                                // 0x02A0 (size: 0x8)
    class UWrapBox* WrapBox_92;                                                       // 0x02A8 (size: 0x8)

    void GetAllContents(TArray<class UWidget*>& Contents);
    void AddWidget(class UWidget* inWidgett);
    void SetCategoryName(FText CategoryName);
}; // Size: 0x2B0

#endif

#ifndef UE4SS_SDK_WBP_ShopProductScrollList_HPP
#define UE4SS_SDK_WBP_ShopProductScrollList_HPP

class UWBP_ShopProductScrollList_C : public UWBP_PalCommonScrollList_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0440 (size: 0x8)
    FWBP_ShopProductScrollList_COnClickedAnyContent OnClickedAnyContent;              // 0x0448 (size: 0x10)
    void OnClickedAnyContent(class UWBP_Shop_BuyList_C* Widget);
    FWBP_ShopProductScrollList_COnHoveredAnyContent OnHoveredAnyContent;              // 0x0458 (size: 0x10)
    void OnHoveredAnyContent(class UWBP_Shop_BuyList_C* Widget);
    FWBP_ShopProductScrollList_COnUnhoveredAnyContent OnUnhoveredAnyContent;          // 0x0468 (size: 0x10)
    void OnUnhoveredAnyContent(class UWBP_Shop_BuyList_C* Widget);
    class UWrapBox* WrapBox;                                                          // 0x0478 (size: 0x8)

    void UpdateAllChildren();
    void FindWidgetByProductID(FGuid ID);
    void GetTopFocusTarget(class UWidget*& Target);
    void FocusTopContent();
    void ClearFiltering();
    void FilteringByInventoryType(TArray<EPalPlayerInventoryType>& inventoryType);
    void ClearAllChildren();
    void OnUnhoveredAnyContent_Internal(class UWBP_Shop_BuyList_C* Widget);
    void OnHoveredAnyContent_Internal(class UWBP_Shop_BuyList_C* Widget);
    void OnClickedAnyContent_Internal(class UWBP_Shop_BuyList_C* Widget);
    void AddProduct(class UPalShopProductBase* ProductData);
    void AddProductArray(TArray<class UPalShopProductBase*>& ProductArray);
    void CreateChildWidget(class UPalShopProductBase* ProductData);
    void OnInitialized();
    void ExecuteUbergraph_WBP_ShopProductScrollList(int32 EntryPoint);
    void OnUnhoveredAnyContent__DelegateSignature(class UWBP_Shop_BuyList_C* Widget);
    void OnHoveredAnyContent__DelegateSignature(class UWBP_Shop_BuyList_C* Widget);
    void OnClickedAnyContent__DelegateSignature(class UWBP_Shop_BuyList_C* Widget);
}; // Size: 0x480

#endif

#ifndef UE4SS_SDK_WBP_Shop_Item_00_HPP
#define UE4SS_SDK_WBP_Shop_Item_00_HPP

class UWBP_Shop_Item_00_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Anm_Buy_UnselectToSelect;                                 // 0x0410 (size: 0x8)
    class UWidgetAnimation* Anm_BuyToSell;                                            // 0x0418 (size: 0x8)
    class UCanvasPanel* Canvas_Buy;                                                   // 0x0420 (size: 0x8)
    class UCanvasPanel* Canvas_Inventory;                                             // 0x0428 (size: 0x8)
    class UCanvasPanel* Canvas_ProductInfo;                                           // 0x0430 (size: 0x8)
    class UCanvasPanel* Canvas_Sell;                                                  // 0x0438 (size: 0x8)
    class UCanvasPanel* Canvas_SellList;                                              // 0x0440 (size: 0x8)
    class UCanvasPanel* Canvas_SortButton;                                            // 0x0448 (size: 0x8)
    class UCanvasPanel* Canvas_TotalPrice;                                            // 0x0450 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Stock;                                        // 0x0458 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x0460 (size: 0x8)
    class UInvalidationBox* InvalidationBox_1;                                        // 0x0468 (size: 0x8)
    class UInvalidationBox* InvalidationBox_2;                                        // 0x0470 (size: 0x8)
    class UOverlay* Overlay_NoSelectSellTarget;                                       // 0x0478 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_ItemDesc;                                  // 0x0480 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemName;                                          // 0x0488 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemWeight;                                        // 0x0490 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Money_SellWindow;                                  // 0x0498 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowMoney;                                          // 0x04A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RemainingStock;                                    // 0x04A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_TotalPrice;                                        // 0x04B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_totalPriceSell;                                    // 0x04B8 (size: 0x8)
    class UWBP_IngameCommonSelectNum_C* WBP_IngameCommonSelectNum;                    // 0x04C0 (size: 0x8)
    class UWBP_ShopProductScrollList_C* WBP_ItemShopProductScrollList;                // 0x04C8 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn_Buy;                                          // 0x04D0 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn_Sell;                                         // 0x04D8 (size: 0x8)
    class UWBP_NoData_C* WBP_NoData_98;                                               // 0x04E0 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;                            // 0x04E8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Sort_Inventory;           // 0x04F0 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x04F8 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_0;                              // 0x0500 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_1;                              // 0x0508 (size: 0x8)
    class UWBP_PalPlayerInventoryScrollList_C* WBP_PalPlayerInventoryScrollList_Sell; // 0x0510 (size: 0x8)
    class UWBP_PlayerInventoryWeightInfo_C* WBP_PlayerInventoryWeightInfo;            // 0x0518 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_SelectedSellItemList;                       // 0x0520 (size: 0x8)
    class UWBP_Shop_Header_C* WBP_Shop_Header;                                        // 0x0528 (size: 0x8)
    class UWBP_Shop_SelectButton_C* WBP_Shop_SelectButton_Buy;                        // 0x0530 (size: 0x8)
    class UWBP_Shop_SelectButton_C* WBP_Shop_SelectButton_Sell;                       // 0x0538 (size: 0x8)
    FWBP_Shop_Item_00_COnSelectedShopMode OnSelectedShopMode;                         // 0x0540 (size: 0x10)
    void OnSelectedShopMode(TEnumAsByte<E_PalItemShopTabType::Type> SelectedType);
    FWBP_Shop_Item_00_COnClickedProduct OnClickedProduct;                             // 0x0550 (size: 0x10)
    void OnClickedProduct(class UWBP_Shop_BuyList_C* Widget);
    int32 NowSelectBuyNum;                                                            // 0x0560 (size: 0x4)
    int32 MaxBuyNum;                                                                  // 0x0564 (size: 0x4)
    class UWBP_Shop_BuyList_C* NowSelectingProductButton;                             // 0x0568 (size: 0x8)
    FWBP_Shop_Item_00_COnClickedBuy OnClickedBuy;                                     // 0x0570 (size: 0x10)
    void OnClickedBuy(int64 BuyNum);
    FWBP_Shop_Item_00_COnHoveredProduct OnHoveredProduct;                             // 0x0580 (size: 0x10)
    void OnHoveredProduct(class UWBP_Shop_BuyList_C* ProductWidget);
    FWBP_Shop_Item_00_COnUnhoveredProduct OnUnhoveredProduct;                         // 0x0590 (size: 0x10)
    void OnUnhoveredProduct(class UWBP_Shop_BuyList_C* ProductWidget);
    class UPalShopProduct_TradeItem* NowDisplayingProduct;                            // 0x05A0 (size: 0x8)
    FWBP_Shop_Item_00_COnSellItemConfirmed OnSellItemConfirmed;                       // 0x05A8 (size: 0x10)
    void OnSellItemConfirmed(TArray<class UPalItemSlot*>& SellItemSlots);
    class UWBP_PalItemSlotButtonBase_C* LastClickedSellSlot;                          // 0x05B8 (size: 0x8)
    class UPalShopBase* Shop;                                                         // 0x05C0 (size: 0x8)
    TMap<class UPalItemSlot*, class FF_PalItemShopSelectedSellItemInfo> SelectedSellItemSlotInfoMap; // 0x05C8 (size: 0x50)
    bool IsSellMode;                                                                  // 0x0618 (size: 0x1)
    int32 CachedTotalPrice;                                                           // 0x061C (size: 0x4)
    float CachedRightAnalogStickValueY;                                               // 0x0620 (size: 0x4)
    class UWBP_PalItemSlotButtonBase_C* LastHoveredSlotButton;                        // 0x0628 (size: 0x8)
    FWBP_Shop_Item_00_COnClickedClosedButton OnClickedClosedButton;                   // 0x0630 (size: 0x10)
    void OnClickedClosedButton();

    void SelectLastHoveredSellSlot();
    void SelectSellSlot(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void GetTopSellItemFocusTarget(class UWidget*& TargetWidget);
    void DisplaySellPrice();
    void ClearSelectSellTarget(class UPalItemSlot* itemSlot);
    void ClearAllSelectSellTarget();
    void OnUpdateSellItemSlot(class UPalItemSlot* itemSlot);
    void OnSellItemClicked_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void OnEndedSellToBuylAnimation();
    void OnEndedBuyToSellAnimation();
    void ReturnItemBuyMode();
    void StartSellItemMode();
    void HideProductInfo();
    void DisplayProductInfo(class UPalShopProduct_TradeItem* Product);
    void OnUpdateMoney(int64 NowMoney);
    void GetTopProductButton(class UWidget*& TopButton);
    void ReturnProductSelectMode();
    void StartNumSelectMode(class UWBP_Shop_BuyList_C* TargetProductWidget);
    void UpdateProductList();
    void SetupSellList();
    void SetShop(class UPalShopBase* Shop);
    void SetProducts(TArray<class UPalShopProductBase*>& Products);
    void Finished_B46EFDA94E40BEA99279B89F3BBB656C();
    void Finished_39A9F9464890024CB68C769DDE8904E9();
    void AnmEvent_ToBuyMode();
    void AnmEvent_ToSellMode();
    void AnmEvent_ToNumSelect();
    void AnmEvent_ToProductSelect();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__WBP_Shop_Item_00_WBP_Shop_Header_K2Node_ComponentBoundEvent_2_OnChangedFocusIndex__DelegateSignature(int32 OldIndex, int32 newIndex, class UWidget* FocusTargetWidget);
    void BndEvt__WBP_Shop_Item_00_WBP_ItemShopProductScrollList_K2Node_ComponentBoundEvent_0_OnClickedAnyContent__DelegateSignature(class UWBP_Shop_BuyList_C* Widget);
    void BndEvt__WBP_Shop_Item_00_WBP_Shop_SelectButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__WBP_Shop_Item_00_WBP_IngameCommonSelectNum_K2Node_ComponentBoundEvent_2_OnUpdateNum__DelegateSignature(int64 Num);
    void BndEvt__WBP_Shop_Item_00_WBP_ItemShopProductScrollList_K2Node_ComponentBoundEvent_4_OnHoveredAnyContent__DelegateSignature(class UWBP_Shop_BuyList_C* Widget);
    void BndEvt__WBP_Shop_Item_00_WBP_ItemShopProductScrollList_K2Node_ComponentBoundEvent_5_OnUnhoveredAnyContent__DelegateSignature(class UWBP_Shop_BuyList_C* Widget);
    void Destruct();
    void BndEvt__WBP_Shop_Item_00_WBP_PalPlayerInventoryScrollList_K2Node_ComponentBoundEvent_6_OnLeftClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void BndEvt__WBP_Shop_Item_00_WBP_Shop_SelectButton_Sell_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
    void BndEvt__WBP_Shop_Item_00_WBP_PalPlayerInventoryScrollList_Sell_K2Node_ComponentBoundEvent_8_OnHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void BndEvt__WBP_Shop_Item_00_WBP_Menu_btn_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_Shop_Item_00_WBP_Menu_btn_Buy_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_Shop_Item_00_WBP_PalInvisibleButton_Sort_Inventory_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Shop_Item_00(int32 EntryPoint);
    void OnClickedClosedButton__DelegateSignature();
    void OnSellItemConfirmed__DelegateSignature(TArray<class UPalItemSlot*>& SellItemSlots);
    void OnUnhoveredProduct__DelegateSignature(class UWBP_Shop_BuyList_C* ProductWidget);
    void OnHoveredProduct__DelegateSignature(class UWBP_Shop_BuyList_C* ProductWidget);
    void OnClickedBuy__DelegateSignature(int64 BuyNum);
    void OnClickedProduct__DelegateSignature(class UWBP_Shop_BuyList_C* Widget);
    void OnSelectedShopMode__DelegateSignature(TEnumAsByte<E_PalItemShopTabType::Type> SelectedType);
}; // Size: 0x640

#endif

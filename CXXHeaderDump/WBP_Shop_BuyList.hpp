#ifndef UE4SS_SDK_WBP_Shop_BuyList_HPP
#define UE4SS_SDK_WBP_Shop_BuyList_HPP

class UWBP_Shop_BuyList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_SoldOutMoney;                                         // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_SoldOut;                                              // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_DisableMoney;                                         // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_Enable;                                               // 0x0298 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x02A0 (size: 0x8)
    class UImage* DisableBase;                                                        // 0x02A8 (size: 0x8)
    class UImage* FocusFrame;                                                         // 0x02B0 (size: 0x8)
    class UImage* IconMoney0;                                                         // 0x02B8 (size: 0x8)
    class UImage* Image_Product;                                                      // 0x02C0 (size: 0x8)
    class UImage* Image_SelectingFrame;                                               // 0x02C8 (size: 0x8)
    class UImage* SoldOutBase;                                                        // 0x02D0 (size: 0x8)
    class UImage* SoldOutFrame;                                                       // 0x02D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalOwning;                                         // 0x02E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Price;                                             // 0x02E8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ProductName;                                       // 0x02F0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02F8 (size: 0x8)
    FWBP_Shop_BuyList_COnClicked OnClicked;                                           // 0x0300 (size: 0x10)
    void OnClicked(class UWBP_Shop_BuyList_C* ProductButtonWidget);
    TSoftObjectPtr<UPalShopProductBase> MySoftProduct;                                // 0x0310 (size: 0x30)
    FWBP_Shop_BuyList_COnHovered OnHovered;                                           // 0x0340 (size: 0x10)
    void OnHovered(class UWBP_Shop_BuyList_C* Widget);
    FWBP_Shop_BuyList_COnUnhovered OnUnhovered;                                       // 0x0350 (size: 0x10)
    void OnUnhovered(class UWBP_Shop_BuyList_C* Widget);
    FDataTableRowHandle MyPalMsgID;                                                   // 0x0360 (size: 0x10)
    FDataTableRowHandle OthersPalMsgID;                                               // 0x0370 (size: 0x10)

    void OnUpdateProductStock(int32 NowStock);
    void Update Product Detail();
    void GetProduct(class UPalShopProductBase*& Product);
    void Setup Pal Product(class UPalShopProduct_PalSaveParameter* PalProduct);
    void Setup_TradeItemProduct(class UPalShopProduct_TradeItem* TradeItemProduct);
    void Setup_Common(class UPalShopProductBase* Product);
    void Set Product(class UPalShopProductBase* Product);
    void AnmEvent_Enable();
    void AnmEvent_SoldOut();
    void AnmEvent_SoldOutAndNotEnoughMoney();
    void AnmEvent_NotEnoughMoney();
    void AnmEvent_Selecting();
    void AnmEvent_Unselect();
    void Construct();
    void BndEvt__WBP_Shop_BuyList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Shop_BuyList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Shop_BuyList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Shop_BuyList(int32 EntryPoint);
    void OnUnhovered__DelegateSignature(class UWBP_Shop_BuyList_C* Widget);
    void OnHovered__DelegateSignature(class UWBP_Shop_BuyList_C* Widget);
    void OnClicked__DelegateSignature(class UWBP_Shop_BuyList_C* ProductButtonWidget);
}; // Size: 0x380

#endif

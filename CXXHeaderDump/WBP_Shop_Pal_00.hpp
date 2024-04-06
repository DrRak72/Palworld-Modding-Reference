#ifndef UE4SS_SDK_WBP_Shop_Pal_00_HPP
#define UE4SS_SDK_WBP_Shop_Pal_00_HPP

class UWBP_Shop_Pal_00_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Reset;                                                // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_BuyToSell;                                            // 0x0288 (size: 0x8)
    class UCanvasPanel* Canvas_Buy;                                                   // 0x0290 (size: 0x8)
    class UCanvasPanel* Canvas_Sell;                                                  // 0x0298 (size: 0x8)
    class UCanvasPanel* Canvas_TotalCost;                                             // 0x02A0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_96;                                                           // 0x02B0 (size: 0x8)
    class UOverlay* Overlay_NoSelectSellTarget;                                       // 0x02B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Money_SellMode;                                    // 0x02C0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowMoney;                                          // 0x02C8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Price;                                             // 0x02D0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_SellTotalPrice;                                    // 0x02D8 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn_Buy;                                          // 0x02E0 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn_Sell;                                         // 0x02E8 (size: 0x8)
    class UWBP_NoData_C* WBP_NoData_98;                                               // 0x02F0 (size: 0x8)
    class UWBP_PalCharacterScrollList_C* WBP_PalCharacterScrollList_Sell;             // 0x02F8 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton;      // 0x0300 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_1;    // 0x0308 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_2;    // 0x0310 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_3;    // 0x0318 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_4;    // 0x0320 (size: 0x8)
    class UWBP_PalCommonInfo_SaveParameter_C* WBP_PalCommonInfo_SaveParameter;        // 0x0328 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList_SellTarget;             // 0x0330 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x0338 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_1;                              // 0x0340 (size: 0x8)
    class UWBP_PalShopSellPricePopup_C* WBP_PalShopSellPricePopup;                    // 0x0348 (size: 0x8)
    class UWBP_Shop_Header_C* WBP_Shop_Header;                                        // 0x0350 (size: 0x8)
    class UWBP_Shop_SelectButton_C* WBP_Shop_SelectButton_Buy;                        // 0x0358 (size: 0x8)
    class UWBP_Shop_SelectButton_C* WBP_Shop_SelectButton_Sell;                       // 0x0360 (size: 0x8)
    class UWBP_ShopProductScrollList_C* WBP_ShopProductScrollList;                    // 0x0368 (size: 0x8)
    FWBP_Shop_Pal_00_COnClickedProduct OnClickedProduct;                              // 0x0370 (size: 0x10)
    void OnClickedProduct(class UWBP_Shop_BuyList_C* Widget);
    FWBP_Shop_Pal_00_COnHoveredProduct OnHoveredProduct;                              // 0x0380 (size: 0x10)
    void OnHoveredProduct(class UWBP_Shop_BuyList_C* Widget);
    FWBP_Shop_Pal_00_COnUnhoveredProduct OnUnhoveredProduct;                          // 0x0390 (size: 0x10)
    void OnUnhoveredProduct(class UWBP_Shop_BuyList_C* Widget);
    FWBP_Shop_Pal_00_COnClickedBuy OnClickedBuy;                                      // 0x03A0 (size: 0x10)
    void OnClickedBuy();
    FWBP_Shop_Pal_00_COnChangedShopMode OnChangedShopMode;                            // 0x03B0 (size: 0x10)
    void OnChangedShopMode(TEnumAsByte<E_PalItemShopTabType::Type> ShopMode);
    TArray<class UWBP_PalCommonCharacterSlotButton_C*> OtomoPalSlotArray;             // 0x03C0 (size: 0x10)
    class UWBP_PalCharacterSlotButtonBase_C* LastClickedSellSlotButton;               // 0x03D0 (size: 0x8)
    FWBP_Shop_Pal_00_COnConfirmedSellPals OnConfirmedSellPals;                        // 0x03D8 (size: 0x10)
    void OnConfirmedSellPals(TArray<class UPalIndividualCharacterSlot*>& SellSlots);
    class UWBP_PalCharacterSlotButtonBase_C* LastHoveredCharacterSlot;                // 0x03E8 (size: 0x8)
    TMap<class UPalIndividualCharacterSlot*, class FF_PalCharacterShopSelectedSellCharacterInfo> SelectedSellSlotInfoMap; // 0x03F0 (size: 0x50)
    int32 CachedTotalSellPrice;                                                       // 0x0440 (size: 0x4)
    bool IsSellMode;                                                                  // 0x0444 (size: 0x1)
    FWBP_Shop_Pal_00_COnClickedClosedButton OnClickedClosedButton;                    // 0x0448 (size: 0x10)
    void OnClickedClosedButton();

    void HidePalPricePopup();
    void DisplayPalPricePopup(FPalIndividualCharacterSaveParameter Parameter);
    void GetTopSellFocusTarget(class UWidget*& FocusTarget);
    void OnUpdatedSellCharacterSlot(class UPalIndividualCharacterSlot* Slot);
    void DisplayTotalPrice();
    void Unselect All Sell Slot();
    void UnselectSellSlot(class UPalIndividualCharacterSlot* CharacterSlot);
    void SelectSellSlot(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    void OpenSellCheck(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    void OnClosedSellCheckDialog(bool bResult);
    void OnUnhoveredSlot_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnHoveredOtomoSlot_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnClickedOtomoSlot_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void ToBuyMode();
    void ToSellMode();
    void HidePalInfo();
    void DisplayPalInfo(FPalIndividualCharacterSaveParameter displayParameter);
    void Return Buy Select Mode();
    void StartBuyCheckMode(class UWBP_Shop_BuyList_C* TargetProductWidget);
    void UpdateAllProductButton();
    void SetupSellList(class UPalIndividualCharacterContainer* PalBoxContainer);
    void SetProduct(TArray<class UPalShopProductBase*>& ProductArray);
    void Finished_5C11C3964056F1E3B9BB96A2C27E316A();
    void Finished_842290324BB8DEC9F3AD0CADA403DC29();
    void AnmEvent_SellToBuy();
    void AnmEvent_BuyToSell();
    void Construct();
    void BndEvt__WBP_Shop_Pal_00_WBP_ShopProductScrollList_K2Node_ComponentBoundEvent_0_OnClickedAnyContent__DelegateSignature(class UWBP_Shop_BuyList_C* Widget);
    void BndEvt__WBP_Shop_Pal_00_WBP_ShopProductScrollList_K2Node_ComponentBoundEvent_1_OnHoveredAnyContent__DelegateSignature(class UWBP_Shop_BuyList_C* Widget);
    void BndEvt__WBP_Shop_Pal_00_WBP_ShopProductScrollList_K2Node_ComponentBoundEvent_2_OnUnhoveredAnyContent__DelegateSignature(class UWBP_Shop_BuyList_C* Widget);
    void BndEvt__WBP_Shop_Pal_00_WBP_Shop_SelectButton_Buy_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void Destruct();
    void OnUpdateMoneyEvent(int64 NowMoney);
    void BndEvt__WBP_Shop_Pal_00_WBP_Shop_Header_K2Node_ComponentBoundEvent_4_OnChangedFocusIndex__DelegateSignature(int32 OldIndex, int32 newIndex, class UWidget* FocusTargetWidget);
    void OnInitialized();
    void BndEvt__WBP_Shop_Pal_00_WBP_PalCharacterScrollList_K2Node_ComponentBoundEvent_5_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void BndEvt__WBP_Shop_Pal_00_WBP_Shop_SelectButton_Sell_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void BndEvt__WBP_Shop_Pal_00_WBP_PalCharacterScrollList_K2Node_ComponentBoundEvent_7_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_Shop_Pal_00_WBP_PalCharacterScrollList_K2Node_ComponentBoundEvent_8_OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_Shop_Pal_00_WBP_PalCharacterScrollList_Sell_K2Node_ComponentBoundEvent_9_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_Shop_Pal_00_WBP_Menu_btn_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_Shop_Pal_00_WBP_Menu_btn_1_K2Node_ComponentBoundEvent_11_OnButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_Shop_Pal_00(int32 EntryPoint);
    void OnClickedClosedButton__DelegateSignature();
    void OnConfirmedSellPals__DelegateSignature(TArray<class UPalIndividualCharacterSlot*>& SellSlots);
    void OnChangedShopMode__DelegateSignature(TEnumAsByte<E_PalItemShopTabType::Type> ShopMode);
    void OnClickedBuy__DelegateSignature();
    void OnUnhoveredProduct__DelegateSignature(class UWBP_Shop_BuyList_C* Widget);
    void OnHoveredProduct__DelegateSignature(class UWBP_Shop_BuyList_C* Widget);
    void OnClickedProduct__DelegateSignature(class UWBP_Shop_BuyList_C* Widget);
}; // Size: 0x458

#endif

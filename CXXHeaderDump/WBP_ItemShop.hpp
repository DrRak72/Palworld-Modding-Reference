#ifndef UE4SS_SDK_WBP_ItemShop_HPP
#define UE4SS_SDK_WBP_ItemShop_HPP

class UWBP_ItemShop_C : public UPalUIItemShopBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    class UCanvasPanel* Canvas_BuyWait;                                               // 0x0468 (size: 0x8)
    class UCircularThrobber* CircularThrobber_21;                                     // 0x0470 (size: 0x8)
    class UWBP_NoData_C* WBP_NoData;                                                  // 0x0478 (size: 0x8)
    class UWBP_Shop_Item_00_C* WBP_Shop_Item_00;                                      // 0x0480 (size: 0x8)
    FPalDataTableRowName_UIInputAction NextItemCategoryInputAction;                   // 0x0488 (size: 0x8)
    FPalDataTableRowName_UIInputAction PrevItemCategoryInputAction;                   // 0x0490 (size: 0x8)
    FDataTableRowHandle BuyDecideMsgID;                                               // 0x0498 (size: 0x10)
    FDataTableRowHandle BuyCancelMsgID;                                               // 0x04A8 (size: 0x10)
    FPalDataTableRowName_UIInputAction NextShopModeInputAction;                       // 0x04B8 (size: 0x8)
    FPalDataTableRowName_UIInputAction PrevShopModeInputAction;                       // 0x04C0 (size: 0x8)
    TEnumAsByte<E_PalItemShopTabType::Type> NowShopMode;                              // 0x04C8 (size: 0x1)
    bool IsFirstSetup;                                                                // 0x04C9 (size: 0x1)
    class UWBP_Shop_BuyList_C* LastClickedPeoductButton;                              // 0x04D0 (size: 0x8)
    bool IsSelectingBuyNum;                                                           // 0x04D8 (size: 0x1)
    FDataTableRowHandle BuyWaitMsgID;                                                 // 0x04E0 (size: 0x10)
    FPalUIActionBindData NextShopModeInputActionhandle;                               // 0x04F0 (size: 0x4)
    FPalUIActionBindData PrevShopModeInputActionHandle;                               // 0x04F4 (size: 0x4)
    FPalDataTableRowName_UIInputAction ConfirmSellInputAction;                        // 0x04F8 (size: 0x8)
    FPalUIActionBindData ConfirmSellInputActionHandle;                                // 0x0500 (size: 0x4)
    TArray<class UPalItemSlot*> Cached;                                               // 0x0508 (size: 0x10)
    FDataTableRowHandle SellCheckDialogMsgID;                                         // 0x0518 (size: 0x10)
    float CachedRightAnalogStickValueY;                                               // 0x0528 (size: 0x4)
    FPalDataTableRowName_UIInputAction SelectSellSlotInputAction;                     // 0x052C (size: 0x8)
    FPalUIActionBindData SelectSellSlotInputActionHandle;                             // 0x0534 (size: 0x4)

    void GetStartTabType(TEnumAsByte<E_PalItemShopTabType::Type>& StartTabType);
    void OnSelectSellSlot();
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void OnClosedSellCheckDialog(bool bResult);
    void OpenSellCheckDialog();
    void TrySell_Internal(TArray<class UPalItemSlot*>& ItemSlots);
    void OnSellConfirm();
    void OnTriggerPrevShopModeAction();
    void OnTriggerNextShopModeAction();
    void SetupInputAction();
    void OnCancel();
    void DelayCloseBuyWaitScreen();
    void OnRecievedBuyResult(const EPalShopBuyResultType resultType);
    void ToBuyProductSelectMode();
    void ToBuyNumSelectMode();
    void OnUpdateMoney(int64 NowMoney);
    void OnUpdatedAnyProduct();
    void SetupSellMode();
    void SetupBuyMode();
    void ChangeShopMode(TEnumAsByte<E_PalItemShopTabType::Type> ChangeType);
    class UWidget* BP_GetDesiredFocusTarget();
    void Setup();
    void Construct();
    void OnSetup();
    void OnInitialized();
    void Destruct();
    void BndEvt__WBP_ItemShop_WBP_Shop_Item_00_K2Node_ComponentBoundEvent_0_OnSelectedShopMode__DelegateSignature(TEnumAsByte<E_PalItemShopTabType::Type> SelectedType);
    void BndEvt__WBP_ItemShop_WBP_Shop_Item_00_K2Node_ComponentBoundEvent_1_OnClickedProduct__DelegateSignature(class UWBP_Shop_BuyList_C* Widget);
    void BndEvt__WBP_ItemShop_WBP_Shop_Item_00_K2Node_ComponentBoundEvent_3_OnClickedBuy__DelegateSignature(int64 BuyNum);
    void BndEvt__WBP_ItemShop_WBP_Shop_Item_00_K2Node_ComponentBoundEvent_2_OnHoveredProduct__DelegateSignature(class UWBP_Shop_BuyList_C* ProductWidget);
    void BndEvt__WBP_ItemShop_WBP_Shop_Item_00_K2Node_ComponentBoundEvent_4_OnUnhoveredProduct__DelegateSignature(class UWBP_Shop_BuyList_C* ProductWidget);
    void BndEvt__WBP_ItemShop_WBP_Shop_Item_00_K2Node_ComponentBoundEvent_5_OnSellItemConfirmed__DelegateSignature(TArray<class UPalItemSlot*>& SellItemSlots);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__WBP_ItemShop_WBP_Shop_Item_00_K2Node_ComponentBoundEvent_6_OnClickedClosedButton__DelegateSignature();
    void ExecuteUbergraph_WBP_ItemShop(int32 EntryPoint);
}; // Size: 0x538

#endif

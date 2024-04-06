#ifndef UE4SS_SDK_WBP_PalShop_ForDisplay_HPP
#define UE4SS_SDK_WBP_PalShop_ForDisplay_HPP

class UWBP_PalShop_ForDisplay_C : public UPalUIPalShopBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    class UCanvasPanel* Canvas_Waiting;                                               // 0x0468 (size: 0x8)
    class UWBP_Shop_Pal_00_C* WBP_Shop_Pal_00;                                        // 0x0470 (size: 0x8)
    class UWBP_NoData_C* WBP_WaitBuy;                                                 // 0x0478 (size: 0x8)
    class UWBP_NoData_C* WBP_WaitSetup;                                               // 0x0480 (size: 0x8)
    FDataTableRowHandle BuyWaitMsgID;                                                 // 0x0488 (size: 0x10)
    FPalDataTableRowName_UIInputAction NextShopModeInputAction;                       // 0x0498 (size: 0x8)
    FPalDataTableRowName_UIInputAction PrevShopModeInputAction;                       // 0x04A0 (size: 0x8)
    bool IsFirstSetup;                                                                // 0x04A8 (size: 0x1)
    class UWBP_Shop_BuyList_C* LastClickedProductButton;                              // 0x04B0 (size: 0x8)
    bool IsCheckingBuy;                                                               // 0x04B8 (size: 0x1)
    TEnumAsByte<E_PalItemShopTabType::Type> NowShopMode;                              // 0x04B9 (size: 0x1)
    FTimerHandle UpdateProductDetailTimer;                                            // 0x04C0 (size: 0x8)
    FPalDataTableRowName_UIInputAction SellConfirmInputAction;                        // 0x04C8 (size: 0x8)
    FPalDataTableRowName_UIInputAction SelectSellSlotInputAction;                     // 0x04D0 (size: 0x8)
    FPalUIActionBindData SellConfirmInputActionHandle;                                // 0x04D8 (size: 0x4)
    FPalUIActionBindData SelectSellSlotInputActionHandle;                             // 0x04DC (size: 0x4)
    FDataTableRowHandle SellCheckDialogMsgID;                                         // 0x04E0 (size: 0x10)
    float CachedRightAnalogStickValueY;                                               // 0x04F0 (size: 0x4)
    bool IsWaitingProductSetup;                                                       // 0x04F4 (size: 0x1)
    FDataTableRowHandle WaitProductSetupWaitMsgID;                                    // 0x04F8 (size: 0x10)

    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void On Received Lost Pal Data(const TArray<FPalDroppedPalProductDataForShop>& ReceivedData);
    void StartWaitProductSetup();
    void GetOpenTabType(TEnumAsByte<E_PalItemShopTabType::Type>& TabType);
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void OnSelectSellSlot_Pad();
    void OnConfirmSell();
    void OnClosedSellCheckDialog(bool Result);
    void OpenSellCheckDialog();
    void OnTimerTrigger_UpdateProduct();
    void OnTriggerPrevShopMode();
    void OnTriggerNextShopMode();
    void ChangeShopMode(TEnumAsByte<E_PalItemShopTabType::Type> ShopMode);
    void ToBuySelectMode();
    void ToBuyCheckMode();
    void SetupInputAction();
    void OnCancelEvent();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnDelayTriggerCloseBuyWait();
    void OnUpdatedAnyProductEvent();
    void OnRecievedBuyResultEvent(const EPalShopBuyResultType resultType);
    void OnUpdatedMoney(int64 NowMoney);
    void Setup();
    void Construct();
    void OnSetup();
    void OnInitialized();
    void Destruct();
    void BndEvt__WBP_PalShop_ForDisplay_WBP_Shop_Pal_00_K2Node_ComponentBoundEvent_0_OnClickedProduct__DelegateSignature(class UWBP_Shop_BuyList_C* Widget);
    void BndEvt__WBP_PalShop_ForDisplay_WBP_Shop_Pal_00_K2Node_ComponentBoundEvent_1_OnHoveredProduct__DelegateSignature(class UWBP_Shop_BuyList_C* Widget);
    void BndEvt__WBP_PalShop_ForDisplay_WBP_Shop_Pal_00_K2Node_ComponentBoundEvent_2_OnUnhoveredProduct__DelegateSignature(class UWBP_Shop_BuyList_C* Widget);
    void BndEvt__WBP_PalShop_ForDisplay_WBP_Shop_Pal_00_K2Node_ComponentBoundEvent_3_OnClickedBuy__DelegateSignature();
    void BndEvt__WBP_PalShop_ForDisplay_WBP_Shop_Pal_00_K2Node_ComponentBoundEvent_4_OnChangedShopMode__DelegateSignature(TEnumAsByte<E_PalItemShopTabType::Type> ShopMode);
    void BndEvt__WBP_PalShop_ForDisplay_WBP_Shop_Pal_00_K2Node_ComponentBoundEvent_5_OnConfirmedSellPals__DelegateSignature(TArray<class UPalIndividualCharacterSlot*>& SellSlots);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__WBP_PalShop_ForDisplay_WBP_Shop_Pal_00_K2Node_ComponentBoundEvent_6_OnClickedClosedButton__DelegateSignature();
    void ExecuteUbergraph_WBP_PalShop_ForDisplay(int32 EntryPoint);
}; // Size: 0x508

#endif

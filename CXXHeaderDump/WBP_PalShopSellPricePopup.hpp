#ifndef UE4SS_SDK_WBP_PalShopSellPricePopup_HPP
#define UE4SS_SDK_WBP_PalShopSellPricePopup_HPP

class UWBP_PalShopSellPricePopup_C : public UPalUserWidget
{
    class UImage* Image_34;                                                           // 0x0408 (size: 0x8)
    class UImage* Image_Line;                                                         // 0x0410 (size: 0x8)
    class UWBP_ShopSellPrice_C* WBP_ShopSellPrice;                                    // 0x0418 (size: 0x8)

    void SetPrice(int32 Price);
}; // Size: 0x420

#endif

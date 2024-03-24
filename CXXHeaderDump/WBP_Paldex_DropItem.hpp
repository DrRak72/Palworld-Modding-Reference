#ifndef UE4SS_SDK_WBP_Paldex_DropItem_HPP
#define UE4SS_SDK_WBP_Paldex_DropItem_HPP

class UWBP_Paldex_DropItem_C : public UUserWidget
{
    class UImage* Base;                                                               // 0x0278 (size: 0x8)
    class UImage* Dot_0;                                                              // 0x0280 (size: 0x8)
    class UImage* Dot_1;                                                              // 0x0288 (size: 0x8)
    class UImage* Dot_2;                                                              // 0x0290 (size: 0x8)
    class UImage* Dot_3;                                                              // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemDesc;                                          // 0x02A0 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;                            // 0x02A8 (size: 0x8)

    void Setup(FName ItemId);
}; // Size: 0x2B0

#endif

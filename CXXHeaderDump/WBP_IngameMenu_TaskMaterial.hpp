#ifndef UE4SS_SDK_WBP_IngameMenu_TaskMaterial_HPP
#define UE4SS_SDK_WBP_IngameMenu_TaskMaterial_HPP

class UWBP_IngameMenu_TaskMaterial_C : public UUserWidget
{
    class UImage* Image;                                                              // 0x0278 (size: 0x8)
    class UImage* Image_56;                                                           // 0x0280 (size: 0x8)
    class UProgressBar* ProgressBar_34;                                               // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemNum;                                           // 0x0290 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;                            // 0x0298 (size: 0x8)
    class UCurveLinearColor* gaugeColor;                                              // 0x02A0 (size: 0x8)
    bool Is Hide when Zero;                                                           // 0x02A8 (size: 0x1)

    void SetHIdeWhenZeroFlag(bool isHideWhenZero);
    void SetItemNum(int64 itemNum, int64 gaugeMaxBorderNum);
    void SetupTexture(FName StaticItemId);
}; // Size: 0x2A9

#endif

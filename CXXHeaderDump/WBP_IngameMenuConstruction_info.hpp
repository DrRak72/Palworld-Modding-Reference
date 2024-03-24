#ifndef UE4SS_SDK_WBP_IngameMenuConstruction_info_HPP
#define UE4SS_SDK_WBP_IngameMenuConstruction_info_HPP

class UWBP_IngameMenuConstruction_info_C : public UUserWidget
{
    class UBP_PalTextBlock_C* BP_PalTextBlock_C;                                      // 0x0278 (size: 0x8)
    class UImage* Dot_0;                                                              // 0x0280 (size: 0x8)
    class UImage* Dot_1;                                                              // 0x0288 (size: 0x8)
    class UImage* Dot_4;                                                              // 0x0290 (size: 0x8)
    class UImage* Dot_5;                                                              // 0x0298 (size: 0x8)
    class UImage* Image;                                                              // 0x02A0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_4;                                                            // 0x02C0 (size: 0x8)
    class UImage* Image_28;                                                           // 0x02C8 (size: 0x8)
    class UImage* Image_278;                                                          // 0x02D0 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_BuildObjectDesc;                           // 0x02D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ManMonth_Value;                                    // 0x02E0 (size: 0x8)
    class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem; // 0x02E8 (size: 0x8)
    class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem_1; // 0x02F0 (size: 0x8)
    class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem_2; // 0x02F8 (size: 0x8)
    class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem_3; // 0x0300 (size: 0x8)

    void Get Useable Material Item Num(FName ItemId, int32& Num);
    void SetMaterialInfo(class UWBP_IngameMenuConstruction_InfoItem_C* Widget, FName ID, int32 NeedNum);
    void Set Build Object Data(FPalBuildObjectData BuildObjectData);
}; // Size: 0x308

#endif

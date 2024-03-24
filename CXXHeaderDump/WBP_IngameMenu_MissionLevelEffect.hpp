#ifndef UE4SS_SDK_WBP_IngameMenu_MissionLevelEffect_HPP
#define UE4SS_SDK_WBP_IngameMenu_MissionLevelEffect_HPP

class UWBP_IngameMenu_MissionLevelEffect_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Image_Arrow;                                                        // 0x0280 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0288 (size: 0x8)
    class USizeBox* SizeBox_Aft;                                                      // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Efefct;                                            // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Num_Aft;                                           // 0x02A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Num_Pre;                                           // 0x02A8 (size: 0x8)
    FDataTableRowHandle InfoMsgId;                                                    // 0x02B0 (size: 0x10)
    class UTexture2D* Texture;                                                        // 0x02C0 (size: 0x8)

    void Construct();
    void SetEffectInfo(int32 PreCount, int32 AftCount, bool IsMax, bool CanLevelup);
    void ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect(int32 EntryPoint);
}; // Size: 0x2C8

#endif

#ifndef UE4SS_SDK_WBP_Paldex_PalInfo_00_HPP
#define UE4SS_SDK_WBP_Paldex_PalInfo_00_HPP

class UWBP_Paldex_PalInfo_00_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_3;                                    // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_115;                                  // 0x0288 (size: 0x8)
    class UCanvasPanel* Canvas_PartnerSkill;                                          // 0x0290 (size: 0x8)
    class UCanvasPanel* CanvasPanel;                                                  // 0x0298 (size: 0x8)
    class UImage* FoodAmountBase;                                                     // 0x02A0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_CaptureNum;                                   // 0x02A8 (size: 0x8)
    class UImage* Image_19;                                                           // 0x02B0 (size: 0x8)
    class UImage* Image_20;                                                           // 0x02B8 (size: 0x8)
    class UImage* Image_21;                                                           // 0x02C0 (size: 0x8)
    class UImage* Image_22;                                                           // 0x02C8 (size: 0x8)
    class UImage* Image_80;                                                           // 0x02D0 (size: 0x8)
    class UImage* Image_142;                                                          // 0x02D8 (size: 0x8)
    class UImage* Image_245;                                                          // 0x02E0 (size: 0x8)
    class UOverlay* Overlay_NoDropItem;                                               // 0x02E8 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_PartnerSkillDesc;                          // 0x02F0 (size: 0x8)
    class UCanvasPanel* SkillInfo;                                                    // 0x02F8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_CaptureNumValue;                                   // 0x0300 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PartnerSkillName;                                  // 0x0308 (size: 0x8)
    class UUniformGridPanel* UniformGrid_Suitability;                                 // 0x0310 (size: 0x8)
    class UWBP_MainMenu_Pal_FoodAmount_C* WBP_MainMenu_Pal_FoodAmount;                // 0x0318 (size: 0x8)
    class UWBP_Paldex_DropItem_C* WBP_Paldex_DropItem;                                // 0x0320 (size: 0x8)
    class UWBP_Paldex_DropItem_C* WBP_Paldex_DropItem_1;                              // 0x0328 (size: 0x8)
    class UWBP_Paldex_DropItem_C* WBP_Paldex_DropItem_2;                              // 0x0330 (size: 0x8)
    class UWBP_Paldex_DropItem_C* WBP_Paldex_DropItem_3;                              // 0x0338 (size: 0x8)
    class UWBP_Paldex_DropItem_C* WBP_Paldex_DropItem_4;                              // 0x0340 (size: 0x8)
    class UWBP_Paldex_Task_C* WBP_Paldex_Task;                                        // 0x0348 (size: 0x8)
    TArray<class UWBP_Paldex_DropItem_C*> DropItemWidgetArray;                        // 0x0350 (size: 0x10)

    void HideDropItems();
    void Setup_Captured(FPalUIPaldex_DisplayInfo DisplayInfo);
    void Setup_Encounted(FPalUIPaldex_DisplayInfo DisplayInfo);
    void Setup_NotEncounted(FPalUIPaldex_DisplayInfo DisplayInfo);
    void Setup(FPalUIPaldex_DisplayInfo DisplayInfo);
    void OnInitialized();
    void ExecuteUbergraph_WBP_Paldex_PalInfo_00(int32 EntryPoint);
}; // Size: 0x360

#endif

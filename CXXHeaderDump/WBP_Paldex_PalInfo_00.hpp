#ifndef UE4SS_SDK_WBP_Paldex_PalInfo_00_HPP
#define UE4SS_SDK_WBP_Paldex_PalInfo_00_HPP

class UWBP_Paldex_PalInfo_00_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Base;                                                               // 0x0280 (size: 0x8)
    class UImage* BaseL_0;                                                            // 0x0288 (size: 0x8)
    class UImage* BaseL_1;                                                            // 0x0290 (size: 0x8)
    class UImage* BaseR_0;                                                            // 0x0298 (size: 0x8)
    class UImage* BaseR_1;                                                            // 0x02A0 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_115;                                  // 0x02A8 (size: 0x8)
    class UCanvasPanel* Canvas_PartnerSkill;                                          // 0x02B0 (size: 0x8)
    class UCanvasPanel* CanvasPanel;                                                  // 0x02B8 (size: 0x8)
    class UImage* Dot;                                                                // 0x02C0 (size: 0x8)
    class UImage* Dot_0;                                                              // 0x02C8 (size: 0x8)
    class UImage* Dot_1;                                                              // 0x02D0 (size: 0x8)
    class UImage* Dot_2;                                                              // 0x02D8 (size: 0x8)
    class UImage* Dot_3;                                                              // 0x02E0 (size: 0x8)
    class UImage* Dot_4;                                                              // 0x02E8 (size: 0x8)
    class UImage* Dot_5;                                                              // 0x02F0 (size: 0x8)
    class UImage* Dot_6;                                                              // 0x02F8 (size: 0x8)
    class UImage* FoodAmountBase;                                                     // 0x0300 (size: 0x8)
    class UHorizontalBox* HorizontalBox_CaptureNum;                                   // 0x0308 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0310 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0318 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0320 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0328 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0330 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0338 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0340 (size: 0x8)
    class UImage* Image_7;                                                            // 0x0348 (size: 0x8)
    class UImage* Image_8;                                                            // 0x0350 (size: 0x8)
    class UImage* Image_9;                                                            // 0x0358 (size: 0x8)
    class UImage* Image_10;                                                           // 0x0360 (size: 0x8)
    class UImage* Image_11;                                                           // 0x0368 (size: 0x8)
    class UImage* Image_12;                                                           // 0x0370 (size: 0x8)
    class UImage* Image_13;                                                           // 0x0378 (size: 0x8)
    class UImage* Image_14;                                                           // 0x0380 (size: 0x8)
    class UImage* Image_15;                                                           // 0x0388 (size: 0x8)
    class UImage* Image_27;                                                           // 0x0390 (size: 0x8)
    class UImage* Image_28;                                                           // 0x0398 (size: 0x8)
    class UImage* Image_29;                                                           // 0x03A0 (size: 0x8)
    class UImage* Image_30;                                                           // 0x03A8 (size: 0x8)
    class UImage* Image_172;                                                          // 0x03B0 (size: 0x8)
    class UImage* Image_245;                                                          // 0x03B8 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_PartnerSkillDesc;                          // 0x03C0 (size: 0x8)
    class UImage* SkillBase;                                                          // 0x03C8 (size: 0x8)
    class UImage* SkillBase_1;                                                        // 0x03D0 (size: 0x8)
    class UCanvasPanel* SkillInfo;                                                    // 0x03D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_CaptureNumValue;                                   // 0x03E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PartnerSkillName;                                  // 0x03E8 (size: 0x8)
    class UUniformGridPanel* UniformGrid_Suitability;                                 // 0x03F0 (size: 0x8)
    class UWBP_MainMenu_Pal_FoodAmount_C* WBP_MainMenu_Pal_FoodAmount;                // 0x03F8 (size: 0x8)
    class UWBP_Paldex_DropItem_C* WBP_Paldex_DropItem;                                // 0x0400 (size: 0x8)
    class UWBP_Paldex_DropItem_C* WBP_Paldex_DropItem_1;                              // 0x0408 (size: 0x8)
    class UWBP_Paldex_DropItem_C* WBP_Paldex_DropItem_2;                              // 0x0410 (size: 0x8)
    class UWBP_Paldex_DropItem_C* WBP_Paldex_DropItem_3;                              // 0x0418 (size: 0x8)
    class UWBP_Paldex_Task_C* WBP_Paldex_Task;                                        // 0x0420 (size: 0x8)
    class UImage* WeightBase;                                                         // 0x0428 (size: 0x8)
    class UImage* WeightBaseFrame;                                                    // 0x0430 (size: 0x8)
    TArray<class UWBP_Paldex_DropItem_C*> DropItemWidgetArray;                        // 0x0438 (size: 0x10)

    void HideDropItems();
    void Setup_Captured(FPalUIPaldex_DisplayInfo DisplayInfo);
    void Setup_Encounted(FPalUIPaldex_DisplayInfo DisplayInfo);
    void Setup_NotEncounted(FPalUIPaldex_DisplayInfo DisplayInfo);
    void Setup(FPalUIPaldex_DisplayInfo DisplayInfo);
    void OnInitialized();
    void ExecuteUbergraph_WBP_Paldex_PalInfo_00(int32 EntryPoint);
}; // Size: 0x448

#endif

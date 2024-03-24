#ifndef UE4SS_SDK_WBP_IngameConstruction_HPP
#define UE4SS_SDK_WBP_IngameConstruction_HPP

class UWBP_IngameConstruction_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Caution;                                              // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_1;                                    // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_39;                                   // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_100;                                  // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_CautionTitle;                           // 0x02A0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Caution;                                          // 0x02A8 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Warning;                                          // 0x02B0 (size: 0x8)
    class UImage* Image_CautionTitleBase;                                             // 0x02B8 (size: 0x8)
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide;        // 0x02C0 (size: 0x8)
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_1;      // 0x02C8 (size: 0x8)
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_2;      // 0x02D0 (size: 0x8)
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_3;      // 0x02D8 (size: 0x8)
    class UWBP_Ingameconstruction_KeyGuide_C* WBP_Ingameconstruction_KeyGuide_4;      // 0x02E0 (size: 0x8)
    class UWBP_IngameConstruction_Num_C* WBP_IngameConstruction_Num_0;                // 0x02E8 (size: 0x8)
    class UWBP_IngameConstruction_Num_C* WBP_IngameConstruction_Num_1;                // 0x02F0 (size: 0x8)
    class UWBP_IngameConstruction_Num_C* WBP_IngameConstruction_Num_2;                // 0x02F8 (size: 0x8)
    class UWBP_IngameConstruction_Num_C* WBP_IngameConstruction_Num_3;                // 0x0300 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;                            // 0x0308 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon_1;                          // 0x0310 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon_2;                          // 0x0318 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon_3;                          // 0x0320 (size: 0x8)
    TArray<class UWBP_IngameConstruction_Num_C*> ItemNums;                            // 0x0328 (size: 0x10)
    FDataTableRowHandle keyGuideMsgHandle_Reserve;                                    // 0x0338 (size: 0x10)
    FDataTableRowHandle keyGuideMsgHandle_ReserveContinue;                            // 0x0348 (size: 0x10)
    FDataTableRowHandle keyGuideMsgHandle_Cancel;                                     // 0x0358 (size: 0x10)
    FDataTableRowHandle keyGuideMsgHandle_Close;                                      // 0x0368 (size: 0x10)
    TArray<class UWBP_PalCommonItemIcon_C*> ItemIconArray;                            // 0x0378 (size: 0x10)
    FDataTableRowHandle keyGuideMsgHandle_RotateRight;                                // 0x0388 (size: 0x10)
    FDataTableRowHandle keyGuideMsgHandle_RotateLeft;                                 // 0x0398 (size: 0x10)

    void SetVisibilityOutSideBaseCampWarning(ESlateVisibility NewVisibility);
    void SetupKeyGuide();
    void SetEnableWarning(bool isEnable);
    void SetMaterial(int32 Index, FName StaticItemId, int32 ItemCount);
    void Setup(FPalBuildObjectData inBuildObjectData);
    void SetWarningText(FText InText);
    void ResetAllUI();
    void SetBuildObjectName(FText InName);
    void Construct();
    void OnInitialized();
    void ExecuteUbergraph_WBP_IngameConstruction(int32 EntryPoint);
}; // Size: 0x3A8

#endif

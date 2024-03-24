#ifndef UE4SS_SDK_WBP_IngameMenuConstruction_ItemSlot_HPP
#define UE4SS_SDK_WBP_IngameMenuConstruction_ItemSlot_HPP

class UWBP_IngameMenuConstruction_ItemSlot_C : public UUserWidget
{
    class UWidgetAnimation* Anm_LtoS;                                                 // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_OnToOff;                                              // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_81;                                   // 0x0288 (size: 0x8)
    class UCanvasPanel* CanvasPanel_2;                                                // 0x0290 (size: 0x8)
    class UImage* Icon;                                                               // 0x0298 (size: 0x8)
    class UWBP_MainMenu_NewDot_C* WBP_MainMenu_NewDot;                                // 0x02A0 (size: 0x8)
    class UWBP_PalCommonNewMark_0_C* WBP_PalCommonNewMark_0;                          // 0x02A8 (size: 0x8)
    FPalBuildObjectData BuildObjectData;                                              // 0x02B0 (size: 0x78)

    void SetNewIconVisibility(bool Visable);
    FVector2D GetCanvasSize();
    void PlayAnimCanNotBuild();
    void PlayAnimToSmall();
    void Setup(FPalBuildObjectData BuildObjectData);
}; // Size: 0x328

#endif

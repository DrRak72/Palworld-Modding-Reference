#ifndef UE4SS_SDK_WBP_MainMenu_Technology_Point_HPP
#define UE4SS_SDK_WBP_MainMenu_Technology_Point_HPP

class UWBP_MainMenu_Technology_Point_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Boss;                                                 // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Normal;                                               // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Blink;                                                // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_EnableToDisable;                                      // 0x0298 (size: 0x8)
    class UImage* BlinkEff_2;                                                         // 0x02A0 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Title;                                  // 0x02A8 (size: 0x8)
    class UImage* Image_Icon_TechPoint_0;                                             // 0x02B0 (size: 0x8)
    class UImage* Image_Icon_TechPoint_1;                                             // 0x02B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Point;                                             // 0x02C0 (size: 0x8)
    bool IsBossTechPoint;                                                             // 0x02C8 (size: 0x1)
    FDataTableRowHandle NormalMsgId;                                                  // 0x02D0 (size: 0x10)
    FDataTableRowHandle BossMsgId;                                                    // 0x02E0 (size: 0x10)

    void OnUpdateTechnologyPoint(int32 TechnologyPoint);
    void AnmEvent_Enable();
    void AnmEvent_DIsable();
    void Construct();
    void Destruct();
    void ExecuteUbergraph_WBP_MainMenu_Technology_Point(int32 EntryPoint);
}; // Size: 0x2F0

#endif

#ifndef UE4SS_SDK_WBP_InventoryEquipment_GrowsPointButton_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_GrowsPointButton_HPP

class UWBP_InventoryEquipment_GrowsPointButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Blink;                                                // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_EnableToDisable;                                      // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0290 (size: 0x8)
    class UImage* Flare;                                                              // 0x0298 (size: 0x8)
    class UImage* Image_214;                                                          // 0x02A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Point;                                             // 0x02A8 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x02B0 (size: 0x8)
    bool isEnableButton;                                                              // 0x02B8 (size: 0x1)

    void SetSimulatePoint(int32 Point);
    void SetPoint(int32 Point);
    void Finished_A20F78AE45F2878481C71DBF29E2326A();
    void AnmEvent_Active();
    void AnmEvent_Deactive();
    void ExecuteUbergraph_WBP_InventoryEquipment_GrowsPointButton(int32 EntryPoint);
}; // Size: 0x2B9

#endif

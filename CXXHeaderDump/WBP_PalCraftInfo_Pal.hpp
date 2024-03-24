#ifndef UE4SS_SDK_WBP_PalCraftInfo_Pal_HPP
#define UE4SS_SDK_WBP_PalCraftInfo_Pal_HPP

class UWBP_PalCraftInfo_Pal_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Num_HP_5;                               // 0x0280 (size: 0x8)
    class UCanvasPanel* FixedAssignCanvas;                                            // 0x0288 (size: 0x8)
    class UProgressBar* Gauge_Hunger;                                                 // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowSanity;                                         // 0x0298 (size: 0x8)
    class UWBP_PalCommonCharacterSlot_C* WBP_PalCommonCharacterSlot;                  // 0x02A0 (size: 0x8)
    class UMaterial* defaultFontMaterial;                                             // 0x02A8 (size: 0x8)
    TSoftObjectPtr<UPalIndividualCharacterHandle> bindedHandle;                       // 0x02B0 (size: 0x30)
    float savedMaxSanity;                                                             // 0x02E0 (size: 0x4)
    float savedMaxHunger;                                                             // 0x02E4 (size: 0x4)

    void Clear();
    void UpdateHunger(float Current, float Last);
    void UpdateSanity(float nowSanity, float oldSanity);
    void BindEvent(class UPalIndividualCharacterParameter* paremter);
    void UnbindEvent();
    void SetTargetPal(class UPalIndividualCharacterSlot* targetSlot, bool isFixedAssign);
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalCraftInfo_Pal(int32 EntryPoint);
}; // Size: 0x2E8

#endif

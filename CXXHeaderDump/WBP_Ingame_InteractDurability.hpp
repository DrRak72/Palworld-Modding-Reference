#ifndef UE4SS_SDK_WBP_Ingame_InteractDurability_HPP
#define UE4SS_SDK_WBP_Ingame_InteractDurability_HPP

class UWBP_Ingame_InteractDurability_C : public UPalUIMapObjectHPWorldHUD
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Anm_Color_NormalToLittle;                                 // 0x0410 (size: 0x8)
    class UProgressBar* ProgressBar_HP;                                               // 0x0418 (size: 0x8)
    class UBP_PalTextBlock_C* Text_HP_Current;                                        // 0x0420 (size: 0x8)
    class UBP_PalTextBlock_C* Text_HP_MAX;                                            // 0x0428 (size: 0x8)
    bool DamegeReacted;                                                               // 0x0430 (size: 0x1)
    int32 CurrentHP;                                                                  // 0x0434 (size: 0x4)
    class UPalMapObjectModel* Model;                                                  // 0x0438 (size: 0x8)

    void OnSetup();
    void ShowHP(class APalMapObject* MapObject, EPalHUDDisplayType DisplayType);
    void UpdateHP(class UPalMapObjectModel* Model);
    void CollapsePanel();
    void ExecuteUbergraph_WBP_Ingame_InteractDurability(int32 EntryPoint);
}; // Size: 0x440

#endif

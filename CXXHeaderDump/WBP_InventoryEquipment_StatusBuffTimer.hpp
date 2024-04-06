#ifndef UE4SS_SDK_WBP_InventoryEquipment_StatusBuffTimer_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_StatusBuffTimer_HPP

class UWBP_InventoryEquipment_StatusBuffTimer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Image_Arrow_Buff;                                                   // 0x0280 (size: 0x8)
    class UImage* Image_Arrow_Debuff;                                                 // 0x0288 (size: 0x8)
    class UImage* Image_Base;                                                         // 0x0290 (size: 0x8)
    class UImage* Image_Gauge;                                                        // 0x0298 (size: 0x8)
    TMap<class EPalFoodStatusEffectType, class UTexture*> BuffIcons;                  // 0x02A0 (size: 0x50)
    TMap<class EPalFoodStatusEffectType, class UTexture*> DebuffIcons;                // 0x02F0 (size: 0x50)
    FTimerHandle StatusTimerUpdateTimer;                                              // 0x0340 (size: 0x8)
    class UPalIndividualCharacterParameter* CurrentIndividualParam;                   // 0x0348 (size: 0x8)
    TMap<class EPalFoodStatusEffectType, class UTexture2D*> BaseIcons;                // 0x0350 (size: 0x50)
    bool Is Regene;                                                                   // 0x03A0 (size: 0x1)

    void SetFoodBuff(EPalFoodStatusEffectType BuffType, bool IsBuff, class UPalIndividualCharacterParameter* individualParam, bool IsRegene);
    void Destruct();
    void UpdateStatusTime();
    void ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffTimer(int32 EntryPoint);
}; // Size: 0x3A1

#endif

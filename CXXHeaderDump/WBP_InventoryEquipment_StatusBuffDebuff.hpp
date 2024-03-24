#ifndef UE4SS_SDK_WBP_InventoryEquipment_StatusBuffDebuff_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_StatusBuffDebuff_HPP

class UWBP_InventoryEquipment_StatusBuffDebuff_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_BuffToDebuff;                                         // 0x0280 (size: 0x8)
    class UImage* BuffBase;                                                           // 0x0288 (size: 0x8)
    class UImage* DebuffBase;                                                         // 0x0290 (size: 0x8)
    class UImage* Icon;                                                               // 0x0298 (size: 0x8)

    void SetBuff(EPalFoodStatusEffectType BuffType, int32 BuffValue);
    void ExecuteUbergraph_WBP_InventoryEquipment_StatusBuffDebuff(int32 EntryPoint);
}; // Size: 0x2A0

#endif

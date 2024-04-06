#ifndef UE4SS_SDK_BP_PalQuestBlock_EquipArmor_HPP
#define UE4SS_SDK_BP_PalQuestBlock_EquipArmor_HPP

class UBP_PalQuestBlock_EquipArmor_C : public UPalQuestBlock
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0050 (size: 0x8)
    FDataTableRowHandle NewVar;                                                       // 0x0058 (size: 0x10)
    FTimerHandle NewVar_0;                                                            // 0x0068 (size: 0x8)

    void BP_PalQuestBlock_EquipArmor_AutoGenFunc();
    void GetDescriptionText(FText& OutText);
    void OnSetup_ForBP();
    void OnComplete_ForBP();
    void ExecuteUbergraph_BP_PalQuestBlock_EquipArmor(int32 EntryPoint);
}; // Size: 0x70

#endif

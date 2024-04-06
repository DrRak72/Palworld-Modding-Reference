#ifndef UE4SS_SDK_BP_PalQuestBlock_CraftShield_HPP
#define UE4SS_SDK_BP_PalQuestBlock_CraftShield_HPP

class UBP_PalQuestBlock_CraftShield_C : public UPalQuestBlock
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0050 (size: 0x8)
    FTimerHandle NewVar;                                                              // 0x0058 (size: 0x8)

    void CheckShield();
    void GetDescriptionText(FText& OutText);
    void OnSetup_ForBP();
    void OnComplete_ForBP();
    void ExecuteUbergraph_BP_PalQuestBlock_CraftShield(int32 EntryPoint);
}; // Size: 0x60

#endif

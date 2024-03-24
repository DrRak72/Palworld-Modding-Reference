#ifndef UE4SS_SDK_WBP_BattleEntry_Info_HPP
#define UE4SS_SDK_WBP_BattleEntry_Info_HPP

class UWBP_BattleEntry_Info_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Entry;                                             // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Text_EntryNum;                                          // 0x0290 (size: 0x8)

    void Finished_DCF333D941FA61FD2550718E81C65E72();
    void SetEntryInfo(FName BossType, const TArray<class APalPlayerCharacter*>& EntryPlayers);
    void ExecuteUbergraph_WBP_BattleEntry_Info(int32 EntryPoint);
}; // Size: 0x298

#endif

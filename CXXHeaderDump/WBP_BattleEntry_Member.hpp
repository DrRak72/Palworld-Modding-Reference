#ifndef UE4SS_SDK_WBP_BattleEntry_Member_HPP
#define UE4SS_SDK_WBP_BattleEntry_Member_HPP

class UWBP_BattleEntry_Member_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Listup;                                                   // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* Text_BaseCampName;                                      // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalNum;                                            // 0x0290 (size: 0x8)
    class UVerticalBox* VerticalBox_All;                                              // 0x0298 (size: 0x8)
    TArray<class UWBP_BattleEntry_MemberList_C*> WBP_MemberLists;                     // 0x02A0 (size: 0x10)

    void RemoveTaskDetailText();
    void AddTaslDetailText(FText Text, int32 nowNum, int32 requireNum);
    void OnChangedBossBattlePlayerListEvent(FName BossType, const TArray<class APalPlayerCharacter*>& PlayerList);
    void ExecuteUbergraph_WBP_BattleEntry_Member(int32 EntryPoint);
}; // Size: 0x2B0

#endif

#ifndef UE4SS_SDK_WBP_BattleEntry_MemberList_HPP
#define UE4SS_SDK_WBP_BattleEntry_MemberList_HPP

class UWBP_BattleEntry_MemberList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Listup;                                                   // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PlayerName;                                          // 0x0288 (size: 0x8)
    class UImage* Image_HostIcon;                                                     // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LvNum;                                             // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LvTitle;                                           // 0x02A0 (size: 0x8)

    void Construct();
    void SetPlayerInfo(FString PlayerName, int32 PlayLv, bool IsHost);
    void SetValidation(bool IsValid);
    void ExecuteUbergraph_WBP_BattleEntry_MemberList(int32 EntryPoint);
}; // Size: 0x2A8

#endif

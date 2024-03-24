#ifndef UE4SS_SDK_WBP_GuildMemberMenu_HPP
#define UE4SS_SDK_WBP_GuildMemberMenu_HPP

class UWBP_GuildMemberMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Base;                                                               // 0x0280 (size: 0x8)
    class UImage* BaseShadow;                                                         // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_122;                                  // 0x0290 (size: 0x8)
    class UImage* Dot_0;                                                              // 0x0298 (size: 0x8)
    class UImage* Dot_1;                                                              // 0x02A0 (size: 0x8)
    class UImage* Frame;                                                              // 0x02A8 (size: 0x8)
    class UImage* HeadBase;                                                           // 0x02B0 (size: 0x8)
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList;                        // 0x02B8 (size: 0x8)
    class UWBP_GuildMemberMenuList_C* WBP_GuildMemberMenuList_1;                      // 0x02C0 (size: 0x8)
    FDataTableRowHandle ChangeAdminMsgID;                                             // 0x02C8 (size: 0x10)
    FDataTableRowHandle BanPlayerMsgID;                                               // 0x02D8 (size: 0x10)
    FWBP_GuildMemberMenu_COnClickedChangeAdmin OnClickedChangeAdmin;                  // 0x02E8 (size: 0x10)
    void OnClickedChangeAdmin();
    FWBP_GuildMemberMenu_COnClickedBanPlayer OnClickedBanPlayer;                      // 0x02F8 (size: 0x10)
    void OnClickedBanPlayer();

    void GetTopFocusTarget(class UWidget*& TargetWidget);
    void SetPlayerName(FString DisplayName);
    void OnInitialized();
    void BndEvt__WBP_GuildMemberMenu_WBP_GuildMemberMenuList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
    void BndEvt__WBP_GuildMemberMenu_WBP_GuildMemberMenuList_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
    void ExecuteUbergraph_WBP_GuildMemberMenu(int32 EntryPoint);
    void OnClickedBanPlayer__DelegateSignature();
    void OnClickedChangeAdmin__DelegateSignature();
}; // Size: 0x308

#endif

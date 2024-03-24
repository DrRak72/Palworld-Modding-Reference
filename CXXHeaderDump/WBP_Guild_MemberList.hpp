#ifndef UE4SS_SDK_WBP_Guild_MemberList_HPP
#define UE4SS_SDK_WBP_Guild_MemberList_HPP

class UWBP_Guild_MemberList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Network_OnToOff;                                      // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_RoleTextColor;                                        // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0290 (size: 0x8)
    class UImage* Base;                                                               // 0x0298 (size: 0x8)
    class UImage* CursorArrow;                                                        // 0x02A0 (size: 0x8)
    class UImage* Dot_0;                                                              // 0x02A8 (size: 0x8)
    class UImage* Dot_1;                                                              // 0x02B0 (size: 0x8)
    class UImage* Dot_2;                                                              // 0x02B8 (size: 0x8)
    class UImage* Dot_3;                                                              // 0x02C0 (size: 0x8)
    class UImage* Frame;                                                              // 0x02C8 (size: 0x8)
    class UImage* Frame_1;                                                            // 0x02D0 (size: 0x8)
    class UImage* Network;                                                            // 0x02D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Admin;                                             // 0x02E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LoginState;                                        // 0x02E8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PlayerName;                                        // 0x02F0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02F8 (size: 0x8)
    FDataTableRowHandle OnlineMsgID;                                                  // 0x0300 (size: 0x10)
    FDataTableRowHandle OfflineMsgID;                                                 // 0x0310 (size: 0x10)
    FWBP_Guild_MemberList_COnClicked OnClicked;                                       // 0x0320 (size: 0x10)
    void OnClicked(class UWBP_Guild_MemberList_C* Widget);
    FPalUIGuildMemberDisplayInfo MyDisplayInfo;                                       // 0x0330 (size: 0x18)
    FWBP_Guild_MemberList_COnHovered OnHovered;                                       // 0x0348 (size: 0x10)
    void OnHovered(class UWBP_Guild_MemberList_C* Widget);
    FGuid Player UId;                                                                 // 0x0358 (size: 0x10)

    void GetFocusTarget(class UWidget*& TargetWidget);
    void GetDisplayInfo(FPalUIGuildMemberDisplayInfo& DisplayInfo);
    void SetPlayerName(FString PlayerName);
    void SetIsAdmin(bool IsAdmin);
    void Setup(FPalUIGuildMemberDisplayInfo DisplayInfo, FGuid PlayerUId);
    void SetIsOnline(bool IsOnline);
    void BndEvt__WBP_Guild_MemberList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Guild_MemberList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Guild_MemberList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Guild_MemberList(int32 EntryPoint);
    void OnHovered__DelegateSignature(class UWBP_Guild_MemberList_C* Widget);
    void OnClicked__DelegateSignature(class UWBP_Guild_MemberList_C* Widget);
}; // Size: 0x368

#endif

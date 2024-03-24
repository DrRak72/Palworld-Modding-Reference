#ifndef UE4SS_SDK_WBP_MainMenu_PalSkillSwap_HPP
#define UE4SS_SDK_WBP_MainMenu_PalSkillSwap_HPP

class UWBP_MainMenu_PalSkillSwap_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0438 (size: 0x8)
    class UImage* BaseBlack;                                                          // 0x0440 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Title;                                  // 0x0448 (size: 0x8)
    class UVerticalBox* VerticalBox_SkillList;                                        // 0x0450 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Active_C* WBP_MainMenu_Pal_Skill_Active;            // 0x0458 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Active_C* WBP_MainMenu_Pal_Skill_Active_1;          // 0x0460 (size: 0x8)
    class UWBP_MainMenu_PalSkillInfo_C* WBP_MainMenu_PalSkillInfo;                    // 0x0468 (size: 0x8)
    FWBP_MainMenu_PalSkillSwap_COnSelected OnSelected;                                // 0x0470 (size: 0x10)
    void OnSelected(EPalWazaID SelectedWazaId);
    FDataTableRowHandle SkillSwapMsgID;                                               // 0x0480 (size: 0x10)
    FDataTableRowHandle SkillSwapNothingMsgID;                                        // 0x0490 (size: 0x10)

    class UWidget* BP_GetDesiredFocusTarget();
    FEventReply On_BaseBlack_MouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnClicked_Internal(class UWBP_MainMenu_Pal_Skill_Active_C* SkillWidget);
    void OnUnhovered_Internal(class UWBP_MainMenu_Pal_Skill_Active_C* SkillWidget);
    void OnHovered_Internal(class UWBP_MainMenu_Pal_Skill_Active_C* SkillWidget);
    void Setup(TArray<EPalWazaID>& MasteredSkills, TArray<EPalWazaID>& EquipedSkills);
    void OnSetup();
    void OnClosed();
    void Destruct();
    void ExecuteUbergraph_WBP_MainMenu_PalSkillSwap(int32 EntryPoint);
    void OnSelected__DelegateSignature(EPalWazaID SelectedWazaId);
}; // Size: 0x4A0

#endif

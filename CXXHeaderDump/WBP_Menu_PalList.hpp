#ifndef UE4SS_SDK_WBP_Menu_PalList_HPP
#define UE4SS_SDK_WBP_Menu_PalList_HPP

class UWBP_Menu_PalList_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0578 (size: 0x8)
    class UWidgetAnimation* Anm_EmptyNormalToFocus;                                   // 0x0580 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0588 (size: 0x8)
    class UWidgetAnimation* Anm_Open_normal;                                          // 0x0590 (size: 0x8)
    class UWidgetAnimation* Anm_Normal;                                               // 0x0598 (size: 0x8)
    class UWidgetAnimation* Anm_Focus;                                                // 0x05A0 (size: 0x8)
    class UWidgetAnimation* Anm_Push;                                                 // 0x05A8 (size: 0x8)
    class UWidgetAnimation* Anm_Open_focus;                                           // 0x05B0 (size: 0x8)
    class UImage* Empty;                                                              // 0x05B8 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x05C0 (size: 0x8)
    class UProgressBar* ProgressBar_219;                                              // 0x05C8 (size: 0x8)
    class UProgressBar* ProgressBar_Hunger;                                           // 0x05D0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Pal_hp_L;                                          // 0x05D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Pal_hp_R;                                          // 0x05E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Pal_Level;                                         // 0x05E8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Pal_LvText;                                        // 0x05F0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Pal_name;                                          // 0x05F8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0600 (size: 0x8)
    FWBP_Menu_PalList_COnClickedPanel OnClickedPanel;                                 // 0x0608 (size: 0x10)
    void OnClickedPanel(class UPalIndividualCharacterHandle* Handle);
    FWBP_Menu_PalList_COnHoveredPanel OnHoveredPanel;                                 // 0x0618 (size: 0x10)
    void OnHoveredPanel(class UPalIndividualCharacterHandle* Handle);
    EPalWazaID CurrentWazaIdToUse;                                                    // 0x0628 (size: 0x1)
    FWBP_Menu_PalList_COnUnhoveredPanel OnUnhoveredPanel;                             // 0x0630 (size: 0x10)
    void OnUnhoveredPanel();
    bool Interactable;                                                                // 0x0640 (size: 0x1)

    void SetCurrentWazaId(EPalWazaID WazaID);
    void SetInteractable(bool IsInteractable);
    void UpdateWazaLearnable(class UPalIndividualCharacterParameter* Individual Parameter, EPalWazaID WazaID);
    void Focus();
    void Unbind();
    void BindFromHandle(class UPalIndividualCharacterHandle* targetHandle);
    void UpdateHP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void UpdateHunger(double Now, double Max);
    void UpdateNickName(FString newNickName);
    void Update Level(int32 NewLevel);
    void AnmEvent_Push();
    void AnmEvent_Open();
    void AnmEvent_Focus();
    void AnmEvent_Unfocus();
    void AnmEvent_ResetPush();
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_Menu_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Menu_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Menu_PalList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Menu_PalList(int32 EntryPoint);
    void OnUnhoveredPanel__DelegateSignature();
    void OnHoveredPanel__DelegateSignature(class UPalIndividualCharacterHandle* Handle);
    void OnClickedPanel__DelegateSignature(class UPalIndividualCharacterHandle* Handle);
}; // Size: 0x641

#endif

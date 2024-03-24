#ifndef UE4SS_SDK_WBP_Paldex_List_HPP
#define UE4SS_SDK_WBP_Paldex_List_HPP

class UWBP_Paldex_List_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_EmptyNormalToFocus;                                   // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_NotCapture;                                           // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_Normal;                                               // 0x0298 (size: 0x8)
    class UWidgetAnimation* Anm_Focus;                                                // 0x02A0 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x02A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_IndexValue_1;                                      // 0x02B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_IndexValue_10;                                     // 0x02B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_IndexValue_100;                                    // 0x02C0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalName;                                           // 0x02C8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Suffix;                                            // 0x02D0 (size: 0x8)
    class UWBP_MainMenu_NewDot_C* WBP_MainMenu_NewDot;                                // 0x02D8 (size: 0x8)
    class UWBP_MainMenu_Pal_StatusElement_C* WBP_MainMenu_Pal_StatusElement;          // 0x02E0 (size: 0x8)
    class UWBP_MainMenu_Pal_StatusElement_C* WBP_MainMenu_Pal_StatusElement_1;        // 0x02E8 (size: 0x8)
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;                  // 0x02F0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02F8 (size: 0x8)
    FWBP_Paldex_List_COnHovered OnHovered;                                            // 0x0300 (size: 0x10)
    void OnHovered(FName CharacterID, class UWBP_Paldex_List_C* selfWidget);
    FName ChachedBaseCharacterID;                                                     // 0x0310 (size: 0x8)
    bool isNotCaptured;                                                               // 0x0318 (size: 0x1)
    double notCapturedFraction;                                                       // 0x0320 (size: 0x8)
    FWBP_Paldex_List_COnClicked OnClicked;                                            // 0x0328 (size: 0x10)
    void OnClicked(FName CharacterID, class UWBP_Paldex_List_C* Widget);

    void SetVisibilityNewMark(ESlateVisibility NewVisibility);
    void OnClickEvent();
    void Setup_Captured(FPalUIPaldex_DisplayInfo DisplayInfo);
    void Setup_Encounted(FPalUIPaldex_DisplayInfo DisplayInfo);
    void Setup_NotEncounted(FPalUIPaldex_DisplayInfo DisplayInfo);
    void Focus();
    void Setup(FPalUIPaldex_DisplayInfo DisplayInfo);
    void AnmEvent_Focus();
    void AnmEvent_Unfocus();
    void AnmEvent_NotCapture();
    void Construct();
    void BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Paldex_List(int32 EntryPoint);
    void OnClicked__DelegateSignature(FName CharacterID, class UWBP_Paldex_List_C* Widget);
    void OnHovered__DelegateSignature(FName CharacterID, class UWBP_Paldex_List_C* selfWidget);
}; // Size: 0x338

#endif

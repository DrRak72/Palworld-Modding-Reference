#ifndef UE4SS_SDK_WBP_PalStatus_HPP
#define UE4SS_SDK_WBP_PalStatus_HPP

class UWBP_PalStatus_C : public UPalUICharacterStatus
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UCanvasPanel* Canvas_CaptureImage;                                          // 0x0438 (size: 0x8)
    class UImage* Image_Floor;                                                        // 0x0440 (size: 0x8)
    class UImage* Image_Floor_1;                                                      // 0x0448 (size: 0x8)
    class UImage* Image_PalReflection;                                                // 0x0450 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NothingPal;                                        // 0x0458 (size: 0x8)
    class UWBP_MainMenu_Pal_00_C* WBP_MainMenu_Pal_00;                                // 0x0460 (size: 0x8)
    class UWBP_PalMonsterInframeRender_C* WBP_PalInframeRender;                       // 0x0468 (size: 0x8)
    TArray<class UPalIndividualCharacterHandle*> displayHandles;                      // 0x0470 (size: 0x10)
    class UTextureRenderTarget2D* Render Target;                                      // 0x0480 (size: 0x8)
    int32 lastShowHandleIndex;                                                        // 0x0488 (size: 0x4)
    int32 lastShowRenderPalIndex;                                                     // 0x048C (size: 0x4)
    FPalDataTableRowName_UIInputAction ToParameterDetailAction;                       // 0x0490 (size: 0x8)
    FPalUIActionBindData ToParameterDetailActionHandle;                               // 0x0498 (size: 0x4)
    FPalDataTableRowName_UIInputAction ToSkillDetailAction;                           // 0x049C (size: 0x8)
    FPalUIActionBindData ToSkillDetailActionHandle;                                   // 0x04A4 (size: 0x4)
    bool IsOnePalModel;                                                               // 0x04A8 (size: 0x1)
    FPalDataTableRowName_UIInputAction DropPalAction;                                 // 0x04AC (size: 0x8)
    FPalUIActionBindData DropPalActionHandle;                                         // 0x04B4 (size: 0x4)
    class UPalIndividualCharacterHandle* LastHoveredPalHandle;                        // 0x04B8 (size: 0x8)
    FDataTableRowHandle DropPalDialogMsgID;                                           // 0x04C0 (size: 0x10)

    void OnClosedDropPalDialog(bool bResult);
    void OnTriggerDropPal();
    void UnhoveredAnyPalPanel_Internal();
    void HoveredAnyPalPanel_Internal(class UPalIndividualCharacterHandle* Handle);
    void ToSkillDetail();
    void ToParameterDetail();
    void SetupInputAction();
    void UnbindInputAction();
    void Is Editing Nick Name(bool& IsEditing);
    void BackToList();
    void ShouldBackList(bool& shouldBack);
    void Setup One Pal(class UPalIndividualCharacterHandle* CharacterHandle);
    class UWidget* BP_GetDesiredFocusTarget();
    void Get Panel Index from Handle(class UPalIndividualCharacterHandle* Handle, int32& Index, bool& IsValid);
    void Setup_MultiPal();
    void Setup_NothingPal();
    void Setup(TArray<class UPalIndividualCharacterHandle*>& Handles);
    void ClampInputNickName(FText InText, FText& clampedNickName);
    void NickNameFinalCheck(FText InText, TEnumAsByte<ETextCommit::Type> textCommit, FText& finalNickName);
    void Construct();
    void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_0_OnClickedAnyPalPanel__DelegateSignature(class UPalIndividualCharacterHandle* Handle);
    void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_1_OnHoveredAnyPalPanel__DelegateSignature(class UPalIndividualCharacterHandle* Handle);
    void Destruct();
    void OnCompletedCaptureActorSetup();
    void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_3_OnCommitedNickName__DelegateSignature(FText NewNickName);
    void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_5_OnSelectedChangeActiveSkill__DelegateSignature(class UPalIndividualCharacterHandle* targetHandle, EPalWazaID changeWazaID, EPalWazaID newWazaID);
    void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_4_OnRequestedRemoveWaza__DelegateSignature(EPalWazaID WazaID, class UPalIndividualCharacterHandle* targetHandle);
    void BndEvt__WBP_PalStatus_WBP_MainMenu_Pal_00_K2Node_ComponentBoundEvent_2_OnUnhoveredAnyPalPanel__DelegateSignature();
    void ExecuteUbergraph_WBP_PalStatus(int32 EntryPoint);
}; // Size: 0x4D0

#endif

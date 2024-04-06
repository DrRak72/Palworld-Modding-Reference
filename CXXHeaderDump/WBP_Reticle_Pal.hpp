#ifndef UE4SS_SDK_WBP_Reticle_Pal_HPP
#define UE4SS_SDK_WBP_Reticle_Pal_HPP

class UWBP_Reticle_Pal_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Loop;                                                 // 0x0290 (size: 0x8)
    class UImage* Icon;                                                               // 0x0298 (size: 0x8)
    class UImage* Reticle_00;                                                         // 0x02A0 (size: 0x8)
    class UImage* Reticle_01;                                                         // 0x02A8 (size: 0x8)
    class UImage* Reticle_02;                                                         // 0x02B0 (size: 0x8)
    class UImage* ReticleCircle_03;                                                   // 0x02B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_AssignableDetail;                                  // 0x02C0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_AssignableTargetObjectName;                        // 0x02C8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_OtomoDead;                                         // 0x02D0 (size: 0x8)
    class UVerticalBox* VerticalBox_122;                                              // 0x02D8 (size: 0x8)
    FDataTableRowHandle AssignableMsgId;                                              // 0x02E0 (size: 0x10)
    FDataTableRowHandle UnassignableMsgId;                                            // 0x02F0 (size: 0x10)
    FDataTableRowHandle DeadPalThrowMsgID;                                            // 0x0300 (size: 0x10)

    void SetThrowableableDetail(FPalUIAimReticleMapObjectThrowableData throwableData);
    void SetOtomoDeadDetail(class UPalIndividualCharacterParameter* TargetIndividualParameter);
    void SetAssignableDetail(FPalUIAimReticleMapObjectAssignableData assignableData);
    void SetVisibilityAssignableDetail(ESlateVisibility NewVisibility);
    void AnmEvent_Open();
    void AnmEvent_Close();
    void OnInitialized();
    void ExecuteUbergraph_WBP_Reticle_Pal(int32 EntryPoint);
}; // Size: 0x310

#endif

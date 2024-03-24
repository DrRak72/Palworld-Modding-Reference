#ifndef UE4SS_SDK_WBP_Ingame_PalHPGauge_HPP
#define UE4SS_SDK_WBP_Ingame_PalHPGauge_HPP

class UWBP_Ingame_PalHPGauge_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0578 (size: 0x8)
    class UWidgetAnimation* Anm_KeyGuideAttentionLOOP;                                // 0x0580 (size: 0x8)
    class UWidgetAnimation* Anm_PalActive;                                            // 0x0588 (size: 0x8)
    class UWidgetAnimation* Anm_HoldOut;                                              // 0x0590 (size: 0x8)
    class UWidgetAnimation* Anm_HoldIn;                                               // 0x0598 (size: 0x8)
    class UWidgetAnimation* Anm_PalSelect_R;                                          // 0x05A0 (size: 0x8)
    class UWidgetAnimation* Anm_PalSelect_L;                                          // 0x05A8 (size: 0x8)
    class UCanvasPanel* Canvas_HP;                                                    // 0x05B0 (size: 0x8)
    class UCanvasPanel* Canvas_PalStatus;                                             // 0x05B8 (size: 0x8)
    class UCanvasPanel* Canvas_Slot_Center;                                           // 0x05C0 (size: 0x8)
    class UCanvasPanel* Canvas_SlotL1;                                                // 0x05C8 (size: 0x8)
    class UCanvasPanel* Canvas_SlotL2;                                                // 0x05D0 (size: 0x8)
    class UCanvasPanel* Canvas_SlotR1;                                                // 0x05D8 (size: 0x8)
    class UCanvasPanel* Canvas_SlotR2;                                                // 0x05E0 (size: 0x8)
    class UImage* Image_ActiveCircle_Center;                                          // 0x05E8 (size: 0x8)
    class UImage* Image_ActiveCircle_L1;                                              // 0x05F0 (size: 0x8)
    class UImage* Image_ActiveCircle_L2;                                              // 0x05F8 (size: 0x8)
    class UImage* Image_ActiveCircle_R1;                                              // 0x0600 (size: 0x8)
    class UImage* Image_ActiveCircle_R2;                                              // 0x0608 (size: 0x8)
    class UProgressBar* ProgressBar_HPGauge;                                          // 0x0610 (size: 0x8)
    class UProgressBar* ProgressBar_HPGauge_Back;                                     // 0x0618 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LvValue;                                           // 0x0620 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalName;                                           // 0x0628 (size: 0x8)
    class UWBP_PalCommonCharacterSlot_C* WBP_PalCommonCharacterSlot;                  // 0x0630 (size: 0x8)
    class UWBP_PalCommonCharacterSlot_C* WBP_PalCommonCharacterSlot_L;                // 0x0638 (size: 0x8)
    class UWBP_PalCommonCharacterSlot_C* WBP_PalCommonCharacterSlot_L2;               // 0x0640 (size: 0x8)
    class UWBP_PalCommonCharacterSlot_C* WBP_PalCommonCharacterSlot_R;                // 0x0648 (size: 0x8)
    class UWBP_PalCommonCharacterSlot_C* WBP_PalCommonCharacterSlot_R2;               // 0x0650 (size: 0x8)
    class UWBP_PalElementIcon_C* WBP_PalElementIcon_Double_00;                        // 0x0658 (size: 0x8)
    class UWBP_PalElementIcon_C* WBP_PalElementIcon_Double_01;                        // 0x0660 (size: 0x8)
    class UWBP_PalElementIcon_C* WBP_PalElementIcon_Single;                           // 0x0668 (size: 0x8)
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon_Decrement_1;    // 0x0670 (size: 0x8)
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon_Increment;      // 0x0678 (size: 0x8)
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon_ThrowPal;       // 0x0680 (size: 0x8)
    class UPalUIDelayGaugeCalculator* DelayHPGauge;                                   // 0x0688 (size: 0x8)
    int32 CachedActivatedOtomoID;                                                     // 0x0690 (size: 0x4)
    int32 CachedSelectedOtomoIndex;                                                   // 0x0694 (size: 0x4)
    bool IsEquipedOtomoThrowWeapon;                                                   // 0x0698 (size: 0x1)
    bool IsThrowPalActiveAnimeFinished;                                               // 0x0699 (size: 0x1)

    void Update Level Binded(int32 NewLevel);
    void GetPrevOtomoSlot(class UPalIndividualCharacterSlot*& Slot, bool& IsEmpty);
    void GetNextOtomoSlot(class UPalIndividualCharacterSlot*& Slot, bool& IsEmpty);
    void OnDecrementedOtomo_FromController();
    void OnIncrementedOtomo_FromController();
    void OnStartAim();
    void OnEndAim();
    void OnChangedWeapon(class APalWeaponBase* weapon);
    void OnDeactivatedOtomo();
    void OnActivatedOtomo();
    void UpdateNickName_Binded(FString newNickName);
    void UpdateHP_Binded(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void SetElementType(EPalElementType type1, EPalElementType type2);
    void On Update Otomo Index();
    void UpdateOtomoList();
    void OnUpdateOtomoSlot(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle);
    void Setup();
    void Finished_1811421C440B0864689BD0B33F2F9D51();
    void Finished_9B82422440F7C97D278AB2B15E642EE3();
    void Finished_1F59E19C478A6C6286266A9C072DA24B();
    void AnmEvent_OtomoActive();
    void AnmEvent_OtomoDeactivate();
    void AnmEvent_NextOtomo();
    void AnmEvent_PrevOtomo();
    void AnmEvent_ThrowActivate();
    void AnmEvent_ThrowOtomoDeactive();
    void AnmEvent_EnableSummonPalGuide(bool EnableFlag);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialized();
    void CustomEvent(int32 addLevel, int32 nowLevel);
    void OnSetup_AfterCreatedPlayer();
    void ExecuteUbergraph_WBP_Ingame_PalHPGauge(int32 EntryPoint);
}; // Size: 0x69A

#endif

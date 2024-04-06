#ifndef UE4SS_SDK_WBP_Ingame_PalSkillGauge_HPP
#define UE4SS_SDK_WBP_Ingame_PalSkillGauge_HPP

class UWBP_Ingame_PalSkillGauge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Unlock;                                               // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Lock;                                                 // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Activate_Keep;                                        // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_Activate;                                             // 0x0298 (size: 0x8)
    class UWidgetAnimation* Anm_InputHold;                                            // 0x02A0 (size: 0x8)
    class UWidgetAnimation* Anm_CoolTime_Over;                                        // 0x02A8 (size: 0x8)
    class UWidgetAnimation* Anm_Disable;                                              // 0x02B0 (size: 0x8)
    class UWidgetAnimation* Anm_Enable;                                               // 0x02B8 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_SkillCT;                                 // 0x02C0 (size: 0x8)
    class UCanvasPanel* CanvasPanelGaugeCIrcle;                                       // 0x02C8 (size: 0x8)
    class UCanvasPanel* CanvasPanelGaugeSq;                                           // 0x02D0 (size: 0x8)
    class UCanvasPanel* CanvasPanelKey;                                               // 0x02D8 (size: 0x8)
    class UImage* Icon;                                                               // 0x02E0 (size: 0x8)
    class UImage* IconLock;                                                           // 0x02E8 (size: 0x8)
    class UImage* Image_ActivateEff_LineBase;                                         // 0x02F0 (size: 0x8)
    class UImage* Image_ActivateEff_LineFlare;                                        // 0x02F8 (size: 0x8)
    class UImage* Image_Circle_ActiveEff;                                             // 0x0300 (size: 0x8)
    class UImage* Image_Circle_ActiveEff_1;                                           // 0x0308 (size: 0x8)
    class UImage* KeyGuideCircle;                                                     // 0x0310 (size: 0x8)
    class UImage* KeyGuideCircle_Sq;                                                  // 0x0318 (size: 0x8)
    class UPalRetainerBox* PalRetainerBox;                                            // 0x0320 (size: 0x8)
    class UProgressBar* ProgressBar_SkillTime;                                        // 0x0328 (size: 0x8)
    class UProgressBar* ProgressBar_SkillTime_Sq;                                     // 0x0330 (size: 0x8)
    class UImage* ReticleCircle_00;                                                   // 0x0338 (size: 0x8)
    class UImage* ReticleCircle_01;                                                   // 0x0340 (size: 0x8)
    class UBP_PalTextBlock_C* Text_SkillName;                                         // 0x0348 (size: 0x8)
    class UWBP_Ingame_PalSkill_Flight_C* WBP_Ingame_PalSkill_Flight_Down;             // 0x0350 (size: 0x8)
    class UWBP_Ingame_PalSkill_Flight_C* WBP_Ingame_PalSkill_Flight_UP;               // 0x0358 (size: 0x8)
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon;                // 0x0360 (size: 0x8)
    bool IsCoolDown;                                                                  // 0x0368 (size: 0x1)
    TArray<class UMaterialInstanceDynamic*> skillGaugeMaterials;                      // 0x0370 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> coolDownGaugeMaterials;                   // 0x0380 (size: 0x10)

    void ShowFlyKeyGuide(bool Show);
    void Set Skill Name Locked();
    void Hide Key Guide(bool Hide);
    void Set Skill Name(FText SkillNameText);
    void ClearIcon();
    void Setup Icon Texture();
    void Set Cool Down Gauge Percent(double Now, double Max);
    void Set Skill Gauge Percent(double Percent);
    void AnmEvent_SkillEnable();
    void AnmEvent_CoolDown();
    void AnmEvent_CoolDownComplated();
    void AnmEvent_Lock();
    void AnmEvent_Unlock();
    void AnmEvent_InputHold();
    void AnmEvent_InputRelease();
    void AnmEvent_StartSkill();
    void AnmEvent_UsingSkill(bool TogglePlay);
    void Construct();
    void OnInputMethodChanged(ECommonInputType bNewInputType);
    void ExecuteUbergraph_WBP_Ingame_PalSkillGauge(int32 EntryPoint);
}; // Size: 0x390

#endif

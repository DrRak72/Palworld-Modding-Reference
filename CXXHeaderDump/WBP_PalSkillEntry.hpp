#ifndef UE4SS_SDK_WBP_PalSkillEntry_HPP
#define UE4SS_SDK_WBP_PalSkillEntry_HPP

class UWBP_PalSkillEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Pressing;                                                 // 0x0280 (size: 0x8)
    class UWidgetAnimation* CoolDownFinished;                                         // 0x0288 (size: 0x8)
    class UWidgetAnimation* Activate;                                                 // 0x0290 (size: 0x8)
    class UProgressBar* CoolDownProgress;                                             // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_WazaName;                                          // 0x02A0 (size: 0x8)
    class UWBP_PlayerInputKeyGuideIcon_C* WBP_PlayerInputKeyGuideIcon_Skill;          // 0x02A8 (size: 0x8)
    TArray<class UBP_PalTextBlock_C*> WazaNametextArray;                              // 0x02B0 (size: 0x10)
    FName InputActionName;                                                            // 0x02C0 (size: 0x8)
    FName OverridePadActionName;                                                      // 0x02C8 (size: 0x8)

    void CREATEDELEGATE_PROXYFUNCTION_0(float CoolRate);
    void OnInitialized();
    void ActivateEvent();
    void SetSkillText(FText SkillName);
    void CoolStart();
    void CoolFinish();
    void UpdateCoolDown(double Cool);
    void ToggleVisibility(bool IsCooling);
    void Setup(class UPalActiveSkill* ActiveSkill);
    void Unbind(class UPalActiveSkill* ActiveSkill);
    void LongPress(bool Start);
    void ExecuteUbergraph_WBP_PalSkillEntry(int32 EntryPoint);
}; // Size: 0x2D0

#endif

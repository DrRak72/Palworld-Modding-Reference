#ifndef UE4SS_SDK_WBP_Chara_Cre_VoiceTypeSlider_HPP
#define UE4SS_SDK_WBP_Chara_Cre_VoiceTypeSlider_HPP

class UWBP_Chara_Cre_VoiceTypeSlider_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UAnalogSlider* AnalogSlider_Main;                                           // 0x0280 (size: 0x8)
    class UImage* Base;                                                               // 0x0288 (size: 0x8)
    class UProgressBar* ProgressBar_305;                                              // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_SliderNum;                                         // 0x0298 (size: 0x8)
    FWBP_Chara_Cre_VoiceTypeSlider_COnChangedValue OnChangedValue;                    // 0x02A0 (size: 0x10)
    void OnChangedValue(double Value);
    int32 MaxValue;                                                                   // 0x02B0 (size: 0x4)
    int32 LastIndex;                                                                  // 0x02B4 (size: 0x4)

    void ToVoiceID(double SliderValue, int32& VoiceID);
    void ToSliderValue(int32 VoiceID, double& SliderValue);
    void SetValueForce(int32 VoiceID);
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_Chara_Cre_VoiceTypeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void ExecuteUbergraph_WBP_Chara_Cre_VoiceTypeSlider(int32 EntryPoint);
    void OnChangedValue__DelegateSignature(double Value);
}; // Size: 0x2B8

#endif

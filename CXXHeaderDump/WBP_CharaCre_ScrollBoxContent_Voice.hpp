#ifndef UE4SS_SDK_WBP_CharaCre_ScrollBoxContent_Voice_HPP
#define UE4SS_SDK_WBP_CharaCre_ScrollBoxContent_Voice_HPP

class UWBP_CharaCre_ScrollBoxContent_Voice_C : public UWBP_CharaCre_ScrollBoxContentBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0428 (size: 0x8)
    class UWBP_Chara_Cre_VoiceTypeSlider_C* WBP_Chara_Cre_VoiceTypeSlider;            // 0x0430 (size: 0x8)
    class UWrapBox* WrapBox_Body;                                                     // 0x0438 (size: 0x8)
    FWBP_CharaCre_ScrollBoxContent_Voice_COnChangedVoiceID OnChangedVoiceID;          // 0x0440 (size: 0x10)
    void OnChangedVoiceID(int32 VoiceID);
    TArray<class UAkAudioEvent*> SampleVoiceArray;                                    // 0x0450 (size: 0x10)
    TMap<int32, int32> PlayVoiceMap;                                                  // 0x0460 (size: 0x50)

    void PlaySampleVoice(int32 VoiceID);
    void ApplyMakeInfo(FPalPlayerDataCharacterMakeInfo MakeInfo);
    void GetRestoreFocusTarget(class UWidget*& Widget);
    void GetTopFocusTarget(class UWidget*& Widget);
    void BndEvt__WBP_CharaCre_ScrollBoxContent_Voice_WBP_Chara_Cre_VoiceTypeSlider_K2Node_ComponentBoundEvent_1_OnChangedValue__DelegateSignature(double Value);
    void ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice(int32 EntryPoint);
    void OnChangedVoiceID__DelegateSignature(int32 VoiceID);
}; // Size: 0x4B0

#endif

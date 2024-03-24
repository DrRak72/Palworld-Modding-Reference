#ifndef UE4SS_SDK_BP_VisualEffect_PalEffectFadeOut_HPP
#define UE4SS_SDK_BP_VisualEffect_PalEffectFadeOut_HPP

class UBP_VisualEffect_PalEffectFadeOut_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0068 (size: 0x8)
    TArray<class UNiagaraComponent*> Effects;                                         // 0x0070 (size: 0x10)
    double FadeTimer;                                                                 // 0x0080 (size: 0x8)
    double FadeTime;                                                                  // 0x0088 (size: 0x8)
    FName ParameterName;                                                              // 0x0090 (size: 0x8)
    FName TagName;                                                                    // 0x0098 (size: 0x8)

    void OnBeginVisualEffect();
    void TickVisualEffect(float DeltaTime);
    void ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut(int32 EntryPoint);
}; // Size: 0xA0

#endif
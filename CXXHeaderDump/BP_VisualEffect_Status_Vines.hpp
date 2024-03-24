#ifndef UE4SS_SDK_BP_VisualEffect_Status_Vines_HPP
#define UE4SS_SDK_BP_VisualEffect_Status_Vines_HPP

class UBP_VisualEffect_Status_Vines_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0068 (size: 0x8)
    class UNiagaraComponent* Effect;                                                  // 0x0070 (size: 0x8)
    double FadeOutTime;                                                               // 0x0078 (size: 0x8)
    double FadeOutTimer;                                                              // 0x0080 (size: 0x8)
    class UCurveFloat* FadeOutCurve;                                                  // 0x0088 (size: 0x8)

    void OnBeginVisualEffect();
    void OnEndVisualEffect();
    void TerminatingTickVisualEffect(float DeltaTime);
    void ExecuteUbergraph_BP_VisualEffect_Status_Vines(int32 EntryPoint);
}; // Size: 0x90

#endif
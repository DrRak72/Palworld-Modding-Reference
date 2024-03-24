#ifndef UE4SS_SDK_BP_VisualEffect_Status_FrostbitePV_HPP
#define UE4SS_SDK_BP_VisualEffect_Status_FrostbitePV_HPP

class UBP_VisualEffect_Status_FrostbitePV_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0068 (size: 0x8)
    class UNiagaraComponent* Effect;                                                  // 0x0070 (size: 0x8)
    double FadeOutTime;                                                               // 0x0078 (size: 0x8)
    double FadeOutTimer;                                                              // 0x0080 (size: 0x8)
    class UCurveFloat* FadeOutCurve;                                                  // 0x0088 (size: 0x8)
    double FadeOutTime01;                                                             // 0x0090 (size: 0x8)
    TMap<class EPalSizeType, class UNiagaraSystem*> EffectAsset_Cube;                 // 0x0098 (size: 0x50)
    TMap<class EPalSizeType, class UNiagaraSystem*> EffectAsset_End;                  // 0x00E8 (size: 0x50)

    void Set Frostbite(double Value);
    void OnBeginVisualEffect();
    void OnEndVisualEffect();
    void TerminatingTickVisualEffect(float DeltaTime);
    void ExecuteUbergraph_BP_VisualEffect_Status_FrostbitePV(int32 EntryPoint);
}; // Size: 0x138

#endif

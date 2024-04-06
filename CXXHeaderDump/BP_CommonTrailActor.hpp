#ifndef UE4SS_SDK_BP_CommonTrailActor_HPP
#define UE4SS_SDK_BP_CommonTrailActor_HPP

class ABP_CommonTrailActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    bool IsFadeOut;                                                                   // 0x02A8 (size: 0x1)
    double Timer;                                                                     // 0x02B0 (size: 0x8)
    class UCurveFloat* CurveAsset;                                                    // 0x02B8 (size: 0x8)
    double FadeOutSecond;                                                             // 0x02C0 (size: 0x8)

    void SetEffect(class UNiagaraSystem* EffectAsset);
    void ReceiveTick(float DeltaSeconds);
    void DeleteEffect(double FadeOutTime, class UCurveFloat* FadeOutCurve);
    void ExecuteUbergraph_BP_CommonTrailActor(int32 EntryPoint);
}; // Size: 0x2C8

#endif

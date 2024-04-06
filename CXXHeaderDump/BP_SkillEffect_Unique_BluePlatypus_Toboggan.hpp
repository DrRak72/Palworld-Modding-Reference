#ifndef UE4SS_SDK_BP_SkillEffect_Unique_BluePlatypus_Toboggan_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_BluePlatypus_Toboggan_HPP

class ABP_SkillEffect_Unique_BluePlatypus_Toboggan_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x03C8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03D0 (size: 0x8)
    class UNiagaraSystem* StartEffect;                                                // 0x03D8 (size: 0x8)
    class UNiagaraComponent* StartEffectComp;                                         // 0x03E0 (size: 0x8)

    void StartSplashEffect();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnInitialize();
    void FadeOutEffect(double DeltaSecond);
    void EndProcess();
    void カスタムイベント_0(class UNiagaraComponent* PSystem);
    void ExecuteUbergraph_BP_SkillEffect_Unique_BluePlatypus_Toboggan(int32 EntryPoint);
}; // Size: 0x3E8

#endif

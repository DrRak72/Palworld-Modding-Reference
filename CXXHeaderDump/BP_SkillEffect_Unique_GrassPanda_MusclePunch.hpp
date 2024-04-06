#ifndef UE4SS_SDK_BP_SkillEffect_Unique_GrassPanda_MusclePunch_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_GrassPanda_MusclePunch_HPP

class ABP_SkillEffect_Unique_GrassPanda_MusclePunch_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x03C8 (size: 0x8)
    class UAkAudioEvent* Audio Event;                                                 // 0x03D0 (size: 0x8)
    class UAkAudioEvent* Audio Event_0;                                               // 0x03D8 (size: 0x8)

    void ReceiveBeginPlay();
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_Unique_GrassPanda_MusclePunch(int32 EntryPoint);
}; // Size: 0x3E0

#endif

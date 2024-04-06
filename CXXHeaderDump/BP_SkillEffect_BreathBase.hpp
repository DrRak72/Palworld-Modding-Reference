#ifndef UE4SS_SDK_BP_SkillEffect_BreathBase_HPP
#define UE4SS_SDK_BP_SkillEffect_BreathBase_HPP

class ABP_SkillEffect_BreathBase_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x03C8 (size: 0x8)
    double StartCollisionTime;                                                        // 0x03D0 (size: 0x8)
    double EndCollisionTime;                                                          // 0x03D8 (size: 0x8)
    FTimerHandle EnableCollisionTimer;                                                // 0x03E0 (size: 0x8)
    FTimerHandle EndCollisionTimer;                                                   // 0x03E8 (size: 0x8)
    double ShotSpan;                                                                  // 0x03F0 (size: 0x8)
    double TempTime;                                                                  // 0x03F8 (size: 0x8)
    class UStaticMeshComponent* Funnel;                                               // 0x0400 (size: 0x8)
    class UAkAudioEvent* Sound_Cast;                                                  // 0x0408 (size: 0x8)
    class UAkAudioEvent* SoundLoop;                                                   // 0x0410 (size: 0x8)
    class UAkAudioEvent* SoundEnd;                                                    // 0x0418 (size: 0x8)

    void ReceiveBeginPlay();
    void EndCollision();
    void ExecuteUbergraph_BP_SkillEffect_BreathBase(int32 EntryPoint);
}; // Size: 0x420

#endif

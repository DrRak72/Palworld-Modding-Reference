#ifndef UE4SS_SDK_BP_SkillEffect_Scratch_HPP
#define UE4SS_SDK_BP_SkillEffect_Scratch_HPP

class ABP_SkillEffect_Scratch_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03C8 (size: 0x8)
    class UParticleSystemComponent* PS_Scratch2;                                      // 0x03D0 (size: 0x8)
    class UParticleSystemComponent* PS_Scratch1;                                      // 0x03D8 (size: 0x8)
    class UParticleSystemComponent* PS_Scratch;                                       // 0x03E0 (size: 0x8)
    double StartCollisionTime;                                                        // 0x03E8 (size: 0x8)
    double EndCollisionTime;                                                          // 0x03F0 (size: 0x8)

    void ReceiveBeginPlay();
    void EnableCollision();
    void EndCollision();
    void ExecuteUbergraph_BP_SkillEffect_Scratch(int32 EntryPoint);
}; // Size: 0x3F8

#endif

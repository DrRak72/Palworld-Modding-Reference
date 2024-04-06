#ifndef UE4SS_SDK_BP_SkillEffect_HydroPump_HPP
#define UE4SS_SDK_BP_SkillEffect_HydroPump_HPP

class ABP_SkillEffect_HydroPump_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x03C8 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x03D0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03D8 (size: 0x8)
    double StartCollisionTime;                                                        // 0x03E0 (size: 0x8)
    double EndCollisionTime;                                                          // 0x03E8 (size: 0x8)
    double BeamLength;                                                                // 0x03F0 (size: 0x8)
    double BeamRadius;                                                                // 0x03F8 (size: 0x8)

    void ReceiveBeginPlay();
    void EnableCollision();
    void EndCollision();
    void BndEvt__BP_SkillEffect_HydroPump_Niagara_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem);
    void ExecuteUbergraph_BP_SkillEffect_HydroPump(int32 EntryPoint);
}; // Size: 0x400

#endif

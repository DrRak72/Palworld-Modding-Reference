#ifndef UE4SS_SDK_BP_SkillEffect_ThrowRockGround_HPP
#define UE4SS_SDK_BP_SkillEffect_ThrowRockGround_HPP

class ABP_SkillEffect_ThrowRockGround_C : public APalSkillEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0330 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0338 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0340 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SkillEffect_ThrowRockGround(int32 EntryPoint);
}; // Size: 0x348

#endif

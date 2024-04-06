#ifndef UE4SS_SDK_BP_CoopSkill_NightRunner_HPP
#define UE4SS_SDK_BP_CoopSkill_NightRunner_HPP

class UBP_CoopSkill_NightRunner_C : public UPalCoopSkillModuleBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)
    class UNiagaraComponent* Effect;                                                  // 0x0040 (size: 0x8)
    class UPalCharacterMovementComponent* Movement;                                   // 0x0048 (size: 0x8)
    FName Flag Name;                                                                  // 0x0050 (size: 0x8)
    TArray<double> SpeedMultiplier;                                                   // 0x0058 (size: 0x10)
    TArray<double> AccelerationMultiplier;                                            // 0x0068 (size: 0x10)

    void GetAccelerationMultiplier(double& Speed);
    void GetSpeedMultiplier(double& Speed);
    void OnSkillOverheat();
    void OnStartSkill();
    void OnTick(float DeltaTime);
    void ExecuteUbergraph_BP_CoopSkill_NightRunner(int32 EntryPoint);
}; // Size: 0x78

#endif

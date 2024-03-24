#ifndef UE4SS_SDK_BP_PalBiomeEffectController_HPP
#define UE4SS_SDK_BP_PalBiomeEffectController_HPP

class UBP_PalBiomeEffectController_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    EPalBiomeType Current Biome Type;                                                 // 0x00A8 (size: 0x1)
    class UNiagaraComponent* Current Particle System;                                 // 0x00B0 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void On Biome Enter(EPalBiomeType Biome Type);
    void On Biome Exit();
    void ExecuteUbergraph_BP_PalBiomeEffectController(int32 EntryPoint);
}; // Size: 0xB8

#endif

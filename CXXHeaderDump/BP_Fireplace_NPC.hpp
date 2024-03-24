#ifndef UE4SS_SDK_BP_Fireplace_NPC_HPP
#define UE4SS_SDK_BP_Fireplace_NPC_HPP

class ABP_Fireplace_NPC_C : public AActor
{
    class UBP_PalTimerPointLightComponent_C* BP_PalTimerPointLightComponent;          // 0x0290 (size: 0x8)
    class UBP_HeatSourceSphereComponent_C* BP_HeatSourceSphereComponent;              // 0x0298 (size: 0x8)
    class UNiagaraComponent* Smoke;                                                   // 0x02A0 (size: 0x8)
    class UParticleSystemComponent* P_Fire_Custom;                                    // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* SM_Fire_hanger_StaticMeshComponent0;                  // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* SM_Fire_pit_StaticMeshComponent0;                     // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* SM_Fire_pot_StaticMeshComponent0;                     // 0x02C0 (size: 0x8)
    class USceneComponent* SharedRoot;                                                // 0x02C8 (size: 0x8)

}; // Size: 0x2D0

#endif

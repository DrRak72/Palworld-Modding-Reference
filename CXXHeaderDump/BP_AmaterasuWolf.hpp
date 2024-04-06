#ifndef UE4SS_SDK_BP_AmaterasuWolf_HPP
#define UE4SS_SDK_BP_AmaterasuWolf_HPP

class ABP_AmaterasuWolf_C : public ABP_MonsterBase_C
{
    class UBP_PalTimerPointLightComponent_C* BP_PalTimerPointLightComponent;          // 0x0A10 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule2;                        // 0x0A18 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule1;                        // 0x0A20 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0A28 (size: 0x8)

    void GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>& OutComponent);
}; // Size: 0xA30

#endif

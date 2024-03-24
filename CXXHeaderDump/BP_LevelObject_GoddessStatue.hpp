#ifndef UE4SS_SDK_BP_LevelObject_GoddessStatue_HPP
#define UE4SS_SDK_BP_LevelObject_GoddessStatue_HPP

class ABP_LevelObject_GoddessStatue_C : public APalLevelObjectCharacterStatusOperator
{
    class UPalLimitVolumeBoxComponent* PalLimitVolumeBox;                             // 0x02C0 (size: 0x8)
    class UNiagaraComponent* NS_GoddessStatue_Glow;                                   // 0x02C8 (size: 0x8)
    class USceneComponent* IndicatorOrigin;                                           // 0x02D0 (size: 0x8)
    class UBP_InteractableCapsule_C* BP_InteractableCapsule;                          // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x02E0 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x02E8 (size: 0x8)

}; // Size: 0x2F0

#endif

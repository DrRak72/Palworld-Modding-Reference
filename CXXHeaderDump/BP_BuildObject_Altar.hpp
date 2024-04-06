#ifndef UE4SS_SDK_BP_BuildObject_Altar_HPP
#define UE4SS_SDK_BP_BuildObject_Altar_HPP

class ABP_BuildObject_Altar_C : public APalBuildObjectRaidBossSummon
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class UPalLimitVolumeBoxComponent* PalLimitVolumeBox;                             // 0x0588 (size: 0x8)
    class UStaticMeshComponent* SM_PalHealingMachine;                                 // 0x0590 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0598 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05A0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x05B0 (size: 0x8)
    float _________Track_0_FA7ECEA24E645B7F041C05A2FDD75DDF;                          // 0x05B8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ________Direction_FA7ECEA24E645B7F041C05A2FDD75DDF; // 0x05BC (size: 0x1)
    class UTimelineComponent* タイムライン;                                           // 0x05C0 (size: 0x8)
    class UMaterialInstanceDynamic* Material_PalSummoningStandBase;                   // 0x05C8 (size: 0x8)
    class UMaterialInstanceDynamic* Material_PalSummoningStandTower;                  // 0x05D0 (size: 0x8)
    class UNiagaraSystem* SummonFX;                                                   // 0x05D8 (size: 0x8)

    void タイムライン__FinishedFunc();
    void タイムライン__UpdateFunc();
    void BP_PlayPerform();
    void BroadcastPlayPerform();
    void ResetPlayPerform();
    void ExecuteUbergraph_BP_BuildObject_Altar(int32 EntryPoint);
}; // Size: 0x5E0

#endif

#ifndef UE4SS_SDK_BP_ElecPanda_Gym_HPP
#define UE4SS_SDK_BP_ElecPanda_Gym_HPP

class ABP_ElecPanda_Gym_C : public ABP_ElecPanda_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A50 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule3;                        // 0x0A58 (size: 0x8)
    class UBP_PalBossNPCMarker_C* BP_PalBossNPCMarker;                                // 0x0A60 (size: 0x8)

    void GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>& OutComponent);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_ElecPanda_Gym(int32 EntryPoint);
}; // Size: 0xA68

#endif

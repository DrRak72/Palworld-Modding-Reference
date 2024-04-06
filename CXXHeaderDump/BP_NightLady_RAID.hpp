#ifndef UE4SS_SDK_BP_NightLady_RAID_HPP
#define UE4SS_SDK_BP_NightLady_RAID_HPP

class ABP_NightLady_RAID_C : public ABP_NightLady_C
{
    class UBP_PalTimerPointLightComponent_C* BP_PalTimerPointLightComponent;          // 0x0A90 (size: 0x8)

    void GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>& OutComponent);
}; // Size: 0xA98

#endif

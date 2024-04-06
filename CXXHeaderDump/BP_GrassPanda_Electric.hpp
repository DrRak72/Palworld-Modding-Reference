#ifndef UE4SS_SDK_BP_GrassPanda_Electric_HPP
#define UE4SS_SDK_BP_GrassPanda_Electric_HPP

class ABP_GrassPanda_Electric_C : public ABP_GrassPanda_C
{
    class UBP_PalTimerPointLightComponent_C* BP_PalTimerPointLightComponent;          // 0x0A48 (size: 0x8)

    void GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>& OutComponent);
}; // Size: 0xA50

#endif

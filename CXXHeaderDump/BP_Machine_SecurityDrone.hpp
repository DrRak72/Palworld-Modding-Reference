#ifndef UE4SS_SDK_BP_Machine_SecurityDrone_HPP
#define UE4SS_SDK_BP_Machine_SecurityDrone_HPP

class ABP_Machine_SecurityDrone_C : public APalNPC
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0928 (size: 0x8)
    class UStaticMeshComponent* SightLightMesh;                                       // 0x0930 (size: 0x8)
    FVector MeshDefaultPos;                                                           // 0x0938 (size: 0x18)
    double SelfTimer;                                                                 // 0x0950 (size: 0x8)

    void IsAnyPlayerInLight(bool& IsHit, TArray<class APalPlayerCharacter*>& Players);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnDead(FPalDeadInfo DeadInfo);
    void EnableSpotLight(bool IsActive);
    void ExecuteUbergraph_BP_Machine_SecurityDrone(int32 EntryPoint);
}; // Size: 0x958

#endif

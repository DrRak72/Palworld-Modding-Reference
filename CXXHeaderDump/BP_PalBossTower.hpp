#ifndef UE4SS_SDK_BP_PalBossTower_HPP
#define UE4SS_SDK_BP_PalBossTower_HPP

class ABP_PalBossTower_C : public APalBossTower
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F8 (size: 0x8)
    class UBoxComponent* EntryWaitInfoTrigger;                                        // 0x0300 (size: 0x8)
    class USceneComponent* DeadItemDropPoint;                                         // 0x0308 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0310 (size: 0x8)
    class USphereComponent* EntryCancel_Trigger;                                      // 0x0318 (size: 0x8)
    class USceneComponent* TopWarpPoint;                                              // 0x0320 (size: 0x8)
    class USceneComponent* FrontWarpPoint;                                            // 0x0328 (size: 0x8)
    class USphereComponent* InsidePlayerCheck_Trigger;                                // 0x0330 (size: 0x8)
    class UStaticMeshComponent* SM_TowerSphere_tower_sphere_geo;                      // 0x0338 (size: 0x8)
    class UStaticMeshComponent* SM_TowerSphere_tower_sphereCube_geo;                  // 0x0340 (size: 0x8)
    class UStaticMeshComponent* SM_Tower;                                             // 0x0348 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0350 (size: 0x8)
    bool IsOpen;                                                                      // 0x0358 (size: 0x1)
    FDataTableRowHandle DialogMsgID;                                                  // 0x0360 (size: 0x10)
    TSoftObjectPtr<APalPlayerCharacter> CachedRequestStartBattlePlayer;               // 0x0370 (size: 0x30)
    FGuid DialogUId;                                                                  // 0x03A0 (size: 0x10)

    void OnCloseStartBattleCheckDialog(bool bResult);
    void OpenStartBattleCheckDialog();
    FTransform GetDeadItemDropPoint();
    void SwitchTrigger();
    void UpdateBossBattleState(EPalBossBattleState NewBossBattleState);
    void Force Warp Player();
    FTransform GetTopWarpPoint();
    FTransform GetFrontWarpPoint();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Interact(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    void BndEvt__BP_PalBossTower_InsideEntry_Trigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnChangeBossBattleStateBP(EPalBossBattleState NewState);
    void BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_10_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_PalBossTower(int32 EntryPoint);
}; // Size: 0x3B0

#endif

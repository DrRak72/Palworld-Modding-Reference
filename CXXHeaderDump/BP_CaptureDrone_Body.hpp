#ifndef UE4SS_SDK_BP_CaptureDrone_Body_HPP
#define UE4SS_SDK_BP_CaptureDrone_Body_HPP

class ABP_CaptureDrone_Body_C : public APalCaptureJudgeObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    class USkeletalMeshComponent* EffectMesh5;                                        // 0x02C0 (size: 0x8)
    class USkeletalMeshComponent* EffectMesh4;                                        // 0x02C8 (size: 0x8)
    class USkeletalMeshComponent* EffectMesh3;                                        // 0x02D0 (size: 0x8)
    class USkeletalMeshComponent* EffectMesh2;                                        // 0x02D8 (size: 0x8)
    class USkeletalMeshComponent* EffectMesh1;                                        // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh_LaserPointer;                              // 0x02E8 (size: 0x8)
    class UCableComponent* Cable;                                                     // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02F8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0300 (size: 0x8)
    class APalCharacter* TargetPal;                                                   // 0x0308 (size: 0x8)
    FVector MoveVelocity;                                                             // 0x0310 (size: 0x18)
    bool AttackMode;                                                                  // 0x0328 (size: 0x1)
    bool CaptureMode;                                                                 // 0x0329 (size: 0x1)
    bool DestroyWaitMode;                                                             // 0x032A (size: 0x1)
    double CaptureModeTimer;                                                          // 0x0330 (size: 0x8)
    double Timer;                                                                     // 0x0338 (size: 0x8)
    double tempDeltaTime;                                                             // 0x0340 (size: 0x8)
    bool SpineMode;                                                                   // 0x0348 (size: 0x1)
    double MeshAttackValue;                                                           // 0x0350 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> dynamicMaterial;                          // 0x0358 (size: 0x10)
    TArray<class USkeletalMeshComponent*> EffectMeshes;                               // 0x0368 (size: 0x10)
    TMap<int32, TEnumAsByte<E_PalCaptureDroneMeshEffectState::Type>> MeshState;       // 0x0378 (size: 0x50)
    double Delay;                                                                     // 0x03C8 (size: 0x8)
    bool EatAnime_ToBig;                                                              // 0x03D0 (size: 0x1)
    bool TransportMode;                                                               // 0x03D1 (size: 0x1)
    bool SingleCaptureSuccess;                                                        // 0x03D2 (size: 0x1)
    bool ThunderEffect;                                                               // 0x03D3 (size: 0x1)

    void DroneBody_TransportAnime();
    void DroneBody_EatAnime();
    void ChangeEnumState(int32 ID, TEnumAsByte<E_PalCaptureDroneMeshEffectState::Type> NextState);
    void EffectMeshCtrl();
    void LaserPointerCtrl();
    void SlowSpine(double SpineRate);
    void CableCtrl();
    void BodySpine(bool& End);
    void StartInBallEffect();
    void Riftup();
    void Meshfluffy();
    void SpawnCaptureObject(FGuid Guid, class AActor* Actor);
    void DroneCaptureMove();
    void Capture();
    void DroneMovement2();
    void Setup(class APalCharacter* Target, FVector InitVelocity);
    void ReceiveTick(float DeltaSeconds);
    void CaptureStart();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CaptureDrone_Body(int32 EntryPoint);
}; // Size: 0x3D4

#endif

#ifndef UE4SS_SDK_BP_PalCapturedCage_HPP
#define UE4SS_SDK_BP_PalCapturedCage_HPP

class ABP_PalCapturedCage_C : public APalCapturedCage
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class UBoxComponent* Box_PlayerOnly;                                              // 0x02D0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x02D8 (size: 0x8)
    class UBoxComponent* DoorBoxCollision;                                            // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* LockMesh;                                             // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* DoorMesh;                                             // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* BodyMash;                                             // 0x02F8 (size: 0x8)
    class UBoxComponent* Box5;                                                        // 0x0300 (size: 0x8)
    class UBoxComponent* Box4;                                                        // 0x0308 (size: 0x8)
    class UBoxComponent* Box3;                                                        // 0x0310 (size: 0x8)
    class UBoxComponent* Box2;                                                        // 0x0318 (size: 0x8)
    class UBoxComponent* Box1;                                                        // 0x0320 (size: 0x8)
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;               // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    bool Accessed;                                                                    // 0x0338 (size: 0x1)
    FTimerHandle OpenAnimeTimerHandle;                                                // 0x0340 (size: 0x8)
    double DoorOpenTimer;                                                             // 0x0348 (size: 0x8)
    double Const_DoorOpenSpeed;                                                       // 0x0350 (size: 0x8)
    class UCurveFloat* Const_DoorOpenCurve;                                           // 0x0358 (size: 0x8)
    EPalActionType PlayerActionType;                                                  // 0x0360 (size: 0x1)
    FBP_PalCapturedCage_COnCaptured OnCaptured;                                       // 0x0368 (size: 0x10)
    void OnCaptured();

    void SetupSpawnPal();
    FName GetCampSpawnerName();
    void Disable Lock Mesh Outline(class AActor* Other, TScriptInterface<class IPalInteractiveObjectComponentInterface> Component);
    void Enable Lock Mesh Outline(class AActor* Other, TScriptInterface<class IPalInteractiveObjectComponentInterface> Component);
    void OnFinishRescue(class AActor* Player, EPalInteractiveObjectIndicatorType NewParam);
    void StopPlayerAnime(class AActor* Player, EPalInteractiveObjectIndicatorType NewParam);
    void StartPlayerAnime(class AActor* Player, EPalInteractiveObjectIndicatorType NewParam);
    void DoorOpenAnimeLoop();
    void PlayDoorOpenAnime();
    EPalInteractiveObjectIndicatorType GetIndicatorType();
    void ReceiveBeginPlay();
    void CaptureStartFromServerPlayer(class APalPlayerCharacter* Attacker);
    void ExecuteUbergraph_BP_PalCapturedCage(int32 EntryPoint);
    void OnCaptured__DelegateSignature();
}; // Size: 0x378

#endif

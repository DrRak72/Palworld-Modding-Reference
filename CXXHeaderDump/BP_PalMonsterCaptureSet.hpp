#ifndef UE4SS_SDK_BP_PalMonsterCaptureSet_HPP
#define UE4SS_SDK_BP_PalMonsterCaptureSet_HPP

class ABP_PalMonsterCaptureSet_C : public APalUIInframeRenderer
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x0298 (size: 0x8)
    class UPointLightComponent* PointLight_1;                                         // 0x02A0 (size: 0x8)
    class UPointLightComponent* PointLight_2;                                         // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Cube3;                                                // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Cube5;                                                // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* Cube4;                                                // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* Cube1;                                                // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* Cube2;                                                // 0x02D8 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x02E0 (size: 0x8)
    class USceneCaptureComponent2D* SceneCaptureComponent2D;                          // 0x02E8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02F0 (size: 0x8)
    FRotator TargetRotator;                                                           // 0x02F8 (size: 0x18)
    FBP_PalMonsterCaptureSet_COnCompletedSetup OnCompletedSetup;                      // 0x0310 (size: 0x10)
    void OnCompletedSetup();
    FTimerHandle delayHandle;                                                         // 0x0320 (size: 0x8)
    FRotator DefaultRotator;                                                          // 0x0328 (size: 0x18)
    FName nextRequestedPalID;                                                         // 0x0340 (size: 0x8)
    FName LoadingPalID;                                                               // 0x0348 (size: 0x8)
    bool IsLoading;                                                                   // 0x0350 (size: 0x1)
    double RotateInterpolationRate;                                                   // 0x0358 (size: 0x8)
    TMap<class UMaterialInterface*, class UMaterialInterface*> OverrideMaterialMap;   // 0x0360 (size: 0x50)
    FName NowDisplayingPalID;                                                         // 0x03B0 (size: 0x8)

    void GetNowDisplayingPalID(FName& PalID);
    void OverrideMaterial(class USkeletalMeshComponent* TargetSkeletalMesh);
    void ResetRotator();
    void AddRotation(FRotator Rotator);
    void CancelDelayHandle();
    void DelayCompleteSetup();
    void SetupDelayHandle();
    void On Loaded Pal Class(TSubclassOf<class APalCharacter> NewParam);
    void SetupSkeletalMesh(class USkeletalMesh* Mesh);
    void RequestCaptureFromPalID(FName PalRowName);
    void Reset();
    void OnLoaded_47E3700548CBE24684940690F7B5FBD1(UClass* Loaded);
    void ReceiveBeginPlay();
    void OnRequestLoadPalClass(TSoftClassPtr<APalCharacter> NewParam);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_PalMonsterCaptureSet(int32 EntryPoint);
    void OnCompletedSetup__DelegateSignature();
}; // Size: 0x3B8

#endif

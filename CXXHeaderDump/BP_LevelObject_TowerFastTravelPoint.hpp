#ifndef UE4SS_SDK_BP_LevelObject_TowerFastTravelPoint_HPP
#define UE4SS_SDK_BP_LevelObject_TowerFastTravelPoint_HPP

class ABP_LevelObject_TowerFastTravelPoint_C : public APalLevelObjectUnlockableFastTravelPoint
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UPalSoundPlayerComponent* PalSoundPlayer;                                   // 0x02E8 (size: 0x8)
    class UPalLimitVolumeBoxComponent* PalLimitVolumeBox;                             // 0x02F0 (size: 0x8)
    class UNiagaraComponent* Glow;                                                    // 0x02F8 (size: 0x8)
    class UArrowComponent* WarpPoint;                                                 // 0x0300 (size: 0x8)
    class USceneComponent* IndicatorOrigin;                                           // 0x0308 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0310 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0318 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0320 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0328 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0330 (size: 0x8)
    class UNiagaraSystem* UnlockedGlowEffect;                                         // 0x0338 (size: 0x8)
    class UNiagaraSystem* UnlockedFlashEffect;                                        // 0x0340 (size: 0x8)
    class UAkAudioEvent* UnlockedSound;                                               // 0x0348 (size: 0x8)

    class USceneComponent* OnGetAkComponent();
    class UAkAudioEvent* GetUnlockAkAudioEvent();
    void OnUpdateUnlockState_Internal(bool IsUnlocked, bool IsSpawnUnlockefFlashEffect);
    void OnUpdateUnlockState(class APalLevelObjectUnlockableFastTravelPoint* Object);
    void ReceiveBeginPlay();
    void OnChangeWorldSettings(const FPalOptionWorldSettings& PrevSettings, const FPalOptionWorldSettings& NewSettings);
    void CheckUnuseFastTravel();
    void ExecuteUbergraph_BP_LevelObject_TowerFastTravelPoint(int32 EntryPoint);
}; // Size: 0x350

#endif

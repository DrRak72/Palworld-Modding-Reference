#ifndef UE4SS_SDK_BP_NPCCampPresetBase_HPP
#define UE4SS_SDK_BP_NPCCampPresetBase_HPP

class ABP_NPCCampPresetBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    FBP_NPCCampPresetBase_COnSpawnedCharacter OnSpawnedCharacter;                     // 0x02A0 (size: 0x10)
    void OnSpawnedCharacter(class UPalIndividualCharacterHandle* NewParam);
    bool IsAllEnemyDead;                                                              // 0x02B0 (size: 0x1)
    class ABP_NPCCampSpawnerBase_C* OwnerCampSpawner;                                 // 0x02B8 (size: 0x8)

    void GetCampSpawnerName(FName& Key);
    void DeleteChildActor();
    void GetRewardKey(FName& Key);
    void RayAdjustFloor();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void カスタムイベント(class UPalIndividualCharacterHandle* NewParam);
    void OnCapturedEvent();
    void ExecuteUbergraph_BP_NPCCampPresetBase(int32 EntryPoint);
    void OnSpawnedCharacter__DelegateSignature(class UPalIndividualCharacterHandle* NewParam);
}; // Size: 0x2C0

#endif

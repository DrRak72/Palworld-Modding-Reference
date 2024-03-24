#ifndef UE4SS_SDK_BP_NPCCampSpawnerBase_HPP
#define UE4SS_SDK_BP_NPCCampSpawnerBase_HPP

class ABP_NPCCampSpawnerBase_C : public APalNPCCampSpawnerBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UStaticMeshComponent* DebugMesh;                                            // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    double Probability;                                                               // 0x02B0 (size: 0x8)
    class ABP_NPCCampPresetBase_C* CampObject;                                        // 0x02B8 (size: 0x8)
    FName RewardName;                                                                 // 0x02C0 (size: 0x8)
    double RespawnTime_RealMinutes;                                                   // 0x02C8 (size: 0x8)
    FTimerHandle TimerHand;                                                           // 0x02D0 (size: 0x8)
    bool RespawnPossible;                                                             // 0x02D8 (size: 0x1)
    double RespawnDistance_FromPlayer;                                                // 0x02E0 (size: 0x8)
    double DisableDistance_FromBaseCamp;                                              // 0x02E8 (size: 0x8)
    TArray<FF_NPCCampPreset> PresetList;                                              // 0x02F0 (size: 0x10)
    TArray<class UPalIndividualCharacterHandle*> CampEnemys;                          // 0x0300 (size: 0x10)
    bool LoadCamp;                                                                    // 0x0310 (size: 0x1)

    void CREATEDELEGATE_PROXYFUNCTION_0(class UPalIndividualCharacterHandle* NewParam);
    void OnReceivedReward();
    void IsNearPlayerCamp(bool& IsNear);
    void StartDespawnTimer(double DespawnTime);
    void SetupCampStatus();
    void DespawnCamp();
    void StartRespawnTimer(double RespawnTime);
    void OnEnemyDead(FPalDeadInfo DeadInfo);
    void OnEnemySpawned(class UPalIndividualCharacterHandle*& SpawnHandle);
    void CheckWorldLoadComplete(bool& Loaded);
    void IsProbabilitySuccess(bool& Success);
    void PlayerCheck(bool& RespawnOK);
    void SetRespawnAble();
    void TryCampSpawn();
    void RandomLottery(TSubclassOf<class ABP_NPCCampPresetBase_C>& ResultClass);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_NPCCampSpawnerBase(int32 EntryPoint);
}; // Size: 0x311

#endif

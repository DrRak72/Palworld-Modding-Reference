#ifndef UE4SS_SDK_BP_WantedPolice_NPCSpawner_HPP
#define UE4SS_SDK_BP_WantedPolice_NPCSpawner_HPP

class ABP_WantedPolice_NPCSpawner_C : public ABP_MonoNPCSpawner_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0418 (size: 0x8)
    class UBoxComponent* BoxCollision;                                                // 0x0420 (size: 0x8)
    class UStaticMeshComponent* DummyPlayer;                                          // 0x0428 (size: 0x8)
    int32 SpawnPointNum;                                                              // 0x0430 (size: 0x4)
    double SpawnPointRadius;                                                          // 0x0438 (size: 0x8)
    double RespawnDistance;                                                           // 0x0440 (size: 0x8)
    TArray<FVector> SpawnPoints;                                                      // 0x0448 (size: 0x10)
    class ABP_NPCAIController_C* NPCAIController;                                     // 0x0458 (size: 0x8)
    class UPalIndividualCharacterHandle* OwnerHandle;                                 // 0x0460 (size: 0x8)
    class APalCharacter* OwnerCharacter;                                              // 0x0468 (size: 0x8)
    bool IsWanted;                                                                    // 0x0470 (size: 0x1)
    double LostSearchTime;                                                            // 0x0478 (size: 0x8)
    double LostSearchTimer;                                                           // 0x0480 (size: 0x8)
    TMap<int32, FPalDataTableRowName_PalHumanData> PoliceHumanDataArray;              // 0x0488 (size: 0x50)
    class UPalIndividualCharacterHandle* DespawnHandle;                               // 0x04D8 (size: 0x8)
    TMap<class UPalIndividualCharacterHandle*, class ABP_NPCAIController_C*> NPCMap;  // 0x04E0 (size: 0x50)
    TMap<class UPalIndividualCharacterHandle*, class ABP_NPCAIController_C*> PreNPCMap; // 0x0530 (size: 0x50)
    int32 SpawnNum;                                                                   // 0x0580 (size: 0x4)
    double SpawnHeightOffset;                                                         // 0x0588 (size: 0x8)
    int32 TotalReward;                                                                // 0x0590 (size: 0x4)
    FName CharacterID;                                                                // 0x0594 (size: 0x8)
    double FloorCheckHeight;                                                          // 0x05A0 (size: 0x8)
    int32 PoliceLevel;                                                                // 0x05A8 (size: 0x4)
    int32 RespawnCheckCount;                                                          // 0x05AC (size: 0x4)
    int32 RespawnCount;                                                               // 0x05B0 (size: 0x4)
    double RespawnCheckTimer;                                                         // 0x05B8 (size: 0x8)
    double RespawnCheckTime;                                                          // 0x05C0 (size: 0x8)
    bool IsForceSpawn;                                                                // 0x05C8 (size: 0x1)
    TArray<FVector> PreLocations;                                                     // 0x05D0 (size: 0x10)
    int32 PreTargetReward;                                                            // 0x05E0 (size: 0x4)
    int32 TargetReward;                                                               // 0x05E4 (size: 0x4)

    void IsPoliceInSight(bool& NoOneInSight);
    void IsOrganizationCitizen(EPalOrganizationType OrganizationType, bool& bCitizen);
    void HasWeapon(class ABP_NPCAIController_C* NewParam, bool& HasWeapon);
    void ReporterChangeAction(class APalCharacter* Reporter, class APalCharacter* Criminal);
    void CheckReportCriminal();
    void DespawnPolices(TArray<class UPalIndividualCharacterHandle*>& DespawnHandles);
    void SpawnPolices(FPalWorldSecurityWantedStateInfo WantedStateInfo);
    void GetCombatGunBP(class UBP_AIAction_NPC_Combat_Gun_C*& NewParam);
    void FindSpawnLocation(FVector& Location);
    void CheckValidSpawnLocation(FVector TargetLocation, FVector& Location, bool& IsValid);
    void ReleaseWanted();
    void CheckPoliceInSight(class ABP_NPCAIController_C* NPC, bool& InSight);
    void SetupOwnerAndHandle();
    void IsSelf(class UPalIndividualCharacterHandle* CharacterHandle, bool& IsSelf);
    void CheckRespawn(FVector CheckLocation, bool& IsRespawn);
    void SpawnDelegate(FPalInstanceID ID);
    void Despawn();
    void Spawn();
    void CorrectPoints();
    void ReceiveBeginPlay();
    void BlueprintTick(float DeltaTime);
    void OnInitializedNPC();
    void ChangeCombatMode();
    void OnReleaseWanted(class UPalIndividualCharacterHandle* CriminalHandle);
    void OnWanted(class UPalIndividualCharacterHandle* CriminalHandle, FPalWorldSecurityWantedStateInfo WantedStateInfo);
    void DebugShowPoints(double DeltaTime);
    void ExecuteUbergraph_BP_WantedPolice_NPCSpawner(int32 EntryPoint);
}; // Size: 0x5E8

#endif

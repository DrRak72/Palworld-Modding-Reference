#ifndef UE4SS_SDK_BP_SquadNPCSpawner_HPP
#define UE4SS_SDK_BP_SquadNPCSpawner_HPP

class ABP_SquadNPCSpawner_C : public ABP_MonoNPCSpawner_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0418 (size: 0x8)
    TArray<class UPalIndividualCharacterHandle*> SpawnedHandleList;                   // 0x0420 (size: 0x10)
    TArray<FF_NPCOnePointSpawnInfo> SpawnInfoList;                                    // 0x0430 (size: 0x10)
    bool IsLoadingFlag;                                                               // 0x0440 (size: 0x1)
    int32 SpawnedCount;                                                               // 0x0444 (size: 0x4)
    FBP_SquadNPCSpawner_COnSquadSpawnedCharacter OnSquadSpawnedCharacter;             // 0x0448 (size: 0x10)
    void OnSquadSpawnedCharacter(class UPalIndividualCharacterHandle* NewParam);

    void GetAllSpawnedNPCHandle(TArray<class UPalIndividualCharacterHandle*>& Handles);
    float GetSpawnPointRadius_0();
    void GetWorldLoadWaitRadius(double& Radius);
    void DeleteOnePoint(class AActor* Point);
    void SetNullHandleWhenDestoryNPC(class AActor* DestroyedActor);
    void DespawnDelegate(FPalInstanceID ID);
    void Despawn();
    void SetCharaNames();
    void SetupSpawnInfoList();
    void SpawnDelegate(FPalInstanceID ID);
    void FindIndividualHandle(FPalInstanceID ID, class UPalIndividualCharacterHandle*& Handle, int32& Index);
    void Spawn();
    void Check Spawn(double DeltaTime);
    void ReceiveBeginPlay();
    void BlueprintTick(float DeltaTime);
    void SetAllNPCLocation();
    void ExecuteUbergraph_BP_SquadNPCSpawner(int32 EntryPoint);
    void OnSquadSpawnedCharacter__DelegateSignature(class UPalIndividualCharacterHandle* NewParam);
}; // Size: 0x458

#endif

#ifndef UE4SS_SDK_BP_BossBattle_BossCharacterSpawner_HPP
#define UE4SS_SDK_BP_BossBattle_BossCharacterSpawner_HPP

class ABP_BossBattle_BossCharacterSpawner_C : public AActor
{
    class UStaticMeshComponent* StaticMesh;                                           // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    class UPalIndividualCharacterHandle* CharacterHandle;                             // 0x02A0 (size: 0x8)
    int32 StartPlayerNum;                                                             // 0x02A8 (size: 0x4)

    void SetBossLocationToStartPoint();
    void IsSkipCutscene(bool& Skip);
    void SpawnDelegate(FPalInstanceID ID);
    void RequestDespawn();
    void RequestSpawn(FName CharacterID, int32 Level, int32 JoinPlayerNum);
}; // Size: 0x2AC

#endif

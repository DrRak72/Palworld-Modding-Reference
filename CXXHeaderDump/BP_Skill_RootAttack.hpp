#ifndef UE4SS_SDK_BP_Skill_RootAttack_HPP
#define UE4SS_SDK_BP_Skill_RootAttack_HPP

class ABP_Skill_RootAttack_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UStaticMeshComponent* OverlapPoint;                                         // 0x03C8 (size: 0x8)
    class UStaticMeshComponent* RotPos;                                               // 0x03D0 (size: 0x8)
    class UNiagaraComponent* RootAttack;                                              // 0x03D8 (size: 0x8)
    double Const_NextSpawnSpanTime;                                                   // 0x03E0 (size: 0x8)
    double AttackDelay;                                                               // 0x03E8 (size: 0x8)
    double Const_RootDistanceInterval;                                                // 0x03F0 (size: 0x8)
    double UnLockLeng;                                                                // 0x03F8 (size: 0x8)
    double AttackPosDestroy;                                                          // 0x0400 (size: 0x8)
    double GoalTargetLeng;                                                            // 0x0408 (size: 0x8)
    FVector TargetRootPos;                                                            // 0x0410 (size: 0x18)
    FVector RootPos;                                                                  // 0x0428 (size: 0x18)
    FVector AddVector;                                                                // 0x0440 (size: 0x18)
    bool IsRootSpawnLoop;                                                             // 0x0458 (size: 0x1)
    FVector tempPos;                                                                  // 0x0460 (size: 0x18)
    double TargetPal Leng;                                                            // 0x0478 (size: 0x8)
    class AActor* tempTargetPal;                                                      // 0x0480 (size: 0x8)
    bool PalFound;                                                                    // 0x0488 (size: 0x1)
    double Const_AttackLength_IfNotTarget;                                            // 0x0490 (size: 0x8)
    bool IsSpawnedRoadEffect;                                                         // 0x0498 (size: 0x1)
    class ABP_Skill_RootAttack_Road_C* RoadEffect;                                    // 0x04A0 (size: 0x8)

    void GetOverlapPalLocation();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Skill_RootAttack(int32 EntryPoint);
}; // Size: 0x4A8

#endif

#ifndef UE4SS_SDK_BP_Action_Unique_NightLady_NightmareFlame_HPP
#define UE4SS_SDK_BP_Action_Unique_NightLady_NightmareFlame_HPP

class UBP_Action_Unique_NightLady_NightmareFlame_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    TArray<FReserveMontage> Montage List;                                             // 0x0218 (size: 0x10)
    FTimerHandle LaunchFlameTimer;                                                    // 0x0228 (size: 0x8)
    int32 FlameCount;                                                                 // 0x0230 (size: 0x4)
    float EnemySearchDistance;                                                        // 0x0234 (size: 0x4)
    float FlameLaunchInterval;                                                        // 0x0238 (size: 0x4)
    int32 MaxFlameCount;                                                              // 0x023C (size: 0x4)

    void GetActorRootLocationZ(class AActor* Actor, double& LocationZ);
    void OnMontageNotify(class UAnimMontage* Montage, FName NotifyName);
    void CreateHommingFlame();
    void OnBeginAction();
    void OnMontageEnd(class UAnimMontage* Montage, bool bInterrupted);
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Unique_NightLady_NightmareFlame(int32 EntryPoint);
}; // Size: 0x240

#endif

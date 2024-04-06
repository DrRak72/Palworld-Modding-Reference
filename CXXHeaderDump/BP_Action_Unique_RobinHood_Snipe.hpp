#ifndef UE4SS_SDK_BP_Action_Unique_RobinHood_Snipe_HPP
#define UE4SS_SDK_BP_Action_Unique_RobinHood_Snipe_HPP

class UBP_Action_Unique_RobinHood_Snipe_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class ABP_SkillEffect_Unique_RobinHood_Snipe_BowAndArrow_C* SpawnedActor_Bow;     // 0x0218 (size: 0x8)
    class ABP_SkillEffect_Unique_RobinHood_Snipe_Arrow_C* SpawnedActor_Arrow;         // 0x0220 (size: 0x8)
    bool IsShooted;                                                                   // 0x0228 (size: 0x1)
    double HomingDegree;                                                              // 0x0230 (size: 0x8)
    double HomingDistance;                                                            // 0x0238 (size: 0x8)
    bool IsFollowing;                                                                 // 0x0240 (size: 0x1)

    void SpawnArrowBullet();
    void SpawnBowAndArrow();
    void OnNotifyEnd_2BC7936F4DB6083A28A20A84A18DB1EF(FName NotifyName);
    void OnNotifyBegin_2BC7936F4DB6083A28A20A84A18DB1EF(FName NotifyName);
    void OnInterrupted_2BC7936F4DB6083A28A20A84A18DB1EF(FName NotifyName);
    void OnBlendOut_2BC7936F4DB6083A28A20A84A18DB1EF(FName NotifyName);
    void OnCompleted_2BC7936F4DB6083A28A20A84A18DB1EF(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_Action_Unique_RobinHood_Snipe(int32 EntryPoint);
}; // Size: 0x241

#endif

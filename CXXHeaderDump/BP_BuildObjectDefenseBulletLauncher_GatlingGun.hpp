#ifndef UE4SS_SDK_BP_BuildObjectDefenseBulletLauncher_GatlingGun_HPP
#define UE4SS_SDK_BP_BuildObjectDefenseBulletLauncher_GatlingGun_HPP

class ABP_BuildObjectDefenseBulletLauncher_GatlingGun_C : public ABP_BuildObjectDefenseBulletLauncher_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05E0 (size: 0x8)
    class UArrowComponent* CharacterLocation;                                         // 0x05E8 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x05F0 (size: 0x8)
    class UStaticMeshComponent* Table;                                                // 0x05F8 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0600 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0608 (size: 0x8)

    FRotator GetCharacterRotation();
    FVector GetCharacterLocation();
    void SetEnableTrigger(bool EnableTrigger);
    void SetOwnerCharacter(const class APalCharacter* OwnerCharacter);
    void TurnToTarget(const class AActor* TargetActor, float DeltaTime);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BuildObjectDefenseBulletLauncher_GatlingGun(int32 EntryPoint);
}; // Size: 0x610

#endif

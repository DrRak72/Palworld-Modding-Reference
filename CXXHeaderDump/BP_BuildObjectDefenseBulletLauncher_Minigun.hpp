#ifndef UE4SS_SDK_BP_BuildObjectDefenseBulletLauncher_Minigun_HPP
#define UE4SS_SDK_BP_BuildObjectDefenseBulletLauncher_Minigun_HPP

class ABP_BuildObjectDefenseBulletLauncher_Minigun_C : public ABP_BuildObjectDefenseBulletLauncher_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05E0 (size: 0x8)
    class UStaticMeshComponent* Table;                                                // 0x05E8 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05F0 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x05F8 (size: 0x8)
    class UArrowComponent* CharacterLocation;                                         // 0x0600 (size: 0x8)
    class UChildActorComponent* WeaponActor_0;                                        // 0x0608 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0610 (size: 0x8)

    FRotator GetCharacterRotation();
    FVector GetCharacterLocation();
    void TurnToTarget(const class AActor* TargetActor, float DeltaTime);
    void ReceiveBeginPlay();
    void SetOwnerCharacter(const class APalCharacter* OwnerCharacter);
    void SetEnableTrigger(bool EnableTrigger);
    void ExecuteUbergraph_BP_BuildObjectDefenseBulletLauncher_Minigun(int32 EntryPoint);
}; // Size: 0x618

#endif

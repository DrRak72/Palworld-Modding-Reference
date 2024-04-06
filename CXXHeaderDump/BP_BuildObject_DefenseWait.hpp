#ifndef UE4SS_SDK_BP_BuildObject_DefenseWait_HPP
#define UE4SS_SDK_BP_BuildObject_DefenseWait_HPP

class ABP_BuildObject_DefenseWait_C : public APalBuildObjectDefenseBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0598 (size: 0x8)
    class UArrowComponent* CharacterLocation;                                         // 0x05A0 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x05A8 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05B0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05B8 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x05C0 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x05C8 (size: 0x8)

    FRotator GetCharacterRotation();
    FVector GetCharacterLocation();
    bool IsShowOutlineInReticleTargetting();
    void TurnToTarget(const class AActor* TargetActor, float DeltaTime);
    void SetOwnerCharacter(const class APalCharacter* OwnerCharacter);
    void SetEnableTrigger(bool EnableTrigger);
    void ExecuteUbergraph_BP_BuildObject_DefenseWait(int32 EntryPoint);
}; // Size: 0x5D0

#endif

#ifndef UE4SS_SDK_BP_ThrowPal_ThrowObject_HPP
#define UE4SS_SDK_BP_ThrowPal_ThrowObject_HPP

class ABP_ThrowPal_ThrowObject_C : public ABP_ThrowObjectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0398 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x03A0 (size: 0x8)
    class USkeletalMeshComponent* SK_Weapon_PalSphere_001;                            // 0x03A8 (size: 0x8)
    bool IsBounce;                                                                    // 0x03B0 (size: 0x1)
    FRotator ThrowRotator;                                                            // 0x03B8 (size: 0x18)

    void FindNearEnemy(class APalCharacter* OwnerCharacter, class APalCharacter*& OutputPin);
    void PostProcessSpawnOtomo(class AActor* HitActor);
    void SpawnOtomo(class APalCharacter*& SpawnOtomo);
    void CollectTarget(class AActor*& NewParam);
    void UpdateRotator(double DeltaTime);
    void OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_ThrowPal_ThrowObject(int32 EntryPoint);
}; // Size: 0x3D0

#endif

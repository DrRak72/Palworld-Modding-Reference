#ifndef UE4SS_SDK_BP_ShotgunBullet_HPP
#define UE4SS_SDK_BP_ShotgunBullet_HPP

class ABP_ShotgunBullet_C : public ABP_AttackBulletBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0378 (size: 0x8)
    class UBP_HitTargetHolder_C* HitHolder;                                           // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void OnDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void ExecuteUbergraph_BP_ShotgunBullet(int32 EntryPoint);
}; // Size: 0x388

#endif

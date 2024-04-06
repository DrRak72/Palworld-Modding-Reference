#ifndef UE4SS_SDK_BP_ThunderBullet_HPP
#define UE4SS_SDK_BP_ThunderBullet_HPP

class ABP_ThunderBullet_C : public ABP_AttackBulletBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0378 (size: 0x8)

    void GetBulletAttackType(EPalAttackType& AttackType);
    void GetBulletElementType(EPalElementType& NewParam);
    void OnDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void ExecuteUbergraph_BP_ThunderBullet(int32 EntryPoint);
}; // Size: 0x380

#endif

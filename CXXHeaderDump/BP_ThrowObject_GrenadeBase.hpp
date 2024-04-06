#ifndef UE4SS_SDK_BP_ThrowObject_GrenadeBase_HPP
#define UE4SS_SDK_BP_ThrowObject_GrenadeBase_HPP

class ABP_ThrowObject_GrenadeBase_C : public ABP_ThrowObjectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0398 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x03A0 (size: 0x8)

    void MeshRotate(double DeltaTime);
    void GetExplosionClass(TSubclassOf<class ABP_ExplosionAttackBase_C>& ExClass);
    void GetMaxBoundCount(int32& Count);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_ThrowObject_GrenadeBase(int32 EntryPoint);
}; // Size: 0x3A8

#endif

#ifndef UE4SS_SDK_BP_GeroBeamAttackCollision_HPP
#define UE4SS_SDK_BP_GeroBeamAttackCollision_HPP

class ABP_GeroBeamAttackCollision_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UNiagaraComponent* NiagaraBeam;                                             // 0x0298 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02A0 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)

    void ActivateCollision(bool Active);
    void SetLength(double Length);
    void GetCollision(class UCapsuleComponent*& Capsule);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_GeroBeamAttackCollision(int32 EntryPoint);
}; // Size: 0x2B8

#endif

#ifndef UE4SS_SDK_BP_ItemBase_HPP
#define UE4SS_SDK_BP_ItemBase_HPP

class ABP_ItemBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0298 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ItemBase(int32 EntryPoint);
}; // Size: 0x2B0

#endif

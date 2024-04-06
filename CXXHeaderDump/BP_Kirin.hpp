#ifndef UE4SS_SDK_BP_Kirin_HPP
#define UE4SS_SDK_BP_Kirin_HPP

class ABP_Kirin_C : public ABP_MonsterBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A10 (size: 0x8)
    class UBP_PalTimerPointLightComponent_C* BP_PalTimerPointLightComponent;          // 0x0A18 (size: 0x8)
    class UPalSpeedCollisionComponent* PalSpeedCollision;                             // 0x0A20 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule2;                        // 0x0A28 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule1;                        // 0x0A30 (size: 0x8)
    class UNiagaraComponent* ThunderNiagaraTail2;                                     // 0x0A38 (size: 0x8)
    class UNiagaraComponent* ThunderNiagaraTail1;                                     // 0x0A40 (size: 0x8)
    class UNiagaraComponent* ThunderNiagaraBody;                                      // 0x0A48 (size: 0x8)
    class UNiagaraComponent* ThunderNiagaraHorn2;                                     // 0x0A50 (size: 0x8)
    class UNiagaraComponent* ThunderNiagaraHorn1;                                     // 0x0A58 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0A60 (size: 0x8)
    double ThuderEffectInterval;                                                      // 0x0A68 (size: 0x8)
    double ThunderEffectDelay;                                                        // 0x0A70 (size: 0x8)

    void GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>& OutComponent);
    void RegistThunderEffect();
    void ThunderHorn1();
    void ThundeHoen2();
    void ThunderBody();
    void ThunderTail1();
    void ThunderTail2();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Kirin(int32 EntryPoint);
}; // Size: 0xA78

#endif

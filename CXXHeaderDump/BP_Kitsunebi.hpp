#ifndef UE4SS_SDK_BP_Kitsunebi_HPP
#define UE4SS_SDK_BP_Kitsunebi_HPP

class ABP_Kitsunebi_C : public ABP_MonsterBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A10 (size: 0x8)
    class UBP_PalTimerPointLightComponent_C* BP_PalTimerPointLightComponent;          // 0x0A18 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule1;                        // 0x0A20 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0A28 (size: 0x8)
    class UBP_CoopParam_Weapon_C* BP_CoopParam_Weapon;                                // 0x0A30 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere1;                          // 0x0A38 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0A40 (size: 0x8)

    void GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>& OutComponent);
    void BndEvt__BP_Kitsunebi_PalPartnerSkillParameter_K2Node_ComponentBoundEvent_2_OnStop__DelegateSignature();
    void ExecuteUbergraph_BP_Kitsunebi(int32 EntryPoint);
}; // Size: 0xA48

#endif

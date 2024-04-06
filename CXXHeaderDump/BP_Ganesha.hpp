#ifndef UE4SS_SDK_BP_Ganesha_HPP
#define UE4SS_SDK_BP_Ganesha_HPP

class ABP_Ganesha_C : public ABP_MonsterBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A10 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere1;                          // 0x0A18 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0A20 (size: 0x8)
    TArray<int32> HealValues;                                                         // 0x0A28 (size: 0x10)

    void GetHealValue(int32& HealValue);
    void BndEvt__BP_Ganesha_PalPartnerSkillParameter_K2Node_ComponentBoundEvent_0_OnStart__DelegateSignature();
    void ExecuteUbergraph_BP_Ganesha(int32 EntryPoint);
}; // Size: 0xA38

#endif

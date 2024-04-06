#ifndef UE4SS_SDK_BP_ColorfulBird_HPP
#define UE4SS_SDK_BP_ColorfulBird_HPP

class ABP_ColorfulBird_C : public ABP_MonsterBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A10 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere1;                          // 0x0A18 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0A20 (size: 0x8)
    class UBP_CoopParam_Weapon_C* BP_CoopParam_Weapon;                                // 0x0A28 (size: 0x8)
    TArray<double> PartnerSkillMagnification;                                         // 0x0A30 (size: 0x10)

    void BndEvt__BP_ColorfulBird_PalPartnerSkillParameter_K2Node_ComponentBoundEvent_3_OnStop__DelegateSignature();
    void ExecuteUbergraph_BP_ColorfulBird(int32 EntryPoint);
}; // Size: 0xA40

#endif

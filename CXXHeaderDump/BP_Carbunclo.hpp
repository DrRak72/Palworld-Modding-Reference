#ifndef UE4SS_SDK_BP_Carbunclo_HPP
#define UE4SS_SDK_BP_Carbunclo_HPP

class ABP_Carbunclo_C : public ABP_MonsterBase_C
{
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule1;                        // 0x0A10 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0A18 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0A20 (size: 0x8)
    class UStaticMeshComponent* StaticMeshComponent_Gun;                              // 0x0A28 (size: 0x8)
    class UBP_CoopParam_OnHeadShot_C* BP_CoopParam_OnHeadShot;                        // 0x0A30 (size: 0x8)

}; // Size: 0xA38

#endif

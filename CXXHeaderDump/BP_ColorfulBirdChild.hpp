#ifndef UE4SS_SDK_BP_ColorfulBirdChild_HPP
#define UE4SS_SDK_BP_ColorfulBirdChild_HPP

class ABP_ColorfulBirdChild_C : public ABP_MonsterBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A10 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule2;                        // 0x0A18 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule1;                        // 0x0A20 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0A28 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere1;                          // 0x0A30 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0A38 (size: 0x8)

    void ReceiveBeginPlay();
    void SelfDestroy();
    void ExecuteUbergraph_BP_ColorfulBirdChild(int32 EntryPoint);
}; // Size: 0xA40

#endif

#ifndef UE4SS_SDK_BP_Monkey_HPP
#define UE4SS_SDK_BP_Monkey_HPP

class ABP_Monkey_C : public ABP_MonsterBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A10 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0A18 (size: 0x8)
    class USceneComponent* AssultrifleModeRayStart;                                   // 0x0A20 (size: 0x8)
    class UBP_CoopParam_AssaultRifleMode_C* BP_CoopParam_AssaultRifleMode;            // 0x0A28 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule2;                        // 0x0A30 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule1;                        // 0x0A38 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0A40 (size: 0x8)
    TArray<double> AimBlurAngles;                                                     // 0x0A48 (size: 0x10)
    TArray<double> PartnerSkillMagnification;                                         // 0x0A58 (size: 0x10)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Monkey(int32 EntryPoint);
}; // Size: 0xA68

#endif

#ifndef UE4SS_SDK_BP_CoopParam_Cover_HPP
#define UE4SS_SDK_BP_CoopParam_Cover_HPP

class UBP_CoopParam_Cover_C : public UActorComponent
{
    double ApproachRadius;                                                            // 0x00A0 (size: 0x8)
    double SlideDistanceInAim;                                                        // 0x00A8 (size: 0x8)
    double ApproachSpeedRate;                                                         // 0x00B0 (size: 0x8)
    class UAnimMontage* AnimMontage;                                                  // 0x00B8 (size: 0x8)

}; // Size: 0xC0

#endif

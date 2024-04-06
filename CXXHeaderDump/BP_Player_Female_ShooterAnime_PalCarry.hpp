#ifndef UE4SS_SDK_BP_Player_Female_ShooterAnime_PalCarry_HPP
#define UE4SS_SDK_BP_Player_Female_ShooterAnime_PalCarry_HPP

class UBP_Player_Female_ShooterAnime_PalCarry_C : public UPalShooterAnimeAssetBase
{
    class UAnimMontage* Ride_Fire_Front;                                              // 0x0280 (size: 0x8)
    class UAnimMontage* Ride_Fire_Right;                                              // 0x0288 (size: 0x8)
    class UAnimMontage* Ride_Fire_Left;                                               // 0x0290 (size: 0x8)

    void ChangeRidePullTriggerAnime(EPalStepAxisType Direction);
}; // Size: 0x298

#endif

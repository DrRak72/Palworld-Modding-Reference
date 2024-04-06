#ifndef UE4SS_SDK_BP_ShooterAnime_BowBase_HPP
#define UE4SS_SDK_BP_ShooterAnime_BowBase_HPP

class UBP_ShooterAnime_BowBase_C : public UPalShooterAnimeAssetBase
{
    class UAnimMontage* ChargeLoop;                                                   // 0x0280 (size: 0x8)
    class UAnimMontage* Charge_Ride_up;                                               // 0x0288 (size: 0x8)
    class UAnimMontage* ChargeLoop_Ride_up;                                           // 0x0290 (size: 0x8)
    class UAnimMontage* Fire_Ride_up;                                                 // 0x0298 (size: 0x8)

    void GetChargeLoopAnime(class UAnimMontage*& Result);
    void Change_FireAnime_forRide();
    void GetChargeLoopAnime_forRide(class UAnimMontage*& Result);
    void Change_ChargeAnime_forRide();
}; // Size: 0x2A0

#endif

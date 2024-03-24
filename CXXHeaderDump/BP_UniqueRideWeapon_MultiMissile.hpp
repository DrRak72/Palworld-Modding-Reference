#ifndef UE4SS_SDK_BP_UniqueRideWeapon_MultiMissile_HPP
#define UE4SS_SDK_BP_UniqueRideWeapon_MultiMissile_HPP

class ABP_UniqueRideWeapon_MultiMissile_C : public ABP_UniqueRideWeapon_RapidBase_C
{
    class UStaticMeshComponent* SM_Missile7;                                          // 0x0558 (size: 0x8)
    class UStaticMeshComponent* SM_Missile13;                                         // 0x0560 (size: 0x8)
    class UStaticMeshComponent* SM_Missile12;                                         // 0x0568 (size: 0x8)
    class UStaticMeshComponent* SM_Missile11;                                         // 0x0570 (size: 0x8)
    class UStaticMeshComponent* SM_Missile10;                                         // 0x0578 (size: 0x8)
    class UStaticMeshComponent* SM_Missile9;                                          // 0x0580 (size: 0x8)
    class UStaticMeshComponent* SM_Missile8;                                          // 0x0588 (size: 0x8)
    class UStaticMeshComponent* SM_Missile6;                                          // 0x0590 (size: 0x8)
    class UStaticMeshComponent* SM_Missile5;                                          // 0x0598 (size: 0x8)
    class UStaticMeshComponent* SM_Missile4;                                          // 0x05A0 (size: 0x8)
    class UStaticMeshComponent* SM_Missile3;                                          // 0x05A8 (size: 0x8)
    class UStaticMeshComponent* SM_Missile2;                                          // 0x05B0 (size: 0x8)
    class UStaticMeshComponent* SM_Missile1;                                          // 0x05B8 (size: 0x8)
    class UStaticMeshComponent* SM_Missile;                                           // 0x05C0 (size: 0x8)
    class UStaticMeshComponent* SM_MultiMissle_Launcher_R;                            // 0x05C8 (size: 0x8)
    class UStaticMeshComponent* SM_MultiMissle_Launcher_L;                            // 0x05D0 (size: 0x8)
    TArray<FFMissileMuzzleList> MuzzleList;                                           // 0x05D8 (size: 0x10)
    int32 MuzzleIndex;                                                                // 0x05E8 (size: 0x4)
    FTimerHandle ShotIntervalTimerHandle;                                             // 0x05F0 (size: 0x8)
    double MissileBlur;                                                               // 0x05F8 (size: 0x8)

    void GetAllMeshComponent(TArray<class UMeshComponent*>& OutMesh);
    void ShootBulletBP();
    void GetShootInterval(double& Time);
    void ShootMiso();
}; // Size: 0x600

#endif

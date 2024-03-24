#ifndef UE4SS_SDK_BPI_SkillEffect_HPP
#define UE4SS_SDK_BPI_SkillEffect_HPP

class IBPI_SkillEffect_C : public IInterface
{

    void CancelShoot();
    void ShootBullet(FVector TargetLocation);
}; // Size: 0x28

#endif

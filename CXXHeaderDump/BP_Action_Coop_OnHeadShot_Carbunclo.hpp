#ifndef UE4SS_SDK_BP_Action_Coop_OnHeadShot_Carbunclo_HPP
#define UE4SS_SDK_BP_Action_Coop_OnHeadShot_Carbunclo_HPP

class UBP_Action_Coop_OnHeadShot_Carbunclo_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0140 (size: 0x8)
    class UBP_CoopParam_OnHeadShot_C* CoopParam;                                      // 0x0148 (size: 0x8)
    class APalCharacter* PlayerCharacter;                                             // 0x0150 (size: 0x8)
    class UPalShooterComponent* ShooterCP;                                            // 0x0158 (size: 0x8)

    void SetEnabledCollision(bool Enable);
    void UpdateAnimation();
    void UpdateTransform();
    void ShootEnd();
    void ShootStart();
    void ChangeAnime(class UAnimMontage* NewAnime, class UAnimMontage* StopAnime, class UAnimMontage* StopAnime2);
    void GetGunMesh(class UStaticMeshComponent*& Output);
    void SetGunVisibility(bool IsVisible);
    void FinishAction();
    void SetupAction();
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ShootStart_Event();
    void ShootEnd_Event();
    void ExecuteUbergraph_BP_Action_Coop_OnHeadShot_Carbunclo(int32 EntryPoint);
}; // Size: 0x160

#endif

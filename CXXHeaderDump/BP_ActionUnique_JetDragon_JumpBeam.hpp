#ifndef UE4SS_SDK_BP_ActionUnique_JetDragon_JumpBeam_HPP
#define UE4SS_SDK_BP_ActionUnique_JetDragon_JumpBeam_HPP

class UBP_ActionUnique_JetDragon_JumpBeam_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    TArray<FReserveMontage> montageList;                                              // 0x0218 (size: 0x10)
    double AttackTime;                                                                // 0x0228 (size: 0x8)
    double AttackInterval;                                                            // 0x0230 (size: 0x8)
    FTimerHandle EndAttackTimer;                                                      // 0x0238 (size: 0x8)
    FTimerHandle AttackTimer;                                                         // 0x0240 (size: 0x8)
    TArray<FName> BeamSockets;                                                        // 0x0248 (size: 0x10)
    int32 AttackCount;                                                                // 0x0258 (size: 0x4)

    void OnNotifyEnd_992F77B54817D3C2718D0CBB83C7222F(FName NotifyName);
    void OnNotifyBegin_992F77B54817D3C2718D0CBB83C7222F(FName NotifyName);
    void OnInterrupted_992F77B54817D3C2718D0CBB83C7222F(FName NotifyName);
    void OnBlendOut_992F77B54817D3C2718D0CBB83C7222F(FName NotifyName);
    void OnCompleted_992F77B54817D3C2718D0CBB83C7222F(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
    void TickAction(float DeltaTime);
    void OnEndAttack();
    void OnAttack();
    void SpawnBlast(FVector Location);
    void ExecuteUbergraph_BP_ActionUnique_JetDragon_JumpBeam(int32 EntryPoint);
}; // Size: 0x25C

#endif

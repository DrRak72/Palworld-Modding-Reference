#ifndef UE4SS_SDK_BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_HPP
#define UE4SS_SDK_BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_HPP

class UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    TEnumAsByte<EAction_ThunderSwordAttack::Type> AttackState;                        // 0x0218 (size: 0x1)
    double JumpAmplitude;                                                             // 0x0220 (size: 0x8)
    class ABP_SkillEffect_Unique_ThunderSword_C* ThunderSword;                        // 0x0228 (size: 0x8)
    float OriginalGravity;                                                            // 0x0230 (size: 0x4)
    double JumpHeight;                                                                // 0x0238 (size: 0x8)
    double GravityRatio;                                                              // 0x0240 (size: 0x8)
    double JumpAttenuation;                                                           // 0x0248 (size: 0x8)

    void GetAjustedTargetLocation(FVector& Location);
    void CalcCurrentLocation(double DeltaTime, FVector& Location);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void UpdateAttackState(class UAnimMontage* Montage, FName NotifyName);
    void EndAction();
    void ExecuteUbergraph_BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack(int32 EntryPoint);
}; // Size: 0x250

#endif

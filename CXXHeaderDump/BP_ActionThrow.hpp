#ifndef UE4SS_SDK_BP_ActionThrow_HPP
#define UE4SS_SDK_BP_ActionThrow_HPP

class UBP_ActionThrow_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    bool IsShooted;                                                                   // 0x02C0 (size: 0x1)

    void OnStartProcessAnimation();
    void Shoot();
    void OnBreakAction();
    void ExecuteUbergraph_BP_ActionThrow(int32 EntryPoint);
}; // Size: 0x2C1

#endif

#ifndef UE4SS_SDK_BP_ActionDiamondFall_HPP
#define UE4SS_SDK_BP_ActionDiamondFall_HPP

class UBP_ActionDiamondFall_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)

    void OnBeginAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_ActionDiamondFall(int32 EntryPoint);
}; // Size: 0x2C0

#endif

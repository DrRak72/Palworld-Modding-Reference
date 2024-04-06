#ifndef UE4SS_SDK_BP_RepairAllWindowDispatchParameter_HPP
#define UE4SS_SDK_BP_RepairAllWindowDispatchParameter_HPP

class UBP_RepairAllWindowDispatchParameter_C : public UPalHUDDispatchParameterBase
{
    TArray<class UPalItemSlot*> TargetItemSlots;                                      // 0x0038 (size: 0x10)
    TArray<FPalStaticItemIdAndNum> RequireMaterials;                                  // 0x0048 (size: 0x10)
    bool OutResult;                                                                   // 0x0058 (size: 0x1)

}; // Size: 0x59

#endif

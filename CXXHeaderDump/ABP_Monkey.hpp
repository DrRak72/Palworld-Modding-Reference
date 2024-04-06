#ifndef UE4SS_SDK_ABP_Monkey_HPP
#define UE4SS_SDK_ABP_Monkey_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintGeneratedConstantData
{
}; // Size: 0x190

class UABP_Monkey_C : public UABP_MonsterBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x2280 (size: 0x8)

    void UpdateAiming();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_Monkey(int32 EntryPoint);
}; // Size: 0x2288

#endif

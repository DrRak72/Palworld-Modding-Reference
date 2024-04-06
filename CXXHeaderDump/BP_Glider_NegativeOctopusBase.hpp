#ifndef UE4SS_SDK_BP_Glider_NegativeOctopusBase_HPP
#define UE4SS_SDK_BP_Glider_NegativeOctopusBase_HPP

class ABP_Glider_NegativeOctopusBase_C : public ABP_GliderObjectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USkeletalMeshComponent* SK_NegativeOctopus;                                 // 0x0320 (size: 0x8)

    void OnStartGliding();
    void OnEndGliding();
    void ExecuteUbergraph_BP_Glider_NegativeOctopusBase(int32 EntryPoint);
}; // Size: 0x328

#endif

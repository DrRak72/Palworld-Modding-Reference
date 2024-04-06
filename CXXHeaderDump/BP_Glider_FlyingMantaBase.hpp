#ifndef UE4SS_SDK_BP_Glider_FlyingMantaBase_HPP
#define UE4SS_SDK_BP_Glider_FlyingMantaBase_HPP

class ABP_Glider_FlyingMantaBase_C : public ABP_GliderObjectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USkeletalMeshComponent* SK_FlyingManta;                                     // 0x0320 (size: 0x8)

    void OnStartGliding();
    void OnEndGliding();
    void ExecuteUbergraph_BP_Glider_FlyingMantaBase(int32 EntryPoint);
}; // Size: 0x328

#endif

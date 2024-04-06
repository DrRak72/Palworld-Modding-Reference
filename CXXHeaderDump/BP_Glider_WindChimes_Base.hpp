#ifndef UE4SS_SDK_BP_Glider_WindChimes_Base_HPP
#define UE4SS_SDK_BP_Glider_WindChimes_Base_HPP

class ABP_Glider_WindChimes_Base_C : public ABP_GliderObjectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USkeletalMeshComponent* Glider;                                             // 0x0320 (size: 0x8)

    void OnStartGliding();
    void OnEndGliding();
    void ExecuteUbergraph_BP_Glider_WindChimes_Base(int32 EntryPoint);
}; // Size: 0x328

#endif

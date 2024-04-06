#ifndef UE4SS_SDK_BP_Glider_EagleBase_HPP
#define UE4SS_SDK_BP_Glider_EagleBase_HPP

class ABP_Glider_EagleBase_C : public ABP_GliderObjectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USkeletalMeshComponent* EagleMesh;                                          // 0x0320 (size: 0x8)

    void ReceiveBeginPlay();
    void OnStartGliding();
    void OnEndGliding();
    void ExecuteUbergraph_BP_Glider_EagleBase(int32 EntryPoint);
}; // Size: 0x328

#endif

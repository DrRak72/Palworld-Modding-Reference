#ifndef UE4SS_SDK_BP_PalSphere_Body_Master_HPP
#define UE4SS_SDK_BP_PalSphere_Body_Master_HPP

class ABP_PalSphere_Body_Master_C : public ABP_PalSphere_Body_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0468 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PalSphere_Body_Master(int32 EntryPoint);
}; // Size: 0x470

#endif

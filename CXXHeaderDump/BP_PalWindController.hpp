#ifndef UE4SS_SDK_BP_PalWindController_HPP
#define UE4SS_SDK_BP_PalWindController_HPP

class ABP_PalWindController_C : public APalWindController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B60 (size: 0x8)

    void UpdateNPC(FPalWindInfo& WindInfo);
    void UpdateNiagaraParameterCollection(const FPalWindInfo& WindInfo);
    void ExecuteUbergraph_BP_PalWindController(int32 EntryPoint);
}; // Size: 0xB68

#endif

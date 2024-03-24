#ifndef UE4SS_SDK_BP_VisualEffect_Status_Poisoned_HPP
#define UE4SS_SDK_BP_VisualEffect_Status_Poisoned_HPP

class UBP_VisualEffect_Status_Poisoned_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0068 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0070 (size: 0x8)

    void OnBeginVisualEffect();
    void OnEndVisualEffect();
    void ExecuteUbergraph_BP_VisualEffect_Status_Poisoned(int32 EntryPoint);
}; // Size: 0x78

#endif

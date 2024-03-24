#ifndef UE4SS_SDK_BP_ActionDeforest_HPP
#define UE4SS_SDK_BP_ActionDeforest_HPP

class UBP_ActionDeforest_C : public UBP_ActionSimpleMonoMontage_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0168 (size: 0x8)
    FName flagName;                                                                   // 0x0170 (size: 0x8)
    class AActor* ToolActor;                                                          // 0x0178 (size: 0x8)

    void OnEndAction();
    void OnBeginAction();
    void OnBeginAnimNotify(class UAnimMontage* Montage, FName NotifyName);
    void ExecuteUbergraph_BP_ActionDeforest(int32 EntryPoint);
}; // Size: 0x180

#endif

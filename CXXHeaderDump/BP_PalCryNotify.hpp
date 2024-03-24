#ifndef UE4SS_SDK_BP_PalCryNotify_HPP
#define UE4SS_SDK_BP_PalCryNotify_HPP

class UBP_PalCryNotify_C : public UAnimNotify
{
    TArray<FName> Emo State;                                                          // 0x0038 (size: 0x10)
    int32 Probability;                                                                // 0x0048 (size: 0x4)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
}; // Size: 0x4C

#endif

#ifndef UE4SS_SDK_BP_WeaponEjectNotify_HPP
#define UE4SS_SDK_BP_WeaponEjectNotify_HPP

class UBP_WeaponEjectNotify_C : public UAnimNotify
{
    TSubclassOf<class AActor> EjectCasing;                                            // 0x0038 (size: 0x8)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
}; // Size: 0x40

#endif

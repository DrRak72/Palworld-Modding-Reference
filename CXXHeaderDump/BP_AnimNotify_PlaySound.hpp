#ifndef UE4SS_SDK_BP_AnimNotify_PlaySound_HPP
#define UE4SS_SDK_BP_AnimNotify_PlaySound_HPP

class UBP_AnimNotify_PlaySound_C : public UAnimNotify
{
    bool Mute;                                                                        // 0x0038 (size: 0x1)
    FPalDataTableRowName_SoundID SoundId;                                             // 0x003C (size: 0x8)
    FPalSoundOptions SoundOption;                                                     // 0x0044 (size: 0x4)
    FName SocketName;                                                                 // 0x0048 (size: 0x8)
    TSoftClassPtr<UPalSoundSlot> DebugSoundSlot;                                      // 0x0050 (size: 0x30)
    TEnumAsByte<EPhysicalSurface> DebugPhysicsMaterial;                               // 0x0080 (size: 0x1)

    void PlaySoundEditor(class UMeshComponent* MeshComp);
    void PlaySound(class UMeshComponent* MeshComp);
    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
}; // Size: 0x81

#endif

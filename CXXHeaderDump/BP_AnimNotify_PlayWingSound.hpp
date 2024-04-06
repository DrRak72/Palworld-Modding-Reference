#ifndef UE4SS_SDK_BP_AnimNotify_PlayWingSound_HPP
#define UE4SS_SDK_BP_AnimNotify_PlayWingSound_HPP

class UBP_AnimNotify_PlayWingSound_C : public UBP_AnimNotify_PlaySound_C
{
    FString Switch Group;                                                             // 0x0088 (size: 0x10)

    void MakeSwitchStatePalSize(class APalMonsterCharacter* Pal, FString& PalSize);
    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
}; // Size: 0x98

#endif
